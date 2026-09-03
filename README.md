# 🎮 College Life RPG

A fun and beginner-friendly **terminal-based game written in C** that simulates the everyday struggles of college life.

The player has to survive **30 days of college** while balancing academics, attendance, money, energy, and social life.

Unlike fixed-stat games, **College Life RPG allows the player to enter their own starting stats**, making every playthrough different.

Your choices affect your stats, random events can change your situation, and one bad decision might leave you completely cooked. 💀

---

## 🎯 Objective

The goal of the game is simple:

> **Survive 30 days of college without running out of money or energy while maintaining your academics and attendance.**

You need to balance five important aspects of college life:

- 🎓 CGPA Score
- 💰 Money
- ⚡ Energy
- 👥 Social Life
- 📚 Attendance

Every decision has consequences.

Choose wisely.

---

## 🚀 Features

- 🎮 Interactive terminal-based gameplay
- 👤 Custom starting stats
- 📅 30-day college survival system
- 🎓 Academic performance tracking
- 📚 Attendance management
- 💰 Money management
- ⚡ Energy management
- 👥 Social life tracking
- 🎲 Random events
- 🔀 Multiple choices with different consequences
- ⚠️ Attendance warnings
- 💀 Game-over conditions
- 🏆 Multiple final outcomes
- 📊 Automatic stat limits
- 🌱 Beginner-friendly C implementation

---

## 🎮 Starting the Game

At the beginning of the game, the player can enter their own stats.

```text
Enter your current stats:

CGPA Score (0-100): 75
Money (Rs.): 5000
Energy (0-100): 80
Social Life (0-100): 50
Attendance (0-100): 90
```

The game then displays your starting stats.

```text
==============================
        YOUR CURRENT STATS
==============================

CGPA Score      : 75/100
Money           : Rs. 5000
Energy          : 80/100
Social Life     : 50/100
Attendance      : 90%

==============================
```

---

## 📊 Player Stats

The game tracks five main statistics.

| Stat | Description |
|------|-------------|
| 🎓 **CGPA Score** | Represents your academic performance |
| 💰 **Money** | Your available college/hostel budget |
| ⚡ **Energy** | Represents how tired or energetic you are |
| 👥 **Social Life** | Represents your social activities and interactions |
| 📚 **Attendance** | Represents your class attendance percentage |

Most stats are automatically kept between **0 and 100**.

Money can increase or decrease depending on your choices and random events.

---

## 🕹️ Daily Choices

Every day starts with the same classic college problem:

```text
It's 7:45 AM.
Your class starts at 8:00 AM.

What do you want to do?

1. Attend class
2. Sleep more
3. Skip class and study
4. Go out with friends
5. Order food and chill
```

Each option affects your stats differently.

---

## 📚 Choice 1 — Attend Class

Choosing to attend class improves your academics and attendance but costs some energy and money.

```text
You somehow made it to class.
Academic weapon behaviour.
```

### Effects

- CGPA: `+3`
- Attendance: `+2`
- Energy: `-15`
- Money: `-Rs. 50`

---

## 😴 Choice 2 — Sleep More

Sometimes sleep wins.

```text
You chose sleep over education.
Honestly... understandable.
```

### Effects

- Energy: `+25`
- Attendance: `-5`
- CGPA: `-2`

---

## 📖 Choice 3 — Skip Class and Study

A risky academic strategy.

```text
You skipped class but studied seriously.
Risky strategy.
```

### Effects

- CGPA: `+5`
- Attendance: `-5`
- Energy: `-10`

---

## 👥 Choice 4 — Go Out With Friends

Your social life improves.

Your bank account does not.

```text
You went out with your friends.
Social life increased, bank balance didn't.
```

### Effects

- Social Life: `+15`
- Money: `-Rs. 500`
- Energy: `-15`
- Attendance: `-5`

---

## 🍕 Choice 5 — Order Food and Chill

A relaxing but expensive choice.

```text
You ordered food and spent the evening chilling.
```

### Effects

- Money: `-Rs. 350`
- Energy: `+10`
- Social Life: `+2`

---

## 🎲 Random Events

College life is unpredictable.

To make the game more interesting, a **random event occurs every 3 days**.

The game uses C's random number generation system:

```c
rand()
```

Some possible random events are:

### 📝 Surprise Quiz

```text
Surprise quiz announced! You somehow do well.
```

Effect:

- CGPA: `+5`

### 🍕 Friends Order Food

```text
Your friends convince you to order food.
```

Effects:

- Money: `-Rs. 300`
- Social Life: `+5`

### 😴 Bad Sleep

```text
You slept badly last night.
```

Effect:

- Energy: `-15`

### 💰 Lucky Find

```text
You found Rs. 200 in your old bag. Lucky day!
```

Effect:

- Money: `+Rs. 200`

### 🎉 Club Event

```text
You attended a club event and met new people.
```

Effects:

- Social Life: `+10`
- Energy: `-5`

---

## ⚠️ Attendance Warning

If your attendance falls below **50%**, the game gives you a warning.

```text
WARNING: Attendance is below 50%!
You are entering dangerous territory.
```

