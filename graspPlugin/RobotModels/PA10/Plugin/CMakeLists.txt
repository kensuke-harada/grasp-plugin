#   c) Tokuo Tsuji (Kyushu univ./AIST) and Kensuke Harada (AIST)

if(UNIX)
  if(CMAKE_MAJOR_VERSION EQUAL 2 AND CMAKE_MINOR_VERSION LESS 5)
    set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR} )
  else()
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} )
  endif()
endif()



set(libname GrasplotPA10)

set(sources
GrasplotPluginPA10.cpp
)

set(headers
GrasplotPluginPA10.h
  )

include_directories(${Choreonoid_SOURCE_DIR})

add_library(${libname} SHARED ${sources} ${headers} )

set_target_properties(${libname} PROPERTIES VERSION 0.0.0 SOVERSION 0)

#target_link_libraries(${libname} Excade${EXCADE_VERSION_SUFFIX} ExcadeGrasplot${EXCADE_VERSION_SUFFIX})
target_link_libraries(${libname} CnoidGraspPlugin)

  install(TARGETS ${libname}
    RUNTIME DESTINATION bin CONFIGURATIONS Release Debug
    LIBRARY DESTINATION ${CMAKE_CURRENT_SOURCE_DIR} CONFIGURATIONS Release Debug
    LIBRARY DESTINATION ${CNOID_PLUGIN_SUBDIR} CONFIGURATIONS Release Debug)

if(INSTALL_SDK)
  install(FILES ${headers} DESTINATION ${CNOID_HEADER_SUBDIR}/extplugin/graspPlugin/Grasp)
endif()

