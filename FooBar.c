// need to include Ruby header file
#include "ruby.h"

// define a space for info about the module
VALUE FooBar = Qnil;
// declare the init method - Ruby will need this
void Init_foobar();
// declare 'natas' method
VALUE method_natas(VALUE self);
// init method for the module
void Init_foobar() {
  FooBar = rb_define_module("FooBar");
  rb_define_method(FooBar, "natas", method_natas, 0);
}
// 'natas' method definition - 666
VALUE method_natas(VALUE self) {
  int x = 666;
  return INT2NUM(x);
}
