
@echo off
setlocal enabledelayedexpansion

:menu
cls
echo.
echo ==============================
echo   PC LAB PROGRAMS
echo ==============================
echo.
echo   Select an Experiment:
echo   0. Exit
echo   1. Grade Calculator
echo   2. KYC Verification
echo   3. Quadratic Equation Roots
echo   4. Sin(x) Approximation
echo   5. Keyword Search
echo   6. Student Pass/Fail Check
echo   7. Swap Balances (Pointers)
echo   8. Binary Search (Book ID)
echo   9. Sort Scores (Descending)
echo  10. Branch Revenue Calculation
echo  11. Full Name Concatenation
echo  12. Call by Value vs Reference
echo  13. Book Structure
echo.
set /p exp=Enter Experiment Number (0-13): 

if "%exp%"=="0" (
    cls
    echo Exiting...
    exit
)
if "%exp%"=="" goto menu
if %exp% LSS 0 goto menu
if %exp% GTR 13 goto menu

cls
echo ==============================
echo   Experiment %exp%
echo ==============================
echo.

:: Map experiment numbers to file names
if "%exp%"=="1" set "file=program1_grade_calculator.c"
if "%exp%"=="2" set "file=program2_kyc_verification.c"
if "%exp%"=="3" set "file=program3_quadratic_roots.c"
if "%exp%"=="4" set "file=program4_sin_approximation.c"
if "%exp%"=="5" set "file=program5_keyword_search.c"
if "%exp%"=="6" set "file=program6_student_pass_fail.c"
if "%exp%"=="7" set "file=program7_swap_balances.c"
if "%exp%"=="8" set "file=partb1_binary_search_book.c"
if "%exp%"=="9" set "file=partb2_sort_scores_desc.c"
if "%exp%"=="10" set "file=partb3_branch_revenue.c"
if "%exp%"=="11" set "file=partb4_full_name_concat.c"
if "%exp%"=="12" set "file=partb5_call_by_value_ref.c"
if "%exp%"=="13" set "file=partb6_book_structure.c"

:: Fetch and display the file
echo Showing: !file!
echo ==============================
echo.
curl -sL "https://raw.githubusercontent.com/monishlege/cp/main/!file!"
echo.
echo ==============================
echo.
pause
goto menu
