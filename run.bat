@echo off
::for %%F in (%CD%\*.c) do (
::    gcc "%%F" -o "%%~dpnF.exe"
::)
set SOURCE_FILE=playground
for %%F in (%SOURCE_FILE%) do (
    gcc %SOURCE_FILE%.c -o %%~nF.exe
)
%SOURCE_FILE%.exe
call %CD%\log.bat