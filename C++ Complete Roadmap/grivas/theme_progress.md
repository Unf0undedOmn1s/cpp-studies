# Theme 1: I/O, Logic, Data Types, Syntax, GCC Compiler, Basic Libraries
## Useful Links:
- 'https://cplusplus.com/'
- 'https://cppreference.com'
- 'https://w3schools.com'

# Lang Introduction
- Special Characters: ( ) . , + - * / =
- Using std/without std:
    - using namespace std;
    - using std::cout;
    - using std::endl; 
- `#include <iostream>` -> Basic I/O Library

## Compiler Installation
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
  
## Data Types:
- Boolean: 1 byte | Stores true or false values.
- char: 1 byte | Stores a single character/letter/number, or ASCII values.
- int: 2 or 4 bytes | Stores whole numbers without decimals.
- float: 4 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits.
- double: 8 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits.
## EDITED 11/11/2025

## If Statements
- Less than: `a<b`
- Less than or equal to: `a<=b`
- Greater than: `a>=b`
- Equal to: `a==b`
- Not equal to: `1!=b`

## While Loops:
- Loops can execute a block of code as long as a specified condition is reached.
## EDITED 13/11/2025

## For Loops:
- When you know exactly how many times you want to loop through a block of code.

## First Exercise - Universal Converter in C++
- Used formulas to convert time, temperature, etc
    - Eg: `T(°C) = (T(°F) - 32) × 5/9` -> Fahrenheit to Celcius
- Learned Setprecision: Formatting tool from the <iomanip> library that controls how many digits a floating-point number (like float) is printed with.
    - Eg: `cout << setprecision(3);` -> 154.123 => 154
- Problems Encountered:
    - GCC Compiler would not work on my Windows Machine.
    - Solution => Compiled in `https://www.programiz.com/cpp-programming/online-compiler/`
    - See 'screenshots' -> `cpp-studies/C++ Complete Roadmap/grivas/theme1/screenshots` for more
## EDITED 14/11/2025
