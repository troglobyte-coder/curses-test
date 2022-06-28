//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.h"
#include <stdio.h>
#include <ncurses.h>

//
// Should greet the user into the program
//
// function arguments:
// -> n/a: ???
//
const char *greet(void)
{
    return "Hello, C Developer.";
} // end of func

//
// overview:
//  This is where all Troglobyte apps start there operation.
//
//  We can also give command-line arguments in C. CLI
//  arguments are given after the name of the program in
//  command-line shell of Operating Systems.
//
// function arguments:
// -> argc: stores the number of command-line arguments passed in.
// -> argv: array of character pointers listing all the arguments.
//
int foundation(int argc, char **argv)
{
    initscr();  /* Start curses mode */
	printw("%s", greet()); /* Print Hello World */
	refresh(); /* Print it on to the real screen */
	getch();   /* Wait for user input */
    endwin();  /* End curses mode */

    return 0;
} // end of func
