C12 – C, C++, and Rust: A Comparative Study of Systems Programming Models
Overview

This repository accompanies the C12 project for the Advanced Programming course.
The project presents a comparative study of C, C++, and Rust as systems programming languages.

The analysis focuses on how each language approaches fundamental systems-level concerns, including:

Memory management and lifetimes

Pointer usage and low-level access

Type systems and abstraction mechanisms

Safety guarantees and undefined behavior

Compilation models and performance trade-offs

The goal of the project is not to rank the languages, but to clearly explain what each language allows, prevents, or enforces at the systems programming level.

Project Structure

The project is divided into two main parts, reflected in both the report and the repository:

Part 1 – Theoretical Analysis

A structured comparison of C, C++, and Rust, covering:

Memory management models

Type systems and abstraction capabilities

Safety guarantees and sources of undefined behavior

Compilation models and design trade-offs

This analysis is documented in the accompanying project report.

Part 2 – Practical Code Examples

Minimal, focused code examples that demonstrate how the same low-level problems are handled differently in each language.

Project Structure

The project is divided into two main parts, reflected in both the report and the repository:

Part 1 – Theoretical Analysis

A structured comparison of C, C++, and Rust, covering:

Memory management models

Type systems and abstraction capabilities

Safety guarantees and sources of undefined behavior

Compilation models and design trade-offs

This analysis is documented in the accompanying project report.

Part 2 – Practical Code Examples

Minimal, focused code examples that demonstrate how the same low-level problems are handled differently in each language.

code/
├── c/
│ ├── abstraction.c
│ ├── error_handling.c
│ ├── memory.c
│ └── pointers.c
├── cpp/
│ ├── abstraction.cpp
│ ├── error_handling.cpp
│ ├── memory.cpp
│ └── pointers.cpp
└── rust/
├── abstraction.rs
├── error_handling.rs
├── memory.rs
└── pointers.rs

Each example addresses the same conceptual problem across the three languages to enable direct comparison.

Conceptual Summary (Report – Part 1)

C provides maximum low-level control with minimal built-in safety. Memory management and correctness rely entirely on programmer discipline, and undefined behavior is an explicit part of the language model.

C++ builds on C by introducing abstractions such as RAII, templates, and standard containers. Safer programming patterns exist, but unsafe operations remain valid, making safety largely optional and convention-based.

Rust enforces memory safety and data-race freedom at compile time through ownership, borrowing, and lifetimes, while still targeting systems-level performance without garbage collection.

Code Examples (Report – Part 2)

The practical examples highlight key language-level trade-offs:

Memory management
Manual allocation (malloc/free) vs. RAII vs. ownership-based cleanup

Pointer usage
Unrestricted pointer arithmetic vs. safer container access vs. borrowing rules

Error handling
Return codes vs. exceptions vs. Result / Option

Abstraction mechanisms
Macros vs. templates vs. generics and traits

All examples are intentionally minimal to emphasize language semantics, not application logic.

AI Usage and Verification Methodology

AI was used as a support tool during the development of this project to assist with:

Structuring the theoretical analysis

Producing comparative explanations

Generating minimal illustrative code examples

All AI-generated content was manually reviewed, corrected, and validated.

Verification methodology included:

C
Manual auditing for undefined behavior (use-after-free, invalid pointer arithmetic, missing error checks)

C++
Use of modern idioms (RAII, standard containers, smart pointers) and explicit discussion of remaining unsafe cases

Rust
Reliance on compiler-enforced guarantees in safe Rust, with no use of unsafe blocks

This approach ensures that both the explanations and the code accurately reflect real-world systems programming behavior, consistent with the accompanying report.

Report

The full theoretical analysis and discussion of design trade-offs is provided in the project report:

📄 C12_Report.pdf

Final Notes

This project is intended as an educational comparison, demonstrating how language design choices influence safety, control, and correctness in systems programming.
