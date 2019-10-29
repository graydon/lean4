import Init.Lean.MetavarContext
open Lean

def check (b : Bool) : IO Unit :=
unless b (throw "error")

def f := Expr.const `f []
def g := Expr.const `g []
def a := Expr.const `a []
def b := Expr.const `b []
def c := Expr.const `c []

def b0 := Expr.bvar 0
def b1 := Expr.bvar 1
def b2 := Expr.bvar 2

def u := Level.param `u

def typeE := Expr.sort Level.one
def natE  := Expr.const `Nat []
def boolE := Expr.const `Bool []
def vecE  := Expr.const `Vec [Level.zero]

def α := Expr.fvar `α
def x := Expr.fvar `x
def y := Expr.fvar `y
def z := Expr.fvar `z
def w := Expr.fvar `w

def m1 := Expr.mvar `m1
def m2 := Expr.mvar `m2
def m3 := Expr.mvar `m3

def bi := BinderInfo.default
def arrow (d b : Expr) := Expr.forallE `_ bi d b

def lctx1 : LocalContext := {}
def lctx2 := lctx1.mkLocalDecl `α `α typeE
def lctx3 := lctx2.mkLocalDecl `x `x m1
def lctx4 := lctx3.mkLocalDecl `y `y (arrow natE (mkApp m3 #[α, x]))

def mctx1 : MetavarContext := {}
def mctx2  := mctx1.mkDecl `m1 `m1 lctx1 typeE
def mctx3  := mctx2.mkDecl `m2 `m2 lctx3 natE
def mctx4  := mctx3.mkDecl `m3 `m3 lctx1 (arrow typeE (arrow natE natE))
def mctx5  := mctx4.assignDelayed `m3 lctx3 #[α, x] m2
def mctx6  := mctx5.assignExpr `m2 (arrow α α)
def mctx7  := mctx6.assignExpr `m1 natE

def t2 := lctx4.mkLambda #[α, x, y] $ mkApp f #[mkApp m3 #[α, x], x]

#eval check (!t2.hasFVar)
#eval t2
#eval (mctx6.instantiateMVars t2).1
#eval (mctx7.instantiateMVars t2).1
/- m3 is not prompoted to regular assignment until m1 is assigned. Reason: m1 occurs in the type of x, and m3 depends on x.
   This corner case in to correcly handled in the C++ code. -/
#eval (mctx6.instantiateMVars t2).2.getExprAssignment `m3
#eval (mctx7.instantiateMVars t2).2.getExprAssignment `m3