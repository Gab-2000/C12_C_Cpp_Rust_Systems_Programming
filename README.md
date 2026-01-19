# 🚀 C12 – C, C++, and Rust: A Comparative Study
> **Advanced Programming Course Project** | A deep dive into systems programming models, safety, and performance.

---

## 📌 Overview
This repository accompanies the **C12 project** for the Advanced Programming course. The project presents a comprehensive comparative study of **C**, **C++**, and **Rust** as systems programming languages.

The analysis focuses on how each language approaches fundamental systems-level concerns, focusing on the trade-offs between low-level control and memory safety without the use of a garbage collector.

---

## 🛠 Project Structure
The project is divided into two main parts, reflected in both the report and the repository structure:

### 📖 Part 1: Theoretical Analysis
A structured comparison documented in the project report covering:
* **Memory management models** (Manual vs. RAII vs. Ownership).
* **Type systems** and abstraction capabilities.
* **Safety guarantees** and sources of Undefined Behavior (UB).
* **Compilation models** and design trade-offs.

### 💻 Part 2: Practical Code Examples
Minimal, focused code examples that demonstrate how the same low-level problems are handled differently in each language.

```bash
code/
├── 🟦 c/          # Manual allocation (malloc/free), pointers, return codes
├── 🟪 cpp/        # RAII, templates, smart pointers, exceptions
└── 🦀 rust/       # Ownership, borrowing, lifetimes, Result/Option
