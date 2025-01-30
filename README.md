# 📊 Personal Finance Tracker

## 🚀 **Project Status Update (January 2025)**
I started this project during **Winter Break 2024** as a way to enhance my **C programming skills** while building a useful personal finance tool. However, as of January 2025, I am currently enrolled in **seven courses** at the University of British Columbia:
- **MATH 152, MATH 101** (Mathematics)
- **PHYS 158, PHYS 159, PHYS 170** (Physics)
- **APSC 101** (Applied Science)
- **WRDS 150B** (Writing and Communication)

Due to my demanding schedule, I **cannot allocate as much time** to this project as I originally intended. As a result, **active development is temporarily paused** and will resume in **May 2025**. 

Despite this, I am documenting my work thus far so that future development can build upon a **solid foundation**.

---

## 📌 **Project Overview**
### **Why I Built This**
The purpose of this **Personal Finance Tracker** is to **analyze my income and expenses** efficiently. Existing banking apps often feel **clunky and unintuitive**, so I wanted to create a **custom finance tracker** that presents **only the information I need** in a **clear and concise manner**.

### **Key Goals**
✔ Demonstrate **C programming proficiency**  
✔ Learn how to **use a Makefile** for compilation  
✔ Improve my **Git and GitHub workflow**  
✔ Implement **a secure login system**  
✔ Integrate **Data extraction from images (Tesseract OCR)**  
✔ Develop a **simple GUI using GTK+ or SDL2**  

This project started as a **C-based CLI application**, but I plan to **expand it into a web or mobile app** in the future, incorporating **machine learning for spending analysis**.

---

## 💂 **Directory Structure**
A well-organized project structure improves **modularity and maintainability**. Below is the **current structure** of my project:

```
Personal-Finance-Tracker/
│── .vscode/                # Editor settings (ignored in Git)
│── data/                   # Stores user data (ignored in Git)
│   ├── transaction.txt      # Tracks financial transactions
│   ├── users.txt            # Stores registered user credentials
│── include/                # Header files
│   ├── user.h               # Handles user authentication functions
│   ├── transactions.h       # Handles financial transaction functions
│── src/                    # Source files (core logic)
│   ├── main.c               # Entry point of the program
│   ├── user.c               # Implements user authentication
│   ├── transactions.c       # Implements transaction handling
│── Makefile                # Automates compilation process
│── README.md               # This project documentation
│── .gitignore              # Specifies untracked files
```

Each module is **modularly separated**, improving code **readability and reusability**.

---

## ⚙ **Compilation with Makefile**
I created a **Makefile** to automate compilation and manage dependencies.

### **How to Compile**
```sh
make        # Builds the finance tracker
make clean  # Removes compiled files
```

### **Makefile Breakdown**
- **`CC = gcc`** → Specifies the **GNU Compiler** for C.
- **`CFLAGS = -Wall -Wextra -Werror`** → Enables compiler warnings and strict error checking.
- **`SRC = src/main.c src/user.c src/transactions.c`** → Defines source files to compile.
- **`EXEC = finance_tracker`** → Specifies the output executable name.
- **`all:`** → Default rule to compile all necessary files.
- **`clean:`** → Removes compiled binaries and object files.

---

## 🔑 **Authentication System**
A **simple user authentication system** is implemented using **file-based storage**. Users can **sign up** and **log in**, with credentials stored securely in `users.txt`.

### **Implemented Features**
✔ **User Registration** (`signUp(username, password)`)  
✔ **Username Validation** (`validateUsername()`)  
✔ **Password Security** (`validatePassword()`)  
✔ **File Handling** (`users.txt` stores credentials)  

Example login flow:
```c
int signUp(char username[], char password[]) {
    // Open users.txt and check if username exists
    // Validate username & password
    // Append new user to file
}
```

### **Future Improvements**
🔹 **Encrypt stored passwords**  
🔹 **Implement session management**  
🔹 **Use a proper database (SQLite/PostgreSQL)**  

---

## 💁 **Git and GitHub Workflow**
This project is tracked using **Git**, with best practices in **branching, committing, and merging**.

### **Basic Commands Used**
```sh
git init                   # Initialize repository
git add .                  # Stage all changes
git commit -m "Message"    # Commit changes
git push origin develop    # Push to GitHub
git pull origin develop    # Pull latest updates
```

### **Branching Strategy**
- **`main`** → Stable, production-ready branch  
- **`develop`** → Active development branch  
- **Feature branches** → Used for new features (`feature/login-system`)  

---

## 💡 **Lessons Learned**
### **What Worked**
✔ Successfully built **a modular, structured C project**  
✔ Improved knowledge of **Makefiles and compilation**  
✔ Learned how to integrate **Git and GitHub effectively**  
✔ Designed a **functional login system with file-based storage**  

### **Challenges Faced**
❌ **MuPDF Installation Failed** → Removed for now.  
❌ **Limited Time for Development** → Will resume in **May 2025**.  

### **Future Plans**
🔹 Resume development in **May 2025**.  
🔹 Implement **transaction analytics**.  
🔹 Improve **user authentication security**.  
🔹 Expand into **a web/mobile application**.  

---

## 🏆 **Final Thoughts**
This **Personal Finance Tracker** is an ongoing project that reflects my **growth as a programmer**. While development is **paused until May 2025**, I am excited to continue building **new features** and learning **more advanced technologies**.

For now, **this README serves as documentation** of my **progress, challenges, and future direction**.

---
