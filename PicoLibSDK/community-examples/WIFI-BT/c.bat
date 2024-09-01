@echo off
rem Compilation...

set TARGET=WIFI-BT
set GRPDIR=DEMO
set MEMMAP=

set "origin_folder=%CD%"
mkdir "..\..\sdk\PicoPad\DEMO\WIFI-BT" 2>nul
xcopy /E /Y "*.*" "..\..\sdk\PicoPad\DEMO\WIFI-BT"
cd /d "..\..\sdk\PicoPad\DEMO\WIFI-BT"

call ..\..\..\_c1.bat picopad10

cd /d "%origin_folder%"
xcopy /E /Y "..\..\sdk\PicoPad\DEMO\WIFI-BT\*" "%origin_folder%"
rmdir /S /Q "..\..\sdk\PicoPad\DEMO\WIFI-BT"
