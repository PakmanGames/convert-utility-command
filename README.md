# Convert Utility Command
A Linux-like utility command to convert longs to a new radix (between 2 to 36) by reading user input from `stdin`.

This project was part of *The C Basics Assignment* from the 2XC3 Development Basics course. During this project I developed a Linux-like utility command to convert longs into a new radix. With this project I got to experiment with how the preprocessor in C works, by taking advantage of it and separating the program into modular pieces and separate files.  
In addition to learning more about C, I learned about the `gcov` tool to test code coverage, with this new tool I made sure to test every part of my program to make sure it functions as I intended it to.

### Technologies
<p align="center">
    <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white">
    <img src="https://img.shields.io/badge/GIT-E44C30?style=for-the-badge&logo=git&logoColor=white">
    <img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white">
    <img src="https://img.shields.io/badge/GitHub_Actions-2088FF?style=for-the-badge&logo=github-actions&logoColor=white">
</p>

### How to use the utility command
Usage: `convert [-b BASE] [-r START FINISH]`  
Where `BASE` is between 2 and 36 (inclusive) and `START` and `FINISH` are long integers.  
The `-r` flag is optional, when not given it will read from `stdin`.

More details about the usage when you run `convert --help`.
