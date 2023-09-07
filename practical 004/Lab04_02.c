// EXERCISE 02 [IT23184558 - BINUWARA D B Y]
#include <stdio.h>
int main() {
    char ID;

    printf("Enter the first letter of the serial number: ");
    scanf("%c",&ID);

    switch (ID) {
            case 'B':
            case 'b':
            printf("class: Battleship\n");
            break;
            case 'C':
            case 'c':
            printf("class: Cruiser\n");
            break;
            case 'D':
            case 'd':
            printf("class: Destroyer\n");
            break;
            case 'F':
            case 'f':
            printf("class: Frigate\n");
            break;
            default:
            printf("Unknown Class\n");
            break;
    }
    return 0;
}