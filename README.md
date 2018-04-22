## Create a super-basic C extension for Ruby

1. Make a file called extconf.rb
   Require mkmf, add boilerplate methods
2. Make your C file (this one is called FooBar.c)
   Add some boilerplate, write your C program
3. run: `ruby extconf.rb`
   This generates a Makefile
4. Run it: `make`
   This compiles your C code into a bundle.
5. I've added an `init.rb` file which includes the file into the Ruby load path,
   requires it, and loads an irb session.
   Notice that our `natas` method belongs to the `FooBar` module we added.
6. From inside the repl just type `natas` and see what happens! ☜(⌒▽⌒)☞



--

Otherwise, just clone this repos. Then run `ruby extconf.rb`, then run `make`, then run `ruby init.rb`


For reference: https://github.com/ruby/ruby/blob/trunk/doc/extension.rdoc
