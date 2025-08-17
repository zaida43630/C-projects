# 🎮 C++ Console Projects Collection  

This repository contains a collection of **C++ console-based applications and games** developed by **Mohd Zaid**.  
Each program demonstrates problem-solving, game mechanics, and console programming techniques in C++.  

---

## 📌 Projects Included

### 1️⃣ Snake Game 🐍  
This is a simple **Snake Game** implemented in **C++** using the console. The snake moves around the board, eats fruits, and grows in length. The game ends if the snake collides with the wall or itself.

**📌Features:**  
- Snake movement with keyboard input (w, a, s, z).
- Random fruit spawning on the board.
- Snake tail grows each time it eats a fruit.
- Game over when hitting walls or colliding with itself.
- Minimalistic console-based UI using ASCII characters.

**🎮 Controls:**
- a → Move Left
- s → Move Right
- w → Move Up
- z → Move Down
- x → Exit Game

**📷 Game Preview:**
# # # # # # # # # # # # # # # # # # # #
#                                     #
#                                     #
#              O                      #
#                                     #
#                    F                #
#                                     #
# # # # # # # # # # # # # # # # # # # #

- # → Wall
- O → Snake Head
- o → Snake Tail
- F → Fruit

---

### 2️⃣ Tank Shooter 🔫  
This is a simple **Tank Shooter** Game implemented in **C++** using the console. The player controls a tank at the bottom of the screen and shoots bullets to destroy 5 enemy tanks positioned at the top. The game ends if the player loses all lives or if all enemies are destroyed.

**📌 Game Rules:**
1. In the upper part of the screen, there are **5 enemy tanks** (they cannot move).
2. In the lower part of the screen, there is **one player tank** (you control this).
3. **Player Controls:**
  -a → Move Left
  -s → Move Right
  -b → Shoot Bullet
  -x → Exit Game at any time
4. If the player tank is hit by **enemy bullets 3 times**, the game is over.
5. If all **5 enemy tanks are destroyed**, the player wins.
6. After the game ends, press **Y** or **y** to play again.

**📷 Game Preview:**
# # # # # # # # # # # # # # # # # # # #
#   o o       o o       o o       o o #
#    o         o         o         o  #
#                                     #
#                                     #
#                                     #
#                 o                   #
#               o   o                 #
#                                     #
# # # # # # # # # # # # # # # # # # # #

- # → Wall
- o o + o → Tank (player or enemy)
- o → Bullet  

---

### 3️⃣ Bank Account Management System 💰  
This is a simple **Bank Account Management System** implemented in **C++** using Object-Oriented Programming (OOP).
The program simulates bank accounts for multiple users where you can **deposit** or **withdraw** money, check balances, and handle invalid transactions.

**📌Features:**  
- Multiple predefined user accounts (with account number, name, and initial balance).
- Deposit and withdraw money from an account.
- Validates withdrawal requests (cannot withdraw more than available balance).
- Displays account details including account number, name, and balance.
- Supports multiple transactions in one run.
- Input validation for account numbers and transaction types.

**🎮 How to Use**
1. Run the program.
2. Enter your account number from the available list.
3. The program will display account details.
4. Choose an operation:
  - Deposit money (deposit, d, credit, c)
  - Withdraw money (draw, w, cash)
5. Enter the transaction amount.
  - If depositing → balance increases.
  - If withdrawing → balance decreases (only if sufficient funds).
6. After the transaction, you will be prompted to:
  - Enter "more" or "m" to perform more transactions.
  - Or exit the program.

---

### 4️⃣ Math Quiz Program ➕➖✖️➗  
This is a simple math quiz game built in C++.
The program asks a series of math-based pattern questions where the user must find the correct answer.
It validates user input and continues prompting until the correct answer is given.

**Features:**  
-8 math-based quiz questions.
- Questions use addition, subtraction, multiplication, division, powers, and patterns.
- Shows solved examples for each pattern before asking the user.
- Keeps asking until the correct answer is entered.
- Provides feedback:
  - "Wrong answer please try again....." for incorrect answers.
  -  "Correct Answer" for correct answers.

---

### 5️⃣ Falling Objects Game 🎮
This is a **console-based arcade game** written in **C++** where the player controls a block character to catch falling objects. Some objects increase your score, while others cause instant game over. The game gets faster as your score increases, making it more challenging.

**Features:**  
- Player movement using keyboard controls (w, z, a, s).
- Multiple types of falling objects:
  - Good objects (++) (pp) (11) → Increase score.
  - Bad objects (--) (nn) (00) → Cause game over.
- Score increases differently based on the type of object caught:
  - ++ → +3 points
  - pp → +2 points
  - 11 → +1 point
- Dynamic difficulty → Speed increases as score gets higher.
- Game Over screen with final score display.

**Controls:**  
- `a` → Move Left  
- `s` → Move Right  
- `w` → Move Up  
- `z` → Move Down  
- `x` → Quit Game  

---
