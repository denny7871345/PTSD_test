# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/lib/sdl2_ttf"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_ttf-build"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_ttf-subbuild/sdl2_ttf-populate-prefix"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_ttf-subbuild/sdl2_ttf-populate-prefix/tmp"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_ttf-subbuild/sdl2_ttf-populate-prefix/src/sdl2_ttf-populate-stamp"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_ttf-subbuild/sdl2_ttf-populate-prefix/src"
  "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_ttf-subbuild/sdl2_ttf-populate-prefix/src/sdl2_ttf-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_ttf-subbuild/sdl2_ttf-populate-prefix/src/sdl2_ttf-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/USER/Desktop/OOP/build/_deps/sdl2_ttf-subbuild/sdl2_ttf-populate-prefix/src/sdl2_ttf-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
