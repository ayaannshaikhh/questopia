#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "header.h"

/*
MAKEFILE PYTHON SERVER
display:
	@echo "Running C program and starting Python HTTP server..."
	./story > display/output.txt &
	cd display && python3 -m http.server 8000 &
	sleep 1
	open http://localhost:8000/output.txt

*/

int main () {
bool newPlayer = true;
int direction; // 1 = north, 2 = south, 3 = east, 4 = west

/* INITIAL SETTING*/
if (newPlayer == true) {
    printf("┌────────────────────────────┐\n");
    printf("│       Spooky Forest        │\n");
    printf("├────────────────────────────┤\n");
    printf("│   The path you pick will   │\n");
    printf("│   determine your fate...   │\n");
    printf("├────────────────────────────┤\n");
    printf("│ Options:                   │\n");
    printf("│ 1. North      2. South     │\n");
    printf("│ 3. East       4. West      │\n");
    printf("├────────────────────────────┤\n");
    do {
        printf("What do you pick? > ");
        scanf("%d", &direction);
    } while (direction < 1 || direction > 4);
    if (direction >= 1 || direction <= 4) {
        newPlayer = true;
    }
}

/* 
If user goes north, they will encounter a cold blizzard and go to a tundra
*/

switch (direction) {
    case 1:
    northStory();
    break;
    case 2:
    southStory();
    break;
    case 3:
    eastStory();
    break;
    case 4:
    westStory();
    break;
}


    return 0;
}