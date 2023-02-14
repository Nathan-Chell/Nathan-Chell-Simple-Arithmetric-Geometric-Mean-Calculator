Simple program to determine the Arithmetic-Geometric mean of two positive real numbers.

x <= G(x, y) <= A(x, y) <= y

The geometric and arithmetic averages
converge to the same value as precision goes to infinity.

For a 'good enough' approximation, a precision of 5 is enough.

Compiled for windows using gcc 10.3.0

To build from source:

    gcc ./src/AGM.c -o ./src/AGM.exe

Learn more: https://en.wikipedia.org/wiki/Arithmetic%E2%80%93geometric_mean