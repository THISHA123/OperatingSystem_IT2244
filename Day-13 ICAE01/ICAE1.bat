@echo off

:: Step 1: Create directories on Desktop
cd %USERPROFILE%\Desktop
mkdir CSC2244 Marks Exam

:: Step 2: Create subdirectories under CSC2244
cd CSC2244
mkdir practical theory "exam papers"

:: Step 3: Create text, Word, and PowerPoint files inside each subdirectory
cd practical
echo Practical Notes > practical.txt
echo > practical.docx
echo > practical.pptx
cd ..

cd theory
echo Theory Notes > theory.txt
echo > theory.docx
echo > theory.pptx
cd ..

cd "exam papers"
echo Exam Paper > exam.txt
echo > exam.docx
echo > exam.pptx
cd ..

:: Step 4: Create two Excel files on Desktop
cd %USERPROFILE%\Desktop
echo > Icae.xlsx
echo > "Final Exam Marks.xlsx"

:: Step 5: Move Excel files to Marks directory
move Icae.xlsx Marks\
move "Final Exam Marks.xlsx" Marks\

:: Step 6: Copy Marks directory to Exam directory
xcopy /E /I Marks Exam\Marks

:: Step 7: Hide the Exam directory
attrib +h Exam
