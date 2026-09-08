# DSA Lab 01: Introduction to Version Control (Git) and Simple Test Cases

**Name:** Hashim Abdullah
**Registration / CMS ID:** 551504
**Class:** BSCS-15E

## Programs

- **task1.cpp** — Initializes an array of five integers, changes the third element, and prints all values using a for loop.
- **task2.cpp** — Reads five integers into an array and computes their running and final total using two separate loops.
- **task3.cpp** — Defines a `Student` class with `rollNumber` and `marks`, creates two objects, and demonstrates that changing one object's `marks` via the dot operator does not affect the other object.
- **task4.cpp** — Reads eight integers into an array and finds the largest and smallest values along with their first-occurrence indices.
- **task5.cpp** — Same as task4.cpp: finds the largest and smallest of eight integers along with their first-occurrence indices.
- **task6.cpp** — Reads six integers into an array and reverses them in place without using a second array.
- **task7.cpp** — Reads ten integers and moves the first occurrence of each distinct value to the front of the same array, preserving order, without using a second array.

## Task 3 Test Results

| Test | Result |
|---|---|
| Initial values for `s1` | rollNumber = 1, marks = 75 |
| Initial values for `s2` | rollNumber = 2, marks = 90 |
| After changing `s1.marks` to 80 | s1: rollNumber = 1, marks = 80 &nbsp;•&nbsp; s2: rollNumber = 2, marks = 90 (unchanged) |

**Explanation:** `s2.marks` does not change because `s1` and `s2` are independent objects with their own copies of the data members; modifying `s1.marks` through the dot operator only affects `s1`.
