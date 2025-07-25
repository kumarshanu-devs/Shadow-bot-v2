# 🧠 Shadow Bot – C++ Virtual Assistant Project

Welcome to Shadow Bot, a multifunctional C++ project built using Code::Blocks that simulates a basic virtual assistant. It includes chatting, calculations, story reading, and games—all combined using modular C++ programming techniques.

---

## 🚀 Features

### 🗨️ 1. Chatbot (AI Chat)

* Responds to user input by reading answers from a text file.
* Uses your name during the session if you introduce yourself at the beginning.
* Integrates with a `.exe` text-to-speech reader to **speak** replies along with displaying them.
* Chat input is handled in real-time via the console.

### 🧮 2. Calculator

* Fully functional basic calculator.
* Supports addition, subtraction, multiplication, division, modulus, and power operations.
* Easy-to-use, console-based interaction.

### 📖 3. Story Reader

* Displays a list of story titles from a text file.
* You can select any story by entering its number.
* The story appears in the console for you to read.
* Use commands like `home` or `back` to navigate easily.

### 🎮 4. Number Guessing Game

* A simple game where you guess a number between 0–9.
* Uses C++ random number generation to pick a hidden number.
* Tells you if you guessed correctly or not, and loops until you want to exit.

---

## 🧩 Project Structure

```
ShadowBotProject/
│
├── main.cpp             # Home screen with menu and navigation
├── chat.cpp/.h          # Chatbot feature
├── calculator.cpp/.h    # Calculator logic
├── game.cpp/.h          # Number guessing game
├── story.cpp/.h         # Story reading feature
├── stories.txt          # Contains story titles and content
├── replies.txt          # Contains chatbot responses
├── speak.exe            # Used to convert bot text into speech (Windows only)
└── README.md            # Project overview
```

---

## 🛠️ How It Works

* Each module (chat, calculator, story, game) is developed in its own file and connected via header includes.
* The `main.cpp` file displays a menu and responds to user choices (1 = Chat, 2 = Calculator, etc.).
* The project clears and refreshes the screen with `clear` command simulation to give a better UI.
* Stories and bot responses are read from `.txt` files so they are easily editable.

---

## 🗂 File Input Samples

### `replies.txt`

```
hello=Hi there! How can I assist you?
how are you=I'm a bot, but I'm running perfectly!
bye=Goodbye! See you again.
```

### `stories.txt`

```
1. The Clever Fox
Once upon a time in a forest, there lived a clever fox...

2. The Brave Rabbit
In a small burrow under a tree, lived a rabbit who feared nothing...
```

---

## ⚙️ How to Run

1. Download and extract the ZIP project.
2. Open the project in **Code::Blocks** or any C++ IDE.
3. Build and run the `main.cpp` file.
4. Make sure `speak.exe`, `replies.txt`, and `stories.txt` are in the same folder as your `.exe` when running.

> 💡 This project works best on **Windows OS** due to the `.exe` text-to-speech tool.

---

## 👨‍💻 Technologies Used

* **C++** (modular programming, file I/O, vectors)
* **Code::Blocks** IDE
* **Text-to-Speech Integration** using external `.exe`
* **Object-Oriented Programming** approach

---

## 📌 Notes

* This project was originally created in 2022 and rebuilt in 2025 after data loss.
* Ideal for beginner/intermediate C++ learners to understand modular design and file integration.

---

## 👤 Creator

Kumar Shanu Sarkar

