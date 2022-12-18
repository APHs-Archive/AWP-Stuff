file(GLOB_RECURSE observerSrc CONFIGURE_DEPENDS "*.cpp" "*.h")
add_library(Observer ${observerSrc})