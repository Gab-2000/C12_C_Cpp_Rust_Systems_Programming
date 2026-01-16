// Rust: safe references with borrow checker
fn main() {
    let v = vec![10, 20, 30];
    let r = &v[1]; // immutable borrow
    println!("{}", r);

    // Cannot access out-of-bounds safely
    // let x = v[10]; // runtime panic (bounds checked)
}

/* Rust prevents invalid memory access through strict borrowing and bounds checking. */