# Reverse File Content Using C

This C program writes text to a file and reads the content in reverse using `fseek()` and `ftell()`.

## 💻 Language
C

## 📋 Description

- Writes a sample string to a file named `cpp.txt`
- Uses file pointers and functions like `fseek()`, `ftell()`, and `fgetc()` to:
  - Move to the end of the file
  - Read characters backward
  - Print the reversed content to the console

## 🧪 Sample Output
uoy teem ot ecin enoyreve iH

> *Actual output will be the reverse of what was written into the file.*

## 🛠️ How to Run

```bash
gcc reverse.c -o reverse
./reverse

🌱 What I Learned

Using file handling functions in C

Working with fseek() to navigate files

Reading characters in reverse order
