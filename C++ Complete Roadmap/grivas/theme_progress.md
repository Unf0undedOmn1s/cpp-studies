# Theme 1: I/O, Logic, Data Types, Syntax, GCC Compiler, Basic Libraries
## Useful Links:
- 'https://cplusplus.com/'
- 'https://cppreference.com'

- Special Characters: ( ) . , + - * / =
- Using std/without std:
    - using namespace std;
    - using std::cout;
    - using std::endl; 
- `#include <iostream>` -> Basic I/O Library
- GCC Compiler Installation:
    - Ctrl + Shift + X -> Extensions Menu VSC -> C/C++
    - Installation of MSYS2: 'https://www.msys2.org/'
    - Default Path of Installation: `default install path: C:\msys64`
    - Windows Search -> MSYS2 -> Terminal opens up
    - Update the system: `pacman -syu`
    - Install GCC: `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain`
    - Add the path of MinGW-w64 bin folder to the Windows PATH environment variable by using the following steps:
    - In the Windows search bar, search for `Edit environment variables for your account` 
    - In User variables, select the Path variable and then select `Edit`
    - Select New and add the MinGW-w64 destination folder recorded during the installation process to the list. If used the default settings above, then this will be the path:`C:\msys64\ucrt64\bin`
    - Check GCC Version: CMD -> `gcc --version`
  

