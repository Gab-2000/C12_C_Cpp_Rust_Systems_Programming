# 🚀 C12 – C, C++, and Rust: A Comparative Study

> **Advanced Programming Course Project** | Systems programming models, safety, and performance.

---

## 📌 Overview

This repository accompanies the **C12 project** for the Advanced Programming course. The project presents a comprehensive comparative study of **C**, **C++**, and **Rust**.

---

## 🛠 Project Structure

### 📖 Part 1: Theoretical Analysis

A structured comparison documented in the report covering memory models, type systems, and safety guarantees.

### 💻 Part 2: Practical Code Examples

Minimal examples demonstrating how the same low-level problems are handled across languages.

```bash
code/
├── 🟦 c/          # Manual allocation (malloc/free), pointers, return codes
├── 🟪 cpp/        # RAII, templates, smart pointers, exceptions
└── 🦀 rust/       # Ownership, borrowing, lifetimes, Result/Option
```

## 🔍 Language Comparison Summary

| Feature            | C                        | C++                      | Rust                      |
| :----------------- | :----------------------- | :----------------------- | :------------------------ |
| **Abstraction**    | Minimal (Macros/Structs) | High (Classes/Templates) | Strict (Traits/Generics)  |
| **Error Handling** | Return Codes             | Exceptions (Try/Catch)   | Algebraic (Result/Option) |
| **Pointers**       | Raw Pointers (Unsafe)    | Smart Pointers (Safer)   | References (Borrowing)    |
| **Memory**         | Manual (`malloc`/`free`) | RAII (Destructors)       | Ownership & Lifetimes     |

## 📄 Documentation

The full technical report, including detailed analysis and discussion of design trade-offs, is available here:

👉 **[Download Project Report (PDF)](./report/C12_Report.pdf)**

---

_Developed as part of the Advanced Programming curriculum._

## 📂 Implementation Details

The practical examples highlight key language-level trade-offs:

- **Abstractions:** How macros compare to templates and traits in systems programming.
- **Error Handling:** Traditional return codes vs. exception handling vs. robust type-safe Results.
- **Memory Management:** Manual allocation (C) vs. automatic cleanup via RAII (C++) vs. compile-time ownership (Rust).
- **Pointer Usage:** Raw pointer arithmetic vs. safer smart pointers vs. strict borrowing rules.
