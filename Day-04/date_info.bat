@echo off

echo ============================================
echo             Date Information 
echo ============================================
echo.

:: current system date.
echo System Date: %date%

:: Extract Year from system date
set current_year=%date:~10,4%
echo Current Year: %current_year%

:: Extract Month from system date
set current_month=%date:~4,2%
echo Current Month (Numeric): %current_month%

:: Extract Date from system date
set current_date=%date:~7,2%
echo Current Date: %current_date%

:: Extract Day Name
for /f "tokens=1 delims= " %%A in ('wmic path Win32_LocalTime get DayOfWeek /value ^| findstr "="') do set day_number=%%A
for /f "tokens=%day_number% delims= " %%A in ("Sunday Monday Tuesday Wednesday Thursday Friday Saturday") do set day_name=%%A
echo Today is: %day_name%

:: Store the name of the current month
for /f "tokens=%current_month% delims= " %%A in ("January February March April May June July August September October November December") do set month_name=%%A
echo Current Month (Name): %month_name%

:: Calculate the day of the year 
set /a current_day_of_year = ((%current_month% - 1) * 30) + %current_date%
echo Day of the Year: %current_day_of_year%

:: Calculate the week of the year
set /a week_of_year = (%current_day_of_year% + 6) / 7
echo Week of the Year: %week_of_year%

:: Calculate the week of the month
set /a week_of_month = (%current_date% + 6) / 7
echo Week of the Month: %week_of_month%

pause
