#工具说明
To use the binary packages, place the "bin" directory in your PATH.
The C compiler is 	"arm-none-eabi-gcc".  
The C++ compiler is "arm-none-eabi-g++".
  
#Gcc
To compile a C program "test.c" and produce an executable "test.exe"
use the following command:

  arm-none-eabi-gcc test.c -o test.exe

#G++
To compile a C++ program "test.cc" and produce an executable
"test.exe" use the following command:

  arm-none-eabi-g++ test.cc -o test.exe

#Others
Additional documentation is available in the GNU "info" format in the
"info" subdirectory after installation.  For example, if you have the
GNU info reader installed, you can use:

  info -f ./info/gcc.info

to read the manual for the GNU C and C++ compilers.