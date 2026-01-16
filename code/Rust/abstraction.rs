// Rust: abstraction via generics
fn max_t<T: Ord>(a: T, b: T) -> T {
    if a > b { a } else { b }
}

fn main() {
    println!("max={}", max_t(3, 5));
}

/* Rust generics are fully type-checked and integrated with the ownership system, ensuring correctness without runtime overhead.*/