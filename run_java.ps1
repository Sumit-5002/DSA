# PowerShell script to compile and run Java solution

param(
    [string]$FilePath = "Solution.java"
)

$FileName = [System.IO.Path]::GetFileNameWithoutExtension($FilePath)
$Directory = Split-Path -Parent $FilePath

if ($Directory) {
    Push-Location $Directory
}

Write-Host "Compiling $FileName.java..." -ForegroundColor Yellow
javac "$FileName.java"

if ($LASTEXITCODE -eq 0) {
    Write-Host "Compilation successful!" -ForegroundColor Green
    Write-Host "Running $FileName..." -ForegroundColor Yellow
    java $FileName
    
    if ($LASTEXITCODE -eq 0) {
        Write-Host "`nExecution completed!" -ForegroundColor Green
        Write-Host "`nOutput from output.txt:" -ForegroundColor Cyan
        Write-Host "======================" -ForegroundColor Cyan
        Get-Content "output.txt"
        Write-Host "======================" -ForegroundColor Cyan
    } else {
        Write-Host "Runtime error!" -ForegroundColor Red
    }
} else {
    Write-Host "Compilation failed!" -ForegroundColor Red
}

if ($Directory) {
    Pop-Location
}
