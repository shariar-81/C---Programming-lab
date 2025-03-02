#include <stdio.h>

int main() {
    FILE *filePointer;
    char input[100];
    char buffer[100];

    filePointer = fopen("user_data.txt", "w");
    if (filePointer == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter some text (max 100 characters): ");
    fgets(input, sizeof(input), stdin);
    fprintf(filePointer, "%s", input);

    fclose(filePointer);

    filePointer = fopen("user_data.txt", "r");
    if (filePointer == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Content of the file:\n");
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePointer);

    return 0;
}
