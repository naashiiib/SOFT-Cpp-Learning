
# C++ Learning Repository

Welcome to my C++ Learning Repository!

This repository contains my C++ programming practice, exercises, and mini projects as part of my BCA Full Stack course at Jain University.

## About This Repository

I use this repository to learn and practice C++ programming concepts, improve my problem-solving skills, and develop programming projects.

## Topics Covered

- Basic Input and Output
- Variables and Data Types
- Conditional Statements
- Loops
- Arrays
- Functions
- Classes and Objects
- Constructors
- Encapsulation
- Getters and Setters
- Mathematical Operations
- Problem Solving

---

## Mini Projects

### Module 1: Student Marks Analyzer

A C++ program that analyzes student marks and generates a student performance report.

#### Features

- Accepts student count between 1 and 100
- Validates student count
- Reads and stores student marks using arrays
- Calculates total marks
- Calculates average marks
- Finds highest and lowest marks
- Counts passed and failed students
- Uses functions for different operations
- Allows repeated analysis

#### Pass Mark

40 Marks

#### Source Code

`passfail.cpp`

---

### Module 2: Student Class & Result Management System

A C++ program that manages student details and generates individual student results using Object-Oriented Programming (OOP) concepts.

#### Features

- Uses a `Student` class to manage student details
- Stores roll number, name, and marks
- Uses a constructor to initialize student objects
- Implements private data members for encapsulation
- Uses getter functions to access student details
- Uses a setter function to update and validate marks
- Validates marks between 0 and 100
- Sets invalid marks to 0
- Displays student details using a member function
- Generates individual student result reports
- Determines Pass or Fail based on the pass mark
- Supports re-evaluation of student marks
- Uses an array of student objects

#### OOP Concepts Used

- Classes and Objects
- Constructors
- Encapsulation
- Private Data Members
- Public Member Functions
- Getters and Setters
- Data Validation
- Arrays of Objects

#### Pass Mark

40 Marks

#### Sample Students

| Roll No | Name | Marks |
|---------|------|-------|
| 1 | Suhana | 82 |
| 2 | Nashib | 78 |
| 3 | Nesha | 75 |

#### Re-evaluation

The program allows updating a student's marks using the `setMarks()` function.

Example:

```cpp
batch[1].setMarks(45);
```

This updates Akshitha's marks from 78 to 45.

#### Source Code

`student.cpp`

---

## How to Compile and Run

### Module 1: Student Marks Analyzer

Compile using GCC:

```bash
g++ passfail.cpp -o passfail
```

Run on Windows:

```bash
passfail.exe
```

### Module 2: Student Class & Result Management System

Compile using GCC:

```bash
g++ student.cpp -o student
```

Run on Windows:

```bash
student.exe
```

---

## Technologies Used

- Language: C++
- Compiler: GCC (g++)
- Editor: Visual Studio Code
- Platform: GitHub

---

## Author

**Nashib P**

BCA Full Stack Student  
Jain University, Kochi

GitHub: [@naashiiib](https://github.com/naashiiib)

---

*Learning, Practicing, and Building with C++.*
