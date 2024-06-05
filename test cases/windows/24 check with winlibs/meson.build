project('build-with-winlibs', 'c')

f = configure_file(input: 'prog.c', output: 'prog.c', copy: true)
cc = meson.get_compiler('c')
if not cc.links(f)
    error('compiler.links() does not apply winlibs')
endif
