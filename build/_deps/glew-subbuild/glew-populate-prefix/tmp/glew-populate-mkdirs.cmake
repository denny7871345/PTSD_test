# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/USER/Desktop/OOP/practical-tools-for-simple-design-main/lib/glew"
  "C:/Users/USER/Desktop/OOP/build/_deps/glew-build"
  "C:/Users/USER/Desktop/OOP/build/_deps/glew-subbuild/glew-populate-prefix"
  "C:/Users/USER/Desktop/OOP/build/_deps/glew-subbuild/glew-populate-prefix/tmp"
  "C:/Users/USER/Desktop/OOP/build/_deps/glew-subbuild/glew-populate-prefix/src/glew-populate-stamp"
  "C:/Users/USER/Desktop/OOP/build/_deps/glew-subbuild/glew-populate-prefix/src"
  "C:/Users/USER/Desktop/OOP/build/_deps/glew-subbuild/glew-populate-prefix/src/glew-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/USER/Desktop/OOP/build/_deps/glew-subbuild/glew-populate-prefix/src/glew-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/USER/Desktop/OOP/build/_deps/glew-subbuild/glew-populate-prefix/src/glew-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()