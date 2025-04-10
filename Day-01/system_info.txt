@echo off
:: Disables command echoing to keep the output clean.

echo ============================
echo   SYSTEM INFORMATION
echo ============================

:: Display the logged-in username
echo Username: %username%

:: Display Windows version
echo Windows Version:
ver

:: Set console text color to light blue
color b

echo.
echo ============================
echo   DATE AND TIME DETAILS
echo ============================

:: Display current time without prompting for input
echo Current Time: %time%

:: Display current date without prompting for input
echo Current Date: %date%

echo.
echo ============================
echo   DIRECTORY INFORMATION
echo ============================

:: Display files and folders in the current directory (wide format)
echo Listing directory contents in wide format:
dir /w

:: Display help for the 'dir' command
echo Displaying help for 'dir' command:
dir /?

echo.
echo ============================
echo   END OF SCRIPT
echo ============================

:: Pause to keep the window open until a key is pressed
pause
