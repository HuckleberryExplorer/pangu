add_executable(pangu main.cc)

add_dependencies(pangu pangu-lib)

target_include_directories(pangu PUBLIC ${PANGU_LIB_INCLUDE_DIR})

target_link_libraries(pangu PUBLIC pangu-lib)