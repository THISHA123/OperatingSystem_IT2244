@echo off


echo =====================================
echo         Birthday Calculator
echo =====================================

:: user for birth year
set /p birth_year=Enter your Birth Year: 

::  current year 
for /f "tokens=2 delims==" %%I in ('wmic os get localdatetime /value ^| find "LocalDateTime"') do set current_year=%%I
set current_year=%current_year:~0,4%

:: Calculate the age
set /a age=%current_year% - %birth_year%

:: Display calculated age
echo You are %age% years old.

::  current month and date 
for /f "tokens=2 delims==" %%I in ('wmic os get localdatetime /value ^| find "LocalDateTime"') do set current_datetime=%%I
set current_month=%current_datetime:~4,2%
set current_day=%current_datetime:~6,2%

::  current date information
echo Current Date: %current_day%
echo Current Month: %current_month%
echo Current Year: %current_year%

::  user for birth day
set /p birth_day=Enter your Birth Date (DD): 

::  user for birth month
set /p birth_month=Enter your Birth Month (MM): 

:: Calculate the difference in months and days
set /a month_diff=%current_month% - %birth_month%
set /a day_diff=%current_day% - %birth_day%

:: Adjust age if the birthday hasn't passed yet in the current year
if %month_diff% LSS 0 (
    set /a age=%age%-1
) else if %month_diff% EQU 0 (
    if %day_diff% LSS 0 set /a age=%age%-1
)


echo =====================================
echo Your final calculated age is: %age% years old.
echo =====================================


pause
