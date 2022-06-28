ncurses_dep = dependency('ncurses')

code_lib = static_library('code_lib',
    'program.c',
    include_directories: '.',
    dependencies : [ncurses_dep],
    install: true)

code_dep = declare_dependency(
    link_with: code_lib,
    include_directories: '.')

executable('prog',
    'main.c',
    dependencies: [code_dep],
    install: true)
