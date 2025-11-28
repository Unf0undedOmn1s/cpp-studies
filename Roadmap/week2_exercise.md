# 🧭 Week 2 — Conditionals & Loops

## **Project: Adaptive Number Guessing Game**

### 🎯 **Objective**

This week builds directly on Week 1 by focusing on:

* Conditionals (`if`, `else if`, `else`)
* Loops (`while`, `do-while`)
* Random number generation
* Multi-level menus
* Tracking game statistics
* Clean user input/output flow

You will create a Number Guessing Game that becomes more logical, interactive, and structured than last week’s converter.

---

# 🧩 The Challenge: **Adaptive Number Guessing Game**

Create a command-line guessing game with:

* A difficulty menu
* Random number generation
* Unlimited guessing (until correct)
* Hints (“higher/lower”)
* Attempt counting
* Replay system
* Persistent statistics saved until the program ends
* Basic input validation (required for this week)

---

# ⚙️ Requirements

## 🧱 1. Main Menu

When the program starts:

```
--- Number Guessing Game ---
Choose difficulty:
1. Easy (1–20)
2. Hard (1–100)
3. Exit
```

If the user enters something invalid, display an error and re-prompt.

---

## 🎲 2. Random Number Generation

Use:

```cpp
#include <cstdlib>
#include <ctime>
```

Seed once:

```cpp
srand(time(0));
```

Difficulty determines the target number range:

| Difficulty | Range |
| ---------- | ----- |
| Easy       | 1–20  |
| Hard       | 1–100 |

---

## 🔁 3. Guessing Loop

The game should:

* Generate a random number
* Prompt the user for guesses until correct
* Count number of attempts
* Display whether the guess is too *high* or *low*

Example:

```
I'm thinking of a number between 1 and 20.
Enter your guess:
> 5
Too low!
> 18
Too high!
> 15
Correct! You got it in 3 attempts.
```

---

## 🛡️ 4. Input Validation (Required)

If the user enters:

* A non-number
* A number outside the difficulty range

Print:

```
Invalid guess. Please enter a number between X and Y.
```

Then re-prompt.

---

## 🕹️ 5. After-Game Menu

After the player guesses correctly:

```
Play again? (y/n)
```

* `y` → return to difficulty menu
* `n` → exit program and show summary

---

## 📊 6. Game Summary (Checksum Rule #2)

At the **very end**, after the user chooses to exit, print:

```
Total games played: X
Best attempt (fewest guesses): Y
```

These values must be tracked persistently during the program.

---

## 🔥 7. Hard Mode Attempt Limit (Required)

Hard mode must include a **7-attempt limit**.

If the user fails all 7 attempts:

```
Out of attempts! The number was: __
```

Then go to the replay menu (y/n).
