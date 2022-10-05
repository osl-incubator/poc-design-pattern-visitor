poc_visitor_build_lib = static_library(
  'poc-visitor-build',
  project_src_files,
  include_directories : inc,
  install : false,
  dependencies : deps)

test_suite = [
  ['visitor', files(PROJECT_PATH + '/tests/test_visitor.cpp')],
]

foreach test_item : test_suite
    test_name = test_item[0]
    test_src_files = test_item[1] + files(PROJECT_PATH + '/tests/main.cpp')

    executable_name_suffix = test_name + '_tests'
    test_executable = executable(
      'poc_visitor_' + executable_name_suffix,
      test_src_files,
      include_directories : inc,
      dependencies : deps,
      link_whole: poc_visitor_build_lib)

    test(
      executable_name_suffix,
      test_executable,
      workdir : meson.source_root())
endforeach
