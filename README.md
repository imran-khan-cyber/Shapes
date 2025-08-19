
# Shapes Project

## Project Description
A console-based C++ application that demonstrates **polymorphism** by creating and manipulating different geometric shapes. The project uses inheritance and virtual functions to allow a single interface to manage various shape types, such as circles and rectangles.

## Features
- **Polymorphic Behavior:** A single pointer to a base class can be used to call the correct function for derived classes (e.g., `calculateArea()`).
- **Object-Oriented Design:** The project is structured using C++ classes, inheritance, and virtual functions.
- **Support for Multiple Shapes:** The application can handle different shapes (e.g., circles, rectangles, etc.) in a uniform way.

## How to Compile and Run
### Prerequisites
- **Compiler:** You need a C++ compiler like G++ or MinGW.

### Compilation
Navigate to the project directory in your terminal or command prompt and run the following command to compile all source files:
```bash
g++ main.cpp Circle.cpp Rectangle.cpp -o Shapes

(Note: Replace main.cpp, Circle.cpp, and Rectangle.cpp with the actual names of your files.)

Execution
After compilation, you can run the program with this command:

./Shapes

Author
• Imran Khan M - GitHub Profile
