add_executable(pangu main.cc application.cc application.h)

add_dependencies(pangu pangu-lib)

target_include_directories(pangu PUBLIC ${Boost_INCLUDE_DIRS}
                                        ${PANGU_LIB_INCLUDE_DIR})

target_link_libraries(pangu PUBLIC ${Boost_LIBRARIES} pangu-lib)
