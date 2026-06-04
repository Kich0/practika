# kichov2

## Prompt for this workspace pass

Goal: improve the practice code and Word reports without pushing anything to GitHub.

Changes required:
- Rewrite C++ code so console output does not use Russian text.
- Remove unnecessary prompts/comments from code.
- Make the code style more human and consistent.
- Read the practice program PDF and use the report title page sample from Appendix 1.
- Rebuild the day 1 and day 2 Word reports with one consistent formal practice-document style.
- Write the student name normally as `Шакир Нурасыл`.

## Source template

PDF file used:
`C:/Users/nuras/Downloads/6B06103-Информационные системы 1 курс программа практики_2026.pdf`

The report title page sample is in Appendix 1, printed page 13 of the PDF.

## Change log

- Updated all `.cpp` files to remove Russian console strings and code comments.
- Final correction: restored `setlocale(LC_ALL, "Russian");`.
- Kept `windows.h` and simple console encoding lines with `SetConsoleCP(1251)` and `SetConsoleOutputCP(1251)`.
- Added clear Russian prompts before `cin` so the user understands what to enter.
- Removed only the confusing parts: `#ifdef`, `#endif`, `#pragma`, and the separate `setupConsole()` helper.
- Input prompts are still removed; programs read values directly and print only results.
- Rebuilt:
  - `практика нурасыла 67 копия/Отчёт_1день_Нурасыл.docx`
  - `практика нурасыла 67 копия/Отчёт_2день_Шакир-1.docx`
- Regenerated root PDF reports from the rebuilt DOCX content:
  - `Отчёт_1день_Нурасыл.pdf`
  - `Отчёт_2день_Шакир-1.pdf`
- LibreOffice was not installed, and Microsoft Word COM conversion timed out.
  The PDFs were generated directly with ReportLab and checked with PyPDF text extraction.
- Kept DOCX files ignored by Git.
