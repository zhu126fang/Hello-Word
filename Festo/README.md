#程序说明
	所有程序编译时均添加了-static参数</p>
	因此，编译生成的文件均比较大;</p>
	所以应该尽可能的少引用库。</p>
	
#程序执行
##1. c99_static 1545KB</p>
/ffx/codesys/prj # ./c99_static</p>
1*1=1</p>
1*2=2   2*2=4</p>
1*3=3   2*3=6   3*3=9</p>
1*4=4   2*4=8   3*4=12  4*4=16</p>
1*5=5   2*5=10  3*5=15  4*5=20  5*5=25</p>
1*6=6   2*6=12  3*6=18  4*6=24  5*6=30  6*6=36</p>
1*7=7   2*7=14  3*7=21  4*7=28  5*7=35  6*7=42  7*7=49</p>
1*8=8   2*8=16  3*8=24  4*8=32  5*8=40  6*8=48  7*8=56  8*8=64</p>
1*9=9   2*9=18  3*9=27  4*9=36  5*9=45  6*9=54  7*9=63  8*9=72  9*9=81</p>

##2. file_static 1557KB</p>
/ffx/codesys/prj # ./file_static</p>
123</p>
456</p>
456</p>

##3. hello_cc_static 4417KB</p>
/ffx/codesys/prj # ./hello_cc_static</p>
Hello G++!</p>

##4. hello_static 1545KB</p>
/ffx/codesys/prj # ./hello_static.exe</p>
Hello,World!</p>


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