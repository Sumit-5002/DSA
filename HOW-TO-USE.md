# 🎯 How to Use - Super Simple Guide

## 🚀 Creating a New Problem (The Easy Way!)

### Just Run This:
```powershell
.\create-problem.ps1
```

### What Happens Next:

#### Question 1️⃣: Where to create the problem?
```
Select where to create the problem:

  1. LeetCode Problems
  2. Codeforces
  3. Striver DSA Sheet
  4. Unstop 100 Day Code
  5. Teacher's Day Challenge (Beginner)
  6. Teacher's Day Challenge (Advanced)

Enter your choice (1-6):
```

**Type a number** → Press Enter

---

#### Question 2️⃣: What's the problem name?
```
Enter problem name:
```

**Type the name** → Press Enter

Examples:
- `Two Sum`
- `Contest 950 - Problem A`
- `Day-1-Array-Sum`
- `Pattern Printing`

---

#### Question 3️⃣: Open in VS Code?
```
Open in VS Code now? (y/n):
```

**Type `y`** → VS Code opens automatically! ✨

---

## 📝 Full Example

```
PS D:\DSA> .\create-problem.ps1

========================================
   DSA Problem Creator
========================================

Select where to create the problem:

  1. LeetCode Problems
  2. Codeforces
  3. Striver DSA Sheet
  4. Unstop 100 Day Code
  5. Teacher's Day Challenge (Beginner)
  6. Teacher's Day Challenge (Advanced)

Enter your choice (1-6): 2

✅ Selected: CODEFORCES

Enter problem name: Contest 950 - Problem A

✅ Created problem folder: CODEFORCES\Contest 950 - Problem A

========================================
   Problem Setup Complete! 🎉
========================================

📁 Location: CODEFORCES\Contest 950 - Problem A

📄 Files created:
   ✅ Solution.java (Java template)
   ✅ solution.cpp (C++ template)
   ✅ input.txt (Test input)
   ✅ output.txt (Program output)

🚀 Next steps:
   1. Open folder in VS Code
   2. Edit input.txt with your test cases
   3. Write your solution in Solution.java or solution.cpp
   4. Press Ctrl+Alt+R to run your code
   5. Check output.txt for results

Open in VS Code now? (y/n): y

✅ Opening in VS Code...
```

---

## 🎮 After VS Code Opens

### Setup Your Workspace:

1. **Open 3 files side-by-side**:
   - Drag `Solution.java` (or `solution.cpp`) to center
   - Right-click `input.txt` → "Open to the Side"
   - Right-click `output.txt` → "Open to the Side"

2. **Your layout looks like this**:
   ```
   ┌──────────────┬──────────┬──────────┐
   │ Solution.java│input.txt │output.txt│
   │              │          │          │
   │  Your code   │ Test     │ Results  │
   │  goes here   │ cases    │ appear   │
   │              │          │ here     │
   └──────────────┴──────────┴──────────┘
   ```

---

## 💻 Writing and Running Code

### Step 1: Write Test Input
In `input.txt`:
```
5
2 7 11 15 4
9
```

### Step 2: Write Your Solution
In `Solution.java`:
```java
Scanner sc = new Scanner(System.in);
int n = sc.nextInt();
int[] arr = new int[n];
for (int i = 0; i < n; i++) {
    arr[i] = sc.nextInt();
}
int target = sc.nextInt();

// Your logic here
System.out.println("Result: " + result);
```

### Step 3: Run It!
**Press `Ctrl+Alt+R`** ⚡

### Step 4: Check Output
Look at `output.txt` - your result is there! ✅

---

## 🔄 Daily Practice Workflow

### Morning - Problem 1
```powershell
.\create-problem.ps1
# Choose folder → Type name → Solve
```

### Afternoon - Problem 2
```powershell
.\create-problem.ps1
# Choose folder → Type name → Solve
```

### Evening - Problem 3
```powershell
.\create-problem.ps1
# Choose folder → Type name → Solve
```

**3 problems solved, 3 folders created!** 🎉

---

## 💡 Pro Tips

### Keyboard Shortcuts
| Shortcut | Action |
|----------|--------|
| `Ctrl+Alt+R` | Run current solution |
| `Ctrl+\` | Split editor |
| `Ctrl+1/2/3` | Focus column 1/2/3 |
| `Ctrl+` | Toggle terminal |

### Quick Commands
```powershell
# Count how many problems solved
(Get-ChildItem "LEETCODE RANDOM QUESTION" -Directory).Count

# List all problems
Get-ChildItem "CODEFORCES" -Directory | Select-Object Name
```

---

## 🆘 Troubleshooting

### Script says "templates/ folder not found"
**Don't delete the `templates/` folder!** It's essential.

### Can't run script
```powershell
Set-ExecutionPolicy RemoteSigned -Scope CurrentUser
```

### Java/C++ not found
Install JDK and MinGW, add to PATH.

---

## 🎯 Remember

**One Problem = One Folder = Forever Saved!**

Just run `.\create-problem.ps1` and answer 3 simple questions:
1. Where? (Pick number)
2. Name? (Type it)
3. Open VS Code? (y/n)

**That's it! Happy coding! 🚀**
