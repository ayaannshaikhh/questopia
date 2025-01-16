#include <stdio.h>

void northStory() {
    int choice;
    printf("┌────────────────────────────┐\n");
    printf("│         Icey Tundra        │\n");
    printf("├────────────────────────────┤\n");
    printf("│   You encounter a strong   │\n");
    printf("│  blizzard, what do you do? │\n");
    printf("├────────────────────────────┤\n");
    printf("│ Options:                   │\n");
    printf("│ 1. Run towards a cave      │\n");
    printf("│ 2. Roll down a hill        │\n");
    printf("├────────────────────────────┤\n");

    do {
        printf("What do you pick? > ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 2);
}