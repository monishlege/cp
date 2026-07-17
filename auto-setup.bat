
@echo off
echo Setting up PC Lab Programs...
echo.

:: Check if git is installed
git --version >nul 2>&1
if %errorlevel% neq 0 (
    echo Git is not installed! Please install Git first from https://git-scm.com/download/win
    pause
    exit /b 1
)

:: Clone or pull the repo
if exist "cp" (
    echo Updating existing repo...
    cd cp
    git pull
    cd ..
) else (
    echo Cloning repository...
    git clone https://github.com/monishlege/cp.git
)

echo.
echo Setup complete! Entering the cp folder...
cd cp
echo.
echo Available programs:
dir /b *.c
echo.
echo To compile and run a program, use:
echo   gcc [program-name].c -o [program-name]
echo   [program-name]
echo.
pause
