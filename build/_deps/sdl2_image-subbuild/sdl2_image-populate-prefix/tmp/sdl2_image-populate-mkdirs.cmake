# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/lib/sdl2_image"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_image-build"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_image-subbuild/sdl2_image-populate-prefix"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_image-subbuild/sdl2_image-populate-prefix/tmp"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_image-subbuild/sdl2_image-populate-prefix/src/sdl2_image-populate-stamp"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_image-subbuild/sdl2_image-populate-prefix/src"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_image-subbuild/sdl2_image-populate-prefix/src/sdl2_image-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_image-subbuild/sdl2_image-populate-prefix/src/sdl2_image-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_image-subbuild/sdl2_image-populate-prefix/src/sdl2_image-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
