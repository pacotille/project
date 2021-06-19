#project(projectB C)

include_directories(include)

file(GLOB SOURCES lu-settings.c)

add_compile_options(
    "$<$<CONFIG:DEBUG>:-g3>"
)

add_compile_options( "$<$<CONFIG:RELEASE>:-O3;-funroll-loops>" )


add_library(projectB ${SOURCES})

target_include_directories(projectB
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

#install(TARGETS projectB
#    LIBRARY DESTINATION lib
#    ARCHIVE DESTINATION lib)
