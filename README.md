# Simple Shell

## Description

This project implements a basic shell interface in C, allowing command execution and input handling. It was created to explore system-level programming concepts and gain a deeper understanding of how shell environments operate.

### Motivation

The primary motivation was to learn about process management, inter-process communication, and command-line interfaces in Unix-based systems.

### Problem Solved

This shell simplifies executing basic commands and handling user input in a controlled environment.

### Learnings

Through this project, we learned about process creation (forking), execution, and the importance of robust error handling in system-level programming.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Links](#license)

## 🗂️ Files
- `shell.h`: Header file containing function declarations.
- `shell.c`: Determines the program's mode of operation (interactive or non-interactive)
- `tokenizer.c`: Splits a given input string into tokens using a specified delimiter and returns an array of these tokens.
- `executor_path.c`: Runs a command specified by the "argv" argument in a child process 
- `interactive.c`: Defines a basic interactive shell program
- `non_interactive.c`: Runs a command specified as the third argument

## Installation

To install the shell:
1. Clone the repository: `git clone [repository-link]`
2. Compile the code: `gcc *.c -o simple_shell`

## Usage

To run the shell:
1. Execute the compiled program: `./simple_shell`
2. Enter commands at the prompt.

### Features

- Execute standard Unix commands (like `ls`, `pwd`, `echo`, `touch`, `mkdir`, `cat`,`clear`, `rm`, `cp`, `mv`)
- Custom command handling (e.g., `exit` for terminating the shell)
- Supports interactive and non-interactive modes

## Functions

| Function              | Description                                          |
| :-------------------- | :--------------------------------------------------- |
| **ls**           | list directory contents. |
| **pwd**        | return working directory name.                       |
| **echo**      | write arguments to the standard output.                           |
| **touch**      | change file access and modification times.                     |
| **mkdir**        | make directories.                         |
| **clear**        | clear the terminal screen.                         |
| **rm**        |  remove directory entries.                         |
| **cp**        |  copy files.                         |
| **mv**        |  move files or renam files.                         |

### Interactive Mode
In this mode, the shell runs continuously, processing commands until 'exit' is entered.

### Non-Interactive Mode
To run a single command, use: `./simple_shell -c "command"`

## Contributing

If you find any issues or have suggestions for improvements, please feel free to open an issue or create a pull request. Contributions are welcome!

## Acknowledgments

This project draws inspiration from the standard Unix Shell.

## Contact

For any inquiries or feedback, you can contact the project maintainer:

`Audrey Lican` || `Alexandre Wertel`
## 🔗 Authors Links

[![github](https://img.shields.io/badge/Audrey_Github-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://github.com/AudreyLican)

[![github](https://img.shields.io/badge/Alexandre_Github-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://github.com/SuperPims?tab=repositories)

---

### Notes

- The code includes functions for command execution, tokenization, and handling interactive and non-interactive modes.
- Future improvements could include command history, enhanced error handling, and additional built-in commands.
