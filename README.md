# IP Subnet Calculator (CIDR) – C Language

This project is a lightweight **IP Subnet Calculator** written in **C**, designed to compute key network parameters using **CIDR notation** (e.g., `192.168.1.0/24`).

## Features

- Accepts IP address with CIDR (e.g., `/16`)
- Calculates:
  - Subnet Mask
  - Network Address
  - Broadcast Address
  - First & Last Host Address
  - Total Usable Hosts
- Performs all calculations using **bitwise operations**


## Tech Stack

- **Language:** C (Standard C99)
- **Platform:** Windows CLI and VSCode
- **Tools:** GCC / Clang

## Compilation

Use any standard C compiler:

```bash
gcc subnet_calculator.c -o subnet_calc
./subnet_calc

