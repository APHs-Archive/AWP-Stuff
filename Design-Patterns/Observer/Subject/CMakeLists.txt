file(GLOB_RECURSE subjectSrc CONFIGURE_DEPENDS "*.cpp" "*.h")
add_library(Subject ${subjectSrc})