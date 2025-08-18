## Double variable
- Use of the "double" variable in cases such as radius, area, perimeter.

## Pointers
- A pointer is a variable that stores the memory address of another variable.
- Pointers allow functions to modify variables outside their own scope by accessing their memory addresses.
- They are used for dynamic memory allocation, efficient array handling, and implementing data structures like linked lists.
- Syntax: `type *pointerName;` (e.g., `int *p;`)
- The value at the address a pointer points to can be accessed or modified using the `*` operator (dereferencing). **EDITED 17/08/2025**

## Friend Function
- A friend function is a function that is not a member of a class but has access to its private and protected members.
- It is declared inside the class with the `friend` keyword.
- Useful when two or more classes need to access each other's private data.

## Inheritance
- Inheritance allows a class (derived/child) to acquire properties and behaviors (methods and variables) from another class (base/parent).
- Promotes code reuse and logical hierarchy.
- Syntax: `class Derived : public Base { ... };`

## Polymorphism
- Polymorphism means "many forms" and allows objects to be treated as instances of their parent class rather than their actual class.
- Achieved mainly through function overriding and virtual functions.
- Enables dynamic method binding, so the correct function is called at runtime based on the

## Templates
- Templates allow writing generic and reusable code for functions and classes.
- They enable functions and classes to operate with any data type without rewriting code for each type.

## UML - Undenified Modeling Language
- UML is a standardized way to visualize the design of a system.
- Common UML diagrams in C++ studies:
  - **Class Diagram**: Shows classes, their attributes, methods, and relationships (inheritance, association).
  - **Sequence Diagram**: Shows how objects interact in a particular scenario of a use case.
- UML helps in planning and communicating software architecture before coding. **EDITED 18/08/2025**

## To do:
- Write getters, setters, etc
- Write const functionality
- Virtual functions
- Constructor/Destructor
