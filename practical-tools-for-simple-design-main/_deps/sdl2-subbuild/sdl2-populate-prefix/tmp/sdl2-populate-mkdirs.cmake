# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/mnt/c/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/lib/sdl2"
  "/mnt/c/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/_deps/sdl2-build"
  "/mnt/c/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/_deps/sdl2-subbuild/sdl2-populate-prefix"
  "/mnt/c/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/_deps/sdl2-subbuild/sdl2-populate-prefix/tmp"
  "/mnt/c/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/_deps/sdl2-subbuild/sdl2-populate-prefix/src/sdl2-populate-stamp"
  "/mnt/c/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/_deps/sdl2-subbuild/sdl2-populate-prefix/src"
  "/mnt/c/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/_deps/sdl2-subbuild/sdl2-populate-prefix/src/sdl2-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/mnt/c/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/_deps/sdl2-subbuild/sdl2-populate-prefix/src/sdl2-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/mnt/c/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/_deps/sdl2-subbuild/sdl2-populate-prefix/src/sdl2-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
