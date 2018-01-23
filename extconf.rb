# used to generate makefiles for Ruby extensions
require 'mkmf'
# name it
extension_name = 'foobar'
# destination
dir_config(extension_name)
create_makefile(extension_name)
