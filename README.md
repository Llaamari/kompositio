# Car Composition in C++
![C++](https://img.shields.io/badge/C++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![CMake](https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white)

This project demonstrates **object-oriented design in C++** using **strong composition** (UML filled diamond ◆).  
A `Car` object creates and owns:
- one `Engine` instance
- four `Wheel` instances

The goal is to model real-world "**has-a / owns**" relationships instead of inheritance.

---

## Why Composition, Not Inheritance?

Composition is used because:
- A car **has an engine**
- A car **has wheels**
- We **cannot logically say** "a car *is a wheel*" or "a wheel *is a car*"

Inheritance (**is-a**) works for specialization (e.g., "Corolla **is a Car**"),  
but this task focuses on **structural ownership**, making composition the correct choice.

---

## Class Structure

| Class     | Responsibility |
|-----------|---------------|
| `Engine`  | Stores horsepower and displacement |
| `Wheel`   | Stores size and tire type |
| `Car`     | Owns 1 Engine + 4 Wheels, stores brand/model, prints details |

Each class is implemented in separate header (`.h`) and source (`.cpp`) files, following encapsulation practices.

---

## Build System

The project targets **C++17** and uses **CMake** for building.  
It can be compiled in any standard C++17 environment.

Example build using command line:

```sh
mkdir build
cd build
cmake ..
cmake --build .
```

---

## Expected Output

After calling `setEngine()` and `setWheels()` in `main()`, the application prints:

```
Auto: Toyota Corolla
Moottori: 150 hp, 2.0 L
Rengas 1: 17 tuumaa, kesärengas
Rengas 2: 17 tuumaa, kesärengas
Rengas 3: 17 tuumaa, kesärengas
Rengas 4: 17 tuumaa, kesärengas
```

> **Note for Windows (MinGW/Qt Creator console):** UTF-8 output was enabled using:<br>
> ![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white) ![Qt](https://img.shields.io/badge/Qt-%23217346.svg?style=for-the-badge&logo=Qt&logoColor=white)
> ```cpp
> system("chcp 65001 > nul");
> ```

---
## Project Files

```
engine.h / engine.cpp
wheel.h  / wheel.cpp
car.h    / car.cpp
main.cpp
```
