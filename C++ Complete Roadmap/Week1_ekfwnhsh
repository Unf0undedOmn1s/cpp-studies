let’s officially kick off **Week 1** 🎯

This first week should **set the tone**: not too easy, but solid enough that everyone gets to practice syntax, control flow, and thinking like a programmer in C++.
Here’s a full “exercise sheet” you can literally send to your group chat or print out.

---

# 🧭 Week 1 — Foundations & I/O: The Universal Unit Converter

### 🎯 **Objective**

* Practice input/output with `cin` and `cout`.
* Work with variables, constants, and arithmetic operations.
* Write clean, well-structured C++ code with clear user prompts.
* Begin thinking about modular design (even without functions yet).

---

### 🧩 **The Challenge: “Universal Unit Converter”**

Create a **command-line program** that converts **between different measurement units**.
The user will choose the type of conversion and enter a value; your program performs the conversion and displays the result.

---

### ⚙️ **Requirements**

#### 🧱 1. Menu System

When the program runs, show a main menu:

```
--- Universal Unit Converter ---
Choose a conversion type:
1. Temperature
2. Distance
3. Time
4. Exit
```

If the user chooses `1`, show a second menu **specific to that category**, like:

**Temperature conversions:**

```
1. Celsius → Fahrenheit
2. Fahrenheit → Celsius
3. Celsius → Kelvin
4. Kelvin → Celsius
```

Do the same idea for Distance (meters, kilometers, miles, feet) and Time (seconds, minutes, hours).

---

#### 🧮 2. Conversion Formulas

Implement *at least three conversions per category* (so ~9 total).
You may hardcode formulas like:

* **Temperature**

  * °C → °F: `(C × 9/5) + 32`
  * °F → °C: `(F - 32) × 5/9`
  * °C → K: `C + 273.15`

* **Distance**

  * m → km: `m / 1000`
  * km → miles: `km × 0.621371`
  * miles → feet: `miles × 5280`

* **Time**

  * sec → min: `sec / 60`
  * min → hr: `min / 60`
  * hr → sec: `hr × 3600`

---

#### 🖥️ 3. Input & Output

Example session:

```
--- Universal Unit Converter ---
Choose a conversion type:
1. Temperature
2. Distance
3. Time
4. Exit
> 1

Choose conversion:
1. Celsius → Fahrenheit
2. Fahrenheit → Celsius
3. Celsius → Kelvin
> 1

Enter value in Celsius:
> 100
Result: 100°C = 212°F
```

After each conversion, ask:

```
Do you want to convert another value? (y/n)
```

If `y`, return to the main menu; if `n`, exit gracefully.

---

#### ⚠️ 4. Validation (Optional Bonus)

Handle invalid input:

* If the user enters an invalid menu option, show an error and re-prompt.
* If the user enters non-numeric input for the value, print a friendly error message.

---

#### 🧠 5. Hidden Challenge (Checksum Rule #1)

You must **store at least one of the user’s results** (the last conversion) in a variable and display it again at the end of the program, e.g.:

```
Last conversion done:
100°C = 212°F
```

This ensures you practice working with **variables persistently**.

---

### 🧩 **Constraints**

* No external libraries beyond `<iostream>` and `<iomanip>` for formatting.
* Keep it in a **single `.cpp` file**.
* All output must be user-friendly.

---

### 📚 **What You’ll Practice**

* `#include`, `int main()`, and program structure
* Basic input/output (`cin`, `cout`)
* Variables and arithmetic
* `if`, `else if`, `else`
* Loops (optional, if you let the user convert repeatedly)
* Program clarity and logical flow

---

### 💡 **Extra Credit (Optional)**

Try to make your program:

* Support **looping indefinitely** until “Exit” is chosen.
* Print numbers with **two decimal places** using:

  ```cpp
  cout << fixed << setprecision(2);
  ```
* Allow the user to go *back* to the main menu after each conversion.
