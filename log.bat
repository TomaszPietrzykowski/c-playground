@echo off
:: Set the log file name using the current date (log-2024-11-16.txt)
set LOGFILE=log-%DATE:~10,4%-%DATE:~4,2%-%DATE:~7,2%.txt

:: Get the current timestamp (HH:MM:SS)
for /F "tokens=1-3 delims=:" %%a in ("%TIME%") do (
    set HOUR=%%a
    set MINUTE=%%b
    set SECOND=%%c
)

:: Get the current date (YYYY-MM-DD)
set CURRENT_DATE=%DATE:~10,4%-%DATE:~4,2%-%DATE:~7,2%

:: Pre-templated log message
set MESSAGE=Compilation run at %HOUR%:%MINUTE%:%SECOND% on %CURRENT_DATE%.

:: Create log folder if it doesn't exist
set LOGS_DIR=%CD%\logs
if not exist %LOGS_DIR% (
    mkdir logs
)

:: Create log file for date if it is not there and append the log entry
echo %MESSAGE% >> logs\%LOGFILE%

:: Display confirmation
:: echo *** mobula logger 0.0.1
:: echo *** Log entry added to %LOGFILE% at %HOUR%:%MINUTE%:%SECOND%.
:: echo.