# need to include this project in our Ruby load path
$:.unshift( File.join(File.dirname(__FILE__)) )
#
# includes our compiled c ext called foobar
require 'foobar'
# includes the module we created inside our c ext
# now we have access to our `natas` method
include FooBar
#
# just for convenience
require 'irb'
IRB.start