You can still continue playing, but your attendance may affect your final result.

---

## 💀 Game Over Conditions

You must survive all **30 days**.

However, the game can end early.

### 💸 You Run Out of Money

If your money reaches `0` or below:

```text
====================================
            GAME OVER
====================================

You are officially broke.
Your hostel survival has ended.
```

### ⚡ You Run Out of Energy

If your energy reaches `0`:

```text
====================================
            GAME OVER
====================================

Your energy reached zero.
You desperately need rest.
```

---

## 🏆 Final Results

If you successfully survive all **30 days**, your final stats determine your result.

### 🗿 Academic Weapon

Requirements:

```text
CGPA >= 80
Attendance >= 75
Money > 0
```

Result:

```text
ACADEMIC WEAPON
You somehow managed college perfectly.
```

---

### 😎 Survivor

Requirements:

```text
CGPA >= 60
Money > 0
```

Result:

```text
SURVIVOR
Not perfect, but you survived college.
```

---

### 💀 Absolutely Cooked

If you survive 30 days but fail to meet the other requirements:

```text
ABSOLUTELY COOKED
At least you survived 30 days.
```

---

## 🧠 C Programming Concepts Used

This project uses several fundamental concepts of the **C programming language**.

### Variables

Used to store player statistics such as:

```c
int cgpa;
int money;
int energy;
int social;
int attendance;
```

### Conditional Statements

The game uses `if` and `else` statements for:

- Checking game-over conditions
- Checking attendance
- Limiting player stats
- Determining final results

### Switch Statements

`switch-case` is used to handle:

- Player choices
- Random events

### Loops

A `while` loop is used to simulate the **30-day college experience**.

```c
while (day <= 30)
```

### Functions

The project uses separate functions to keep the program organised.

```c
showStats()
randomEvent()
limitStats()
```

### Pointers

Pointers are used to modify the original player statistics inside functions.

Example:

```c
void randomEvent(int *money, int *energy, int *social, int *cgpa)
```

### Random Number Generation

Random events are generated using:

```c
rand() % 5
```

The random number generator is initialized using:

```c
srand(time(0));
```

---

## 💻 Technologies Used

- **C Programming Language**
- GCC Compiler
- Standard C Libraries
- Terminal / Command Prompt

### Libraries

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```

---

## 📁 Project Structure

```text
College-Life-RPG/
│
├── main.c
├── README.md
└── LICENSE
```

---

## ▶️ How to Run

### Step 1 — Clone the Repository

```bash
git clone https://github.com/yourusername/college-life-rpg.git
```

Replace `yourusername` with your GitHub username.

### Step 2 — Open the Project Directory

```bash
cd college-life-rpg
```

### Step 3 — Compile the Program

Using GCC:

```bash
gcc main.c -o college_rpg
```

### Step 4 — Run the Game

#### Windows

```bash
college_rpg.exe
```

#### Linux / macOS

```bash
./college_rpg
```

---

## 🎮 Example Gameplay

```text
====================================
        COLLEGE LIFE RPG
====================================

Survive 30 days of college life!
Balance your CGPA, money, energy,
attendance and social life.

====================================

====================================
              DAY 1
====================================

==============================
        YOUR CURRENT STATS
==============================

CGPA Score      : 75/100
Money           : Rs. 5000
Energy          : 80/100
Social Life     : 50/100
Attendance      : 90%

==============================

It's 7:45 AM.
Your class starts at 8:00 AM.

What do you want to do?

1. Attend class
2. Sleep more
3. Skip class and study
4. Go out with friends
5. Order food and chill

Enter your choice: 1

You somehow made it to class.
Academic weapon behaviour.
```

---

## 🔮 Future Improvements

This is currently a beginner-friendly version of the project.

Some features that could be added in future versions include:

- 💾 Save and load game using file handling
- 👤 Player name and profile
- 🎚️ Difficulty levels
- 🎲 More random events
- 📚 Mid-semester exams
- 📝 Surprise assignments
- 🏆 Achievement system
- 🎉 More college and club events
- 💰 Better money management
- 🍕 Food and shop system
- 🛏️ Hostel-specific events
- 📈 Detailed player statistics
- 🖥️ Improved ASCII interface
- 🛣️ Multiple story paths
- 🏁 More endings
- 🎓 Actual 0–10 CGPA system

---

## 🌟 Why I Made This Project

I created **College Life RPG** while learning the basics of **C programming**.

Instead of building only traditional beginner projects such as calculators or number guessing games, I wanted to create something more interactive and relatable to college students.

This project allowed me to apply basic C concepts such as **loops, functions, conditional statements, switch cases, pointers, and random number generation** while building a simple terminal-based game.

It also helped me understand how different programming concepts can work together to create an interactive program.

---

## 🤝 Contributions

Suggestions, improvements, and new ideas are welcome.

Feel free to fork the repository and experiment with:

- New random events
- New player choices
- Different endings
- New game mechanics
- Improved stat systems

---

## 👤 Author

**Sarthak Varma**  
ID No.: `2026A7PS0315H`

Student Project — C Programming
