#include <ncurses.h>


// run sudo apt-get install libncurses5-dev libncursesw5-dev
// before compiling 
// command:- gcc ncurses.c -o ncurses -lncurses
// here we need to tell the compiler abt using this external downloaded lib instead of using libc

int main(){
    char letter;

    initscr();
    printw("press any key");
    refresh();

    letter = getch();
    clear();
    printw("You presses %c",letter);
    refresh();

    getch();
    endwin();

    return 0;
}

