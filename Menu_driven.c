#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    int choice;

    do {
        printf("\n 1. Print Hello \n 2. Print C language \n 3. Exit \n\n");
        printf(" Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n Hello\n");
                break;
            case 2:
                printf("\n C language\n");
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("\n Please enter a valid choice.\n");
        }

        printf("\n Do you want to enter more? (y/n): ");
        scanf(" %c", &c);

     } while (c == 'y' || c == 'Y');

    return 0;
}
