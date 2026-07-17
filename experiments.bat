
@echo off
setlocal enabledelayedexpansion

:menu
cls
echo.
echo hello!! which program do you need
echo.
echo   0. Exit
echo   Part A (1-7):
echo   1. Grade Calculator
echo   2. KYC Verification
echo   3. Quadratic Equation Roots
echo   4. Sin(x) Approximation
echo   5. Keyword Search
echo   6. Student Pass/Fail Check
echo   7. Swap Balances (Pointers)
echo.
echo   Part B (b1-b6):
echo   b1. Binary Search (Book ID)
echo   b2. Sort Scores (Descending)
echo   b3. Branch Revenue Calculation
echo   b4. Full Name Concatenation
echo   b5. Call by Value vs Reference
echo   b6. Book Structure
echo.
set /p exp=Enter program number (1-7 or b1-b6): 

:: Convert to lowercase for case insensitivity
set "exp=!exp:l=L!"
set "exp=!exp:B=b!"

if "%exp%"=="0" (
    cls
    echo Exiting...
    exit
)
if "%exp%"=="" goto menu

cls
echo.
echo the program is:
echo.
echo ==============================
echo.

:: Map inputs to file names
if /i "%exp%"=="1" set "file=program1_grade_calculator.c"
if /i "%exp%"=="2" set "file=program2_kyc_verification.c"
if /i "%exp%"=="3" set "file=program3_quadratic_roots.c"
if /i "%exp%"=="4" set "file=program4_sin_approximation.c"
if /i "%exp%"=="5" set "file=program5_keyword_search.c"
if /i "%exp%"=="6" set "file=program6_student_pass_fail.c"
if /i "%exp%"=="7" set "file=program7_swap_balances.c"
if /i "%exp%"=="b1" set "file=partb1_binary_search_book.c"
if /i "%exp%"=="b2" set "file=partb2_sort_scores_desc.c"
if /i "%exp%"=="b3" set "file=partb3_branch_revenue.c"
if /i "%exp%"=="b4" set "file=partb4_full_name_concat.c"
if /i "%exp%"=="b5" set "file=partb5_call_by_value_ref.c"
if /i "%exp%"=="b6" set "file=partb6_book_structure.c"

:: Check if file is set
if not defined file (
    echo Invalid input! Please try again.
    pause
    goto menu
)

:: Fetch and display the file
curl -sL "https://raw.githubusercontent.com/monishlege/cp/main/!file!"
echo.
echo ==============================
echo.
pause
goto menu
