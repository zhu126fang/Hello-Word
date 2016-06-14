arm-none-linux-gnueabi-readelf.exe -a plclinux
arm-none-linux-gnueabi-readelf.exe -a hello | find /i "shared library"
arm-none-linux-gnueabi-readelf.exe -a plclinux| find /i "shared library"
pause