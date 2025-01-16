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

    switch (choice) {
        case 1:
        printf("You encountered a swarm of bats and died!");
        break;
        case 2:
        printf("You rolled down a hill and hit your head on a treasure chest!");
        printf("┌────────────────────────────┐\n");
        printf("│       Treasure Chest       │\n");
        printf("├────────────────────────────┤\n");
        printf("│  Your curiosity kills you, │\n");
        printf("│  do you open it or not?    │\n");
        printf("├────────────────────────────┤\n");
        printf("│ Options:                   │\n");
        printf("│ 1. Run towards a cave      │\n");
        printf("│ 2. Roll down a hill        │\n");
        printf("├────────────────────────────┤\n");
        break;
    }
}