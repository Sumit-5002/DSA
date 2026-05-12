# Interactive PowerShell script to create a new problem folder with template files

param(
    [Parameter(Mandatory=$false)]
    [string]$ProblemName,
    
    [Parameter(Mandatory=$false)]
    [string]$FolderPath
)

Write-Host ""
Write-Host "========================================" -ForegroundColor Cyan
Write-Host "   DSA Problem Creator" -ForegroundColor Yellow
Write-Host "========================================" -ForegroundColor Cyan
Write-Host ""

# If FolderPath not provided, show menu
if (-not $FolderPath) {
    Write-Host "Select where to create the problem:" -ForegroundColor Yellow
    Write-Host ""
    Write-Host "  1. LeetCode Problems" -ForegroundColor White
    Write-Host "  2. Codeforces" -ForegroundColor White
    Write-Host "  3. Striver DSA Sheet" -ForegroundColor White
    Write-Host "  4. Unstop 100 Day Code" -ForegroundColor White
    Write-Host "  5. Teacher's Day Challenge (Beginner)" -ForegroundColor White
    Write-Host "  6. Teacher's Day Challenge (Advanced)" -ForegroundColor White
    Write-Host ""
    
    $choice = Read-Host "Enter your choice (1-6)"
    
    switch ($choice) {
        "1" { $FolderPath = "LEETCODE RANDOM QUESTION" }
        "2" { $FolderPath = "CODEFORCES" }
        "3" { $FolderPath = "STIVER VIDEO CODE" }
        "4" { $FolderPath = "UNSTOP 100 DAY CODE" }
        "5" { $FolderPath = "Teacher's Day Challenge 2025/Beginner's Track - 43 Days Journey" }
        "6" { $FolderPath = "Teacher's Day Challenge 2025/Advanced Track - 43 Days Journey" }
        default {
            Write-Host ""
            Write-Host "Invalid choice! Exiting..." -ForegroundColor Red
            exit
        }
    }
    
    Write-Host ""
    Write-Host "[OK] Selected: $FolderPath" -ForegroundColor Green
}

# If ProblemName not provided, ask for it
if (-not $ProblemName) {
    Write-Host ""
    $ProblemName = Read-Host "Enter problem name"
    
    if (-not $ProblemName) {
        Write-Host ""
        Write-Host "Error: Problem name cannot be empty!" -ForegroundColor Red
        exit
    }
}

# Sanitize problem name for folder creation
$SafeProblemName = $ProblemName -replace '[\\/:*?"<>|]', '-'
$ProblemFolder = Join-Path $FolderPath $SafeProblemName

Write-Host ""

# Create problem folder
if (Test-Path $ProblemFolder) {
    Write-Host "[WARNING] Problem folder already exists: $ProblemFolder" -ForegroundColor Yellow
    $response = Read-Host "Do you want to overwrite? (y/n)"
    if ($response -ne 'y') {
        Write-Host ""
        Write-Host "Operation cancelled." -ForegroundColor Red
        exit
    }
} else {
    New-Item -ItemType Directory -Path $ProblemFolder | Out-Null
    Write-Host "[OK] Created problem folder: $ProblemFolder" -ForegroundColor Green
}

# Copy template files
$TemplateFolder = Join-Path $PSScriptRoot "templates"

if (-not (Test-Path $TemplateFolder)) {
    Write-Host ""
    Write-Host "[ERROR] templates/ folder not found!" -ForegroundColor Red
    Write-Host "The templates folder is required for this script to work." -ForegroundColor Yellow
    exit
}

Copy-Item (Join-Path $TemplateFolder "Solution.java") -Destination (Join-Path $ProblemFolder "Solution.java") -Force
Copy-Item (Join-Path $TemplateFolder "solution.cpp") -Destination (Join-Path $ProblemFolder "solution.cpp") -Force
Copy-Item (Join-Path $TemplateFolder "input.txt") -Destination (Join-Path $ProblemFolder "input.txt") -Force
Copy-Item (Join-Path $TemplateFolder "output.txt") -Destination (Join-Path $ProblemFolder "output.txt") -Force

Write-Host ""
Write-Host "========================================" -ForegroundColor Cyan
Write-Host "   Problem Setup Complete!" -ForegroundColor Green
Write-Host "========================================" -ForegroundColor Cyan
Write-Host ""
Write-Host "Location: $ProblemFolder" -ForegroundColor Yellow
Write-Host ""
Write-Host "Files created:" -ForegroundColor Cyan
Write-Host "  [OK] Solution.java (Java template)" -ForegroundColor White
Write-Host "  [OK] solution.cpp (C++ template)" -ForegroundColor White
Write-Host "  [OK] input.txt (Test input)" -ForegroundColor White
Write-Host "  [OK] output.txt (Program output)" -ForegroundColor White
Write-Host ""
Write-Host "Next steps:" -ForegroundColor Yellow
Write-Host "  1. Open folder in VS Code: code `"$ProblemFolder`"" -ForegroundColor White
Write-Host "  2. Edit input.txt with your test cases" -ForegroundColor White
Write-Host "  3. Write your solution in Solution.java or solution.cpp" -ForegroundColor White
Write-Host "  4. Press Ctrl+Alt+R to run your code" -ForegroundColor White
Write-Host "  5. Check output.txt for results" -ForegroundColor White
Write-Host ""

# Ask if user wants to open in VS Code
$openVSCode = Read-Host "Open in VS Code now? (y/n)"
if ($openVSCode -eq 'y') {
    code $ProblemFolder
    Write-Host ""
    Write-Host "[OK] Opening in VS Code..." -ForegroundColor Green
}

Write-Host ""
