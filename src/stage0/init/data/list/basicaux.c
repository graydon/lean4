// Lean compiler output
// Module: init.data.list.basicaux
// Imports: init.data.list.basic init.util
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_List_getD___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_tail_x21___rarg___boxed(lean_object*);
lean_object* l_List_get_x21___main___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_panicWithPos___at_List_tail_x21___spec__1(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_get_x3f___rarg(lean_object*, lean_object*);
lean_object* l_List_tailD___rarg(lean_object*, lean_object*);
lean_object* l_List_get_x21___main___rarg___closed__2;
lean_object* l_List_head_x3f___rarg___boxed(lean_object*);
lean_object* l_List_tail_x3f(lean_object*);
lean_object* l_List_get_x21(lean_object*);
lean_object* l_panicWithPos___at_List_tail_x21___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x21(lean_object*);
lean_object* l_List_tail_x21(lean_object*);
lean_object* l_List_get_x21___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_get_x21___main(lean_object*);
lean_object* l_List_get_x21___main___rarg___closed__1;
lean_object* l_List_get_x3f___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
extern lean_object* l_panicWithPos___rarg___closed__3;
lean_object* l_List_head_x3f(lean_object*);
lean_object* l_List_getLastD___rarg(lean_object*, lean_object*);
lean_object* l_List_getLast___main___rarg(lean_object*, lean_object*);
lean_object* l_List_headD___rarg(lean_object*, lean_object*);
lean_object* l_List_head_x21___rarg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_getLastD___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_get_x3f(lean_object*);
lean_object* l_List_tailD(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___rarg___boxed(lean_object*);
lean_object* l_List_head_x21___rarg___closed__1;
extern lean_object* l_panicWithPos___rarg___closed__1;
lean_object* l_List_tail_x3f___rarg(lean_object*);
lean_object* l_List_getD___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast___rarg(lean_object*, lean_object*);
lean_object* l_List_get_x3f___main___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_getLastD(lean_object*);
lean_object* l_List_getLast___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_get_x3f___main___rarg(lean_object*, lean_object*);
lean_object* l_panic(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast(lean_object*);
lean_object* l_List_get_x21___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x21___rarg(lean_object*, lean_object*);
lean_object* l_panicWithPos___at_List_tail_x21___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_getD(lean_object*);
lean_object* l_List_head_x3f___rarg(lean_object*);
lean_object* l_List_tailD___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___rarg(lean_object*);
lean_object* l_List_get_x21___main___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_headD(lean_object*);
lean_object* l_List_getLast_x21___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_getLast___main___rarg___boxed(lean_object*, lean_object*);
extern lean_object* l_panicWithPos___rarg___closed__2;
lean_object* l_List_getLast_x21(lean_object*);
lean_object* l_List_tail_x21___rarg(lean_object*);
lean_object* l_List_getLast_x3f(lean_object*);
lean_object* l_List_getLast___main(lean_object*);
lean_object* l_List_tail_x3f___rarg___boxed(lean_object*);
lean_object* l_List_get_x3f___main(lean_object*);
lean_object* l_List_head_x21___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_headD___rarg___boxed(lean_object*, lean_object*);
lean_object* l_panicWithPos___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* _init_l_List_get_x21___main___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("/Users/leonardodemoura/projects/lean4/library/init/data/list/basicaux.lean");
return x_1;
}
}
lean_object* _init_l_List_get_x21___main___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid index");
return x_1;
}
}
lean_object* l_List_get_x21___main___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_6 = l_List_get_x21___main___rarg___closed__1;
x_7 = lean_unsigned_to_nat(21u);
x_8 = lean_unsigned_to_nat(16u);
x_9 = l_List_get_x21___main___rarg___closed__2;
x_10 = l_panicWithPos___rarg(x_1, x_6, x_7, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_2, x_12);
lean_dec(x_2);
x_2 = x_13;
x_3 = x_11;
goto _start;
}
}
else
{
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = l_List_get_x21___main___rarg___closed__1;
x_16 = lean_unsigned_to_nat(21u);
x_17 = lean_unsigned_to_nat(16u);
x_18 = l_List_get_x21___main___rarg___closed__2;
x_19 = l_panicWithPos___rarg(x_1, x_15, x_16, x_17, x_18);
return x_19;
}
else
{
lean_object* x_20; 
lean_dec(x_1);
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
return x_20;
}
}
}
}
lean_object* l_List_get_x21___main(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_get_x21___main___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_List_get_x21___main___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_get_x21___main___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_List_get_x21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_get_x21___main___rarg(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_List_get_x21(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_get_x21___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_List_get_x21___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_get_x21___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_List_get_x3f___main___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
lean_dec(x_1);
x_1 = x_8;
x_2 = x_6;
goto _start;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
}
lean_object* l_List_get_x3f___main(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_get_x3f___main___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_get_x3f___main___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_get_x3f___main___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_List_get_x3f___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_get_x3f___main___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_List_get_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_get_x3f___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_get_x3f___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_get_x3f___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_List_getD___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_get_x3f___main___rarg(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
}
lean_object* l_List_getD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getD___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_List_getD___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_getD___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* _init_l_List_head_x21___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("empty list");
return x_1;
}
}
lean_object* l_List_head_x21___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_List_get_x21___main___rarg___closed__1;
x_4 = lean_unsigned_to_nat(32u);
x_5 = lean_unsigned_to_nat(10u);
x_6 = l_List_head_x21___rarg___closed__1;
x_7 = l_panicWithPos___rarg(x_1, x_3, x_4, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
return x_8;
}
}
}
lean_object* l_List_head_x21(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_head_x21___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_head_x21___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_head_x21___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_List_head_x3f___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
}
lean_object* l_List_head_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_head_x3f___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_List_head_x3f___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_head_x3f___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_headD___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
}
lean_object* l_List_headD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_headD___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_headD___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_headD___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_panicWithPos___at_List_tail_x21___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_5 = lean_box(0);
x_6 = l_panicWithPos___rarg___closed__1;
x_7 = lean_string_append(x_6, x_1);
x_8 = l_panicWithPos___rarg___closed__2;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_Nat_repr(x_2);
x_11 = lean_string_append(x_9, x_10);
lean_dec(x_10);
x_12 = l_panicWithPos___rarg___closed__2;
x_13 = lean_string_append(x_11, x_12);
x_14 = l_Nat_repr(x_3);
x_15 = lean_string_append(x_13, x_14);
lean_dec(x_14);
x_16 = l_panicWithPos___rarg___closed__3;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_string_append(x_17, x_4);
x_19 = lean_panic_fn(x_18);
return x_19;
}
}
lean_object* l_panicWithPos___at_List_tail_x21___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_panicWithPos___at_List_tail_x21___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_List_tail_x21___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_List_get_x21___main___rarg___closed__1;
x_3 = lean_unsigned_to_nat(44u);
x_4 = lean_unsigned_to_nat(11u);
x_5 = l_List_head_x21___rarg___closed__1;
x_6 = l_panicWithPos___at_List_tail_x21___spec__1___rarg(x_2, x_3, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
return x_7;
}
}
}
lean_object* l_List_tail_x21(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_tail_x21___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_panicWithPos___at_List_tail_x21___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_panicWithPos___at_List_tail_x21___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_List_tail_x21___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_tail_x21___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_tail_x3f___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
}
lean_object* l_List_tail_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_tail_x3f___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_List_tail_x3f___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_tail_x3f___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_tailD___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
}
lean_object* l_List_tailD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_tailD___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_tailD___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_tailD___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_getLast___main___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
return x_4;
}
else
{
x_1 = x_3;
x_2 = lean_box(0);
goto _start;
}
}
}
lean_object* l_List_getLast___main(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getLast___main___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_getLast___main___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_getLast___main___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_getLast___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_getLast___main___rarg(x_1, lean_box(0));
return x_3;
}
}
lean_object* l_List_getLast(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getLast___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_getLast___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_getLast___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_getLast_x21___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_List_get_x21___main___rarg___closed__1;
x_4 = lean_unsigned_to_nat(61u);
x_5 = lean_unsigned_to_nat(11u);
x_6 = l_List_head_x21___rarg___closed__1;
x_7 = l_panicWithPos___rarg(x_1, x_3, x_4, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = l_List_getLast___main___rarg(x_2, lean_box(0));
return x_8;
}
}
}
lean_object* l_List_getLast_x21(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getLast_x21___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_getLast_x21___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_getLast_x21___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_List_getLast_x3f___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_getLast___main___rarg(x_1, lean_box(0));
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
}
lean_object* l_List_getLast_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getLast_x3f___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_List_getLast_x3f___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_getLast_x3f___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_getLastD___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = l_List_getLast___main___rarg(x_1, lean_box(0));
return x_3;
}
}
}
lean_object* l_List_getLastD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getLastD___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_getLastD___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_getLastD___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_init_data_list_basic(lean_object*);
lean_object* initialize_init_util(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_init_data_list_basicaux(lean_object* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (lean_io_result_is_error(w)) return w;
w = initialize_init_data_list_basic(w);
if (lean_io_result_is_error(w)) return w;
w = initialize_init_util(w);
if (lean_io_result_is_error(w)) return w;
l_List_get_x21___main___rarg___closed__1 = _init_l_List_get_x21___main___rarg___closed__1();
lean_mark_persistent(l_List_get_x21___main___rarg___closed__1);
l_List_get_x21___main___rarg___closed__2 = _init_l_List_get_x21___main___rarg___closed__2();
lean_mark_persistent(l_List_get_x21___main___rarg___closed__2);
l_List_head_x21___rarg___closed__1 = _init_l_List_head_x21___rarg___closed__1();
lean_mark_persistent(l_List_head_x21___rarg___closed__1);
return w;
}
#ifdef __cplusplus
}
#endif