# C12 – C, C++, and Rust: A Comparative Study of Systems Programming Models

## Overview
This repository accompanies the **C12 project**, a comparative study of **C, C++, and Rust** as systems programming languages. 

The project analyzes how each language approaches:
- Memory management and lifetimes
- Pointer usage and low-level access
- Type systems and abstraction mechanisms
- Safety guarantees and undefined behavior
- Compilation models and performance trade-offs

The goal is **not to rank the languages**, but to clearly explain **what each language allows, prevents, or enforces** at the systems level.

---

## Project Goals
The project addresses the following objectives:

1. **Theoretical analysis**
   Explain the key differences among C, C++, and Rust, focusing on memory management, safety guarantees, type systems, and compilation models.

2. **Practical comparison**
   Provide short, focused code examples in all three languages that illustrate contrasting behaviors for:
   - Memory allocation and lifetimes
   - Pointer manipulation
   - Error handling
   - Abstraction mechanisms (macros, templates, generics)

3. **Methodology and verification**
   Document the AI prompts used during development and explain how the correctness of explanations and code was verified, with particular attention to safety properties and undefined behavior.

---

## Repository Structure
The code examples are organized by **language** and **concept**, with each file being a standalone program:

```text
code/
├── c/
│   ├── abstraction.c
│   ├── error_handling.c
│   ├── memory.c
│   └── pointers.c
├── cpp/
│   ├── abstraction.cpp
│   ├── error_handling.cpp
│   ├── memory.cpp
│   └── pointers.cpp
└── rust/
    ├── abstraction.rs
    ├── error_handling.rs
    ├── memory.rs
    └── pointers.rs
