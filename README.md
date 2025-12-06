# CCM
CCMake (CCM) is a solution to large CMakeLists.txt files. Generate them with one CLI utility and start building your C/C++ projects

## Usage
ccm [options]  
Options:  
-n Project name  
-s Source file  
-i Include directory  
-e Extarnal Cmake subdirectory  
-f Find Package statement (always required)  
-v CMake Version (default 3.14)
-c C or C++

## Example
ccm -n "hellow" -s "src/main.cpp" -s "src/helper.cpp" -i "Include" -e "thirdParty/glfw3" -f "OpenGL" -v "3.15" -c "C++"

## The pipeline
ccm (this programm) -> CMake -> Generator (Make/Ninja) -> Compiler (gcc/g++/msvc/clang)