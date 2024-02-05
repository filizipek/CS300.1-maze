Maze
Author: Filiz İpek Oktay
Date: 27.10.2023

Overview
This C++ program, developed for CS300 Homework 1, is designed to solve mazes using a stack-based approach. The application prompts users to input details about multiple mazes, including the number of mazes, the dimensions of each maze (rows and columns), and specific information about the maze's entrance, exit, and visited blocks.

Program Structure
Main Program:

The main function initializes a stack of maze information (Stack<info> maze) and prompts the user for the number of mazes.
For each maze, users are prompted to input the number of rows and columns (mazeRow and mazeCol), maze ID, entrance and exit coordinates (entX, entY, exX, exY), and the number of visited blocks (visitedBlocks).
Maze Information Structure (info):

The program utilizes a struct named info to store maze-related information.
coord: A vector storing the current coordinates within the maze.
direc: A vector representing the directions (North, East, South, West) with initial values set to 1.
Instructions
Number of Mazes:

Enter the total number of mazes you want to solve.
Maze Details:

For each maze, provide the following details:
Number of rows and columns (M and N).
Maze ID.
Entrance and exit coordinates.
Number of visited blocks.
Execution:

Compile and run the program using a C++ compiler.
Follow the prompts to input maze details.
Maze Solving:

The program utilizes a stack to solve each maze and keeps track of the visited blocks.
Notes
This program was created as part of CS300 Homework 1.
Feel free to explore, modify, and adapt the program according to your needs.
For any questions or suggestions, please contact the author, Filiz İpek Oktay.
Happy Maze Solving!
Embark on the journey of maze-solving adventures with this C++ application. May your mazes be challenging and your solutions be swift!





