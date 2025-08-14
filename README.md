# C Scientific Calculator

A simple, terminal-based scientific calculator written in C. It supports common arithmetic along with scientific functions like power, roots, trigonometry, logarithms, factorial, and more.

## Features

- Basic operations: addition, subtraction, multiplication, division
- Scientific functions:
  - Power (x^y), square, cube
  - Square root, nth root
  - Trigonometric functions: sin, cos, tan
  - Inverse trig: asin, acos, atan
  - Logarithms: natural log (ln), base-10 log (log10)
  - Exponentials: e^x
  - Factorial (n!), permutations (nPr), combinations (nCr)
  - Reciprocal (1/x), percentage
- Input validation and error handling for invalid arguments (e.g., division by zero, negative sqrt)
- Clear menu-driven interface in the terminal

## Getting Started

### Prerequisites

- C compiler (gcc or clang)
- Standard C library
- math.h support (link with -lm)

### Build

- Linux/macOS:
  - gcc -o calculator Calculator.c -lm
- Windows (MinGW):
  - gcc -o calculator.exe Calculator.c -lm

### Run

- Linux/macOS:
  - ./calculator
- Windows:
  - calculator.exe

## Usage

- Launch the program to see a numbered menu of operations.
- Enter the option number, then provide requested inputs.
- Results are displayed immediately; you'll be prompted to continue or exit.

Example:
1) Select "Power (x^y)"
2) Base: 2
3) Exponent: 10
4) Result: 1024

Note: If angles are required, assume radians unless the program asks for degrees/radians.

## Project Structure

- Calculator.c — Main program containing menu, input handling, and function implementations

## Implementation Details

- Language: C (C11/C99 compatible)
- Math library: math.h (sin, cos, tan, log, log10, exp, pow, sqrt, etc.)
- Error handling:
  - Division by zero checks
  - Domain checks (e.g., sqrt for negatives, log for non-positives)
  - Factorial restricted to non-negative integers within range

## Roadmap

- History of recent calculations
- Parentheses and full expression parsing
- Memory functions (M+, M-, MR, MC)
- Complex numbers support
- Configurable precision and formatting
- Unit conversion (angles, length, mass, etc.)
- Unit tests

## Contributing

- Fork the repo
- Create a feature branch: git checkout -b feature/your-feature
- Commit: git commit -m "Add your feature"
- Push: git push origin feature/your-feature
- Open a Pull Request

Guidelines:
- Keep functions small and focused
- Validate all inputs
- Comment non-obvious logic
- Use consistent snake_case naming

## Troubleshooting

- undefined reference to 'sin' (or others):
  - Link with -lm at the end of the gcc command
- Trig results seem off:
  - Verify radians vs degrees usage
- Factorial overflow:
  - Limit n to a safe range (e.g., n ≤ 20 for 64-bit)

## Example Makefile

```make
CC=gcc
CFLAGS=-O2 -Wall -Wextra -std=c11
LDFLAGS=-lm
TARGET=calculator

all: $(TARGET)

$(TARGET): Calculator.c
	$(CC) $(CFLAGS) -o $(TARGET) Calculator.c $(LDFLAGS)

clean:
	rm -f $(TARGET)
```

Build and run:
- make
- ./calculator

## License

Specify a license (e.g., MIT). If unsure, MIT is a common permissive choice.

## Contact

- Maintainer: Vader-OP
- Issues: Please open a GitHub issue with steps to reproduce and expected behavior
