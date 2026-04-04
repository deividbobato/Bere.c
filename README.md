# Bere.c 🛒

A simple point-of-sale (POS) system written in C, simulating a small grocery store's daily operations.

Developed as a monthly project for the Software Engineering program at UniAmérica (Grade: 90/100).

---

## Features

- **Cleaning supplies module** — product selection and subtotal tracking
- **Food module** — product selection with running subtotal
- **Bakery module** — product selection with running subtotal
- **Payment module** — cash (with tiered discounts) or card, change calculation
- **End-of-day report** — total sales count and daily revenue on exit

## Discount rules (cash only)

| Purchase total | Discount |
|---|---|
| R$ 30.00 – R$ 49.99 | 5% |
| R$ 50.00 – R$ 99.99 | 10% |
| R$ 100.00+ | 18% |

---

## How to compile and run

**Requirements:** GCC (or any C compiler)

```bash
gcc Bere.c -o bere
./bere
```

---

## Concepts used

- Functions and modular structure
- `do-while` and `while` loops
- `switch` for menu navigation
- Global variables for state accumulation
- Basic input/output with `scanf` and `printf`

---

## Author

**Deivid Nunes Bobato**  
Software Engineering student — UniAmérica, Foz do Iguaçu, PR  
[LinkedIn](https://www.linkedin.com/in/deivid-nunes-bobato-0531b5217) · [bobato.dede@gmail.com](mailto:bobato.dede@gmail.com)
