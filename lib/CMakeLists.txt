file(GLOB PANGU_LIB_SRC
    include/*.h
    src/*.cc)

add_library(pangu-lib SHARED ${PANGU_LIB_SRC})

