# Tactical Health Bar

A core gameplay mechanics subsystem simulation written in C++ designed to intercept user-defined terminal attributes, evaluate floating-point multiplier formulas, and render a live graphical interface display matrix.

## Project Overview
In game development, handling static data isn't enough—player stats must adapt dynamically based on runtime decisions, equipment choices, and character scaling. This repository acts as a backend engine module that handles standard input streams (`std::cin`), processes mixed-data type arithmetic, and outputs procedural visual feedback directly to the console terminal interface.

## Core Features
* **Dynamic Standard Stream Interception:** Implements robust standard input arrays (`std::cin`) to pause execution pipelines and parse text strings, integers, and floating-point elements at runtime.
* **Implicit Data Type Scaling:** Safely computes complex formulas using mixed-type expressions (multiplying `int` and `float`) to resolve character durability ceilings without precision loss.
* **Procedural Graphic UI Stream:** Uses iterative evaluation structures (`for` loops) to map numeric variables directly into a retro-style ASCII terminal health bar indicator (`█████`).

## Technical Concepts Applied
1. **Interactive Stream Pipelines:** Moving past hardcoded scripts to handle true user-driven input matrices.
2. **Type Promotion:** Utilizing the C++ compiler's native logic to safely scale integer whole numbers into floating-point decimals during mathematical operations.
3. **Procedural UI Rendering:** Generating visual data indicators using standard text output controls instead of heavy external graphic frameworks.

## How to Compile & Run

Ensure you have a standard C++ compiler installed (like GCC/MinGW).

1. Compile the source architecture using your terminal:
```bash
g++ main.cpp -o healthbar_sim
