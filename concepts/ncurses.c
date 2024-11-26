#include <ncurses.h>

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