Mathematical Deduction Engine (C Language)

A highly structured, deterministic search sieve built in pure C that isolates a target number between 0 and 99 in 8 or fewer attempts using number theory and parity analysis.

The Engineering Behind the Project

Instead of using a standard binary search (higher/lower) or random guessing, this engine utilizes a custom **Deterministic Decision Tree**. The system deduces the user's hidden number through minimalist Boolean (Yes/No) inputs by evaluating the mathematical properties of the digit spaces:

1. **Search Space Reduction (The Quad-Block Sieve):** Shifting the boundary conditions to group numbers into four tightly balanced structural zones (0-25, 26-49, 50-74, 75-99).
2. **Tens Digit Profiling:** Isolating the tens digit using specialized block rules, parity checks, and direct factor-count deductions.
3. **Ones Digit Fingerprinting:** Splitting the ones digit into distinct clusters based on prime factorization patterns, divisibility rules (multiples of 6, divisors of 3 or 5), and factor classification counts.

## 🛠️ Low-Level Challenges Overcome

* **C Input Stream Management:** Managed intricate runtime stream quirks by strategically deploying buffer clearances (`scanf(" %c", &ch)`) to prevent asynchronous character leaks and leftover newline (`\n`) execution skips.
* **Complex State Tracking:** Designed a deeply nested four-tier conditional workflow executed entirely in working memory without computational overhead.

How to Run Locally

Ensure you have a C compiler (like `gcc`) installed on your system.

```bash
# Clone the repository
git clone <your-repository-url>

# Compile the code
gcc main.c -o deduction_engine

# Run the executable
./deduction_engine
```
