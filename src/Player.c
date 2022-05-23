#include <stdio.h>
#include <string.h>
/*
#include "linkedlist.h"
#include "textfilewriter.h"
*/
void command();

int main() {
    int number_of_song = 0;
    int number_of_command = 0;

    scanf("%d", number_of_song);
    scanf("%d", number_of_command);

    for(int i=0; i<number_of_command; i++) {
        read_command();
    }
    return 0;
}

void read_command() {
    char command[100];
    scanf("%s", command);
    if(!strcmp(command, "add"))        { printf("add"); return add; } //string argument x1
    else if(!strcmp(command, "del"))   { printf("del"); return del; } //string argument x1
    else if(!strcmp(command, "list"))  { printf("list"); return list; }
    else if(!strcmp(command, "next"))  { printf("next"); return next; }
    else if(!strcmp(command, "prev"))  { printf("prev"); return prev; }
    else if(!strcmp(command, "move"))  { printf("move"); return move; } //int argument x1
    else if(!strcmp(command, "play"))  { printf("play"); return play; }
    else if(!strcmp(command, "clear")) { printf("clear"); return clear; }
    else if(!strcmp(command, "quit"))  { printf("quit"); return quit; }
    else if(!strcmp(command, "load"))  { printf("load"); return load; } //string argument x1
    else if(!strcmp(command, "save"))  { printf("save"); return save; } //string argument x1
    else { ; }
}

