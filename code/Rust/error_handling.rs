// Rust: error handling via Result
fn parse_positive(x: i32) -> Result<i32, String> {
    if x <= 0 {
        Err("input must be positive".into())
    } else {
        Ok(x)
    }
}

fn main() {
    match parse_positive(-3) {
        Ok(v) => println!("ok: {}", v),
        Err(e) => {
            println!("Error: {}", e);
            std::process::exit(1);
        }
    }
}
/*  Errors must be explicitly handled.
The compiler prevents ignoring failure cases. */