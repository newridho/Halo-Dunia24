use std::io::{self, Write};

fn main() {
    let _ = io::stdout().write_all(b"Hello, world!\n");
}
