# PowerShell script to compile and run C++ solution

param(
    [string]$FilePath = "solution.cpp"
)

$FileName = [System.IO.Path]::GetFileNameWithoutExtension($FilePath)
$Directory = Split-Path -Parent $FilePath

if ($Directory) {
    Push-Location $Directory
}

Write-Host "Compiling $FileName.cpp..." -ForegroundColor Yellow
g++ -std=c++17 -O2 -o "$FileName.exe" "$FileName.cpp"

if ($LASTEXITCODE -eq 0) {
    Write-Host "Compilation successful!" -ForegroundColor Green
    Write-Host "Running $FileName.exe..." -ForegroundColor Yellow
    & ".\$FileName.exe"
    
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
