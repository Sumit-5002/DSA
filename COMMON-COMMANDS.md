# ⚡ Common Commands Reference

## 🆕 Create New Problem

### For LeetCode
```powershell
.\create-problem.ps1 -ProblemName "1. Two Sum" -FolderPath "LEETCODE RANDOM QUESTION"
```

### For Codeforces
```powershell
.\create-problem.ps1 -ProblemName "Contest 950 - Problem A" -FolderPath "CODEFORCES"
```

### For Striver Sheet
```powershell
.\create-problem.ps1 -ProblemName "Pattern Printing" -FolderPath "STIVER VIDEO CODE"
```

### For Unstop Challenge
```powershell
.\create-problem.ps1 -ProblemName "Day-01-Array-Sum" -FolderPath "UNSTOP 100 DAY CODE"
```

### For Contests
```powershell
.\create-problem.ps1 -ProblemName "Problem-A" -FolderPath "Teacher's Day Challenge 2025/Beginner's Track - 43 Days Journey"
```

## 🏃 Run Your Code

### Method 1: Keyboard Shortcut (Fastest!)
1. Open `Solution.java` or `solution.cpp`
2. Press **`Ctrl+Alt+R`**
3. Done! ✅

### Method 2: From Problem Folder
```powershell
# If you're inside the problem folder
cd "LEETCODE RANDOM QUESTION/Two Sum"

# For Java
..\..\run_java.ps1 -FilePath "Solution.java"

# For C++
..\..\run_cpp.ps1 -FilePath "solution.cpp"
```

### Method 3: From Root Folder
```powershell
# For Java
.\run_java.ps1 -FilePath "LEETCODE RANDOM QUESTION/Two Sum/Solution.java"

# For C++
.\run_cpp.ps1 -FilePath "LEETCODE RANDOM QUESTION/Two Sum/solution.cpp"
```

## 📂 Open in VS Code

### Open Single Problem
```powershell
code "LEETCODE RANDOM QUESTION/Two Sum"
```

### Open Entire Workspace
```powershell
code DSA-Practice.code-workspace
```

### Open Main Folder
```powershell
code "LEETCODE RANDOM QUESTION"
```

## 📊 Track Progress

### Count Solved Problems
```powershell
# LeetCode problems
(Get-ChildItem "LEETCODE RANDOM QUESTION" -Directory).Count

# Codeforces problems
(Get-ChildItem "CODEFORCES" -Directory).Count

# Striver problems
(Get-ChildItem "STIVER VIDEO CODE" -Directory).Count

# Unstop problems
(Get-ChildItem "UNSTOP 100 DAY CODE" -Directory).Count
```

### List All Problems
```powershell
# List LeetCode problems
Get-ChildItem "LEETCODE RANDOM QUESTION" -Directory | Select-Object Name

# List with more details
Get-ChildItem "LEETCODE RANDOM QUESTION" -Directory | Format-Table Name, CreationTime
```

### Find Recent Problems
```powershell
# Last 5 problems solved
Get-ChildItem "LEETCODE RANDOM QUESTION" -Directory | Sort-Object CreationTime -Descending | Select-Object -First 5 | Select-Object Name, CreationTime
```

## 🔍 Search Problems

### Find Problem by Name
```powershell
Get-ChildItem "LEETCODE RANDOM QUESTION" -Directory -Filter "*Two Sum*"
```

### Search in All Folders
```powershell
Get-ChildItem -Recurse -Directory -Filter "*Array*"
```

## 📝 View Files

### View Input
```powershell
Get-Content "LEETCODE RANDOM QUESTION/Two Sum/input.txt"
```

### View Output
```powershell
Get-Content "LEETCODE RANDOM QUESTION/Two Sum/output.txt"
```

### View Code
```powershell
Get-Content "LEETCODE RANDOM QUESTION/Two Sum/Solution.java"
```

## 🗑️ Clean Up

### Remove Compiled Files (Optional)
```powershell
# Remove all .class files
Get-ChildItem -Recurse -Filter "*.class" | Remove-Item

# Remove all .exe files
Get-ChildItem -Recurse -Filter "*.exe" | Remove-Item
```

Note: VS Code already hides these files in the explorer!

## 📋 Copy Template Manually (Rare)

If you prefer manual setup:
```powershell
# Create folder
New-Item -ItemType Directory -Path "LEETCODE RANDOM QUESTION/New Problem"

# Copy templates
Copy-Item "templates/*" -Destination "LEETCODE RANDOM QUESTION/New Problem/"
```

## 🚀 Batch Create Problems

Create multiple problems at once:
```powershell
# Create 3 problems
.\create-problem.ps1 -ProblemName "Problem 1" -FolderPath "LEETCODE RANDOM QUESTION"
.\create-problem.ps1 -ProblemName "Problem 2" -FolderPath "LEETCODE RANDOM QUESTION"
.\create-problem.ps1 -ProblemName "Problem 3" -FolderPath "LEETCODE RANDOM QUESTION"
```

Or use a loop:
```powershell
# Create problems for Day 1-10
1..10 | ForEach-Object {
    .\create-problem.ps1 -ProblemName "Day-$_" -FolderPath "UNSTOP 100 DAY CODE"
}
```

## 🔧 Troubleshooting

### Check Java Installation
```powershell
java -version
javac -version
```

### Check C++ Compiler
```powershell
g++ --version
```

### Enable PowerShell Scripts (One Time)
```powershell
Set-ExecutionPolicy RemoteSigned -Scope CurrentUser
```

### Verify File Location
```powershell
# Check if file exists
Test-Path "LEETCODE RANDOM QUESTION/Two Sum/Solution.java"

# Show full path
Resolve-Path "LEETCODE RANDOM QUESTION/Two Sum"
```

## 📁 Navigate Folders

```powershell
# Go to problem folder
cd "LEETCODE RANDOM QUESTION/Two Sum"

# Go back to root
cd ..\..

# List current directory
ls

# Show current location
pwd
```

## 💡 VS Code Shortcuts

| Shortcut | Action |
|----------|--------|
| `Ctrl+Alt+R` | Run current solution |
| `Ctrl+\` | Split editor |
| `Ctrl+1/2/3` | Focus column 1/2/3 |
| `Ctrl+Shift+B` | Build/Run tasks |
| `Ctrl+` | Toggle terminal |
| `Ctrl+P` | Quick open file |
| `Ctrl+Shift+E` | Focus on explorer |

## 🎯 Quick Daily Workflow

```powershell
# 1. Create today's problem
.\create-problem.ps1 -ProblemName "Today's Problem" -FolderPath "LEETCODE RANDOM QUESTION"

# 2. Open it
code "LEETCODE RANDOM QUESTION/Today's Problem"

# 3. Edit input.txt, write code, press Ctrl+Alt+R

# 4. Check output.txt

# 5. Done! ✅
```

## 📖 Help Commands

```powershell
# Get help for create-problem script
Get-Help .\create-problem.ps1

# Get help for run_java script
Get-Help .\run_java.ps1

# Get help for run_cpp script
Get-Help .\run_cpp.ps1
```

---

**Tip**: Bookmark this file for quick reference! 📌
