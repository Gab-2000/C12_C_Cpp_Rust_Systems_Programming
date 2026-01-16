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

Each example demonstrates how the **same low-level problem** is addressed differently in C, C++, and Rust.

---

## Conceptual Summary (Part 1)

- **C** provides maximum low-level control with minimal built-in safety. Memory management and correctness rely entirely on programmer discipline, and undefined behavior is part of the language model.

- **C++** builds on C by introducing powerful abstractions such as RAII, templates, and standard containers. Safer patterns exist, but unsafe operations remain valid, making safety largely optional.

- **Rust** enforces memory safety and data-race freedom at compile time through ownership, borrowing, and lifetimes, while still targeting systems-level performance without garbage collection.

---

## Code Examples (Part 2)

The practical examples illustrate key differences across the three languages:

- **Memory management:**  
  Manual allocation (`malloc/free`) vs. RAII vs. ownership-based cleanup

- **Pointer usage:**  
  Unrestricted pointer arithmetic vs. safer container access vs. borrowing rules

- **Error handling:**  
  Return codes vs. exceptions vs. `Result` / `Option`

- **Abstraction mechanisms:**  
  Macros vs. templates vs. generics and traits

All examples are intentionally minimal to highlight the language-level trade-offs.

---

## AI Prompting and Verification (Part 3)

AI was used as a **support tool** during the development of this project to:

- Structure the theoretical analysis
- Generate comparative explanations
- Produce minimal illustrative code examples

All AI-generated content was **manually reviewed and validated**.

### Verification methodology included:

- **C:** manual auditing for undefined behavior (use-after-free, invalid pointer arithmetic, uninitialized reads)
- **C++:** use of modern idioms (RAII, standard containers, bounds-checked access)
- **Rust:** reliance on compiler-enforced guarantees in safe Rust (no `unsafe` blocks)

By combining manual inspection, modern best practices, and compiler guarantees, the project ensures that both explanations and code accurately reflect real-world systems programming behavior.

Detailed documentation of AI prompts and validation methodology is provided in the accompanying project report.
