#include <stdio.h>
#include <string.h>

void command();

int main() {
    INPUT input;
    int number_of_song = 0;
    int number_of_command = 0;

    scanf("%d", number_of_song);
    scanf("%d", number_of_command);

    for(int i=0; i<number_of_command; i++) {
        command();
    }
    return 0;
}

void command() {
    char buffer[100];
    scanf("%s", buffer);
    if(!strcmp(buffer, "add"))        { printf("add"); return add; } //string argument x1
    else if(!strcmp(buffer, "del"))   { printf("del"); return del; } //string argument x1
    else if(!strcmp(buffer, "list"))  { printf("list"); return list; }
    else if(!strcmp(buffer, "next"))  { printf("next"); return next; }
    else if(!strcmp(buffer, "prev"))  { printf("prev"); return prev; }
    else if(!strcmp(buffer, "move"))  { printf("move"); return move; } //int argument x1
    else if(!strcmp(buffer, "play"))  { printf("play"); return play; }
    else if(!strcmp(buffer, "clear")) { printf("clear"); return clear; }
    else if(!strcmp(buffer, "quit"))  { printf("quit"); return quit; }
    else if(!strcmp(buffer, "load"))  { printf("load"); return load; } //string argument x1
    else if(!strcmp(buffer, "save"))  { printf("save"); return save; } //string argument x1
    else { ; }
}

