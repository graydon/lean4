import logic logic.axioms.hilbert
open inhabited nonempty

definition v1 : Prop := epsilon (λ x, true)
inductive Empty : Type
definition v2 : Empty := epsilon (λ x, true)
