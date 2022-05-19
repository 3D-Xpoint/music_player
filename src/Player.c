#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0


typedef enum Input {add, del, list, next, prev, move, play, clear, quit, load, save} INPUT;

INPUT command();

int main() {

    INPUT input;

    input = command();

    printf("\n%d\n", input);

    return 0;
}

INPUT command() {
    char buffer[100];
    printf("Enter the Command\n");
    while(TRUE) {
        scanf("%s", buffer);
        if(!strcmp(buffer, "add"))        { printf("add"); return add; }
        else if(!strcmp(buffer, "del"))   { printf("del"); return del; }
        else if(!strcmp(buffer, "list"))  { printf("list"); return list; }
        else if(!strcmp(buffer, "next"))  { printf("next"); return next; }
        else if(!strcmp(buffer, "prev"))  { printf("prev"); return prev; }
        else if(!strcmp(buffer, "move"))  { printf("move"); return move; }
        else if(!strcmp(buffer, "play"))  { printf("play"); return play; }
        else if(!strcmp(buffer, "clear")) { printf("clear"); return clear; }
        else if(!strcmp(buffer, "quit"))  { printf("quit"); return quit; }
        else if(!strcmp(buffer, "load"))  { printf("load"); return load; }
        else if(!strcmp(buffer, "save"))  { printf("save"); return save; }
        else { printf("Please enter the command again\n"); }
    }
}
