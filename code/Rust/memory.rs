// Rust: ownership-based memory management
fn main() {
    let x = Box::new(42);
    println!("value={}", x);
    // memory automatically freed at end of scope
}

/* Rust enforces memory safety at compile time.
Use-after-free and double-free are impossible in safe Rust. */