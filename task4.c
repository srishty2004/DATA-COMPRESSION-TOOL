#include <stdio.h>
#include <string.h>

void runLengthEncoding(char *str) {
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        int count = 1;

        // Count repetitions
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Print the character and its count
        printf("%c%d", str[i], count);
    }

    printf("\n");
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);  // You can also use fgets if you want to support spaces

    printf("Compressed string using RLE: ");
    runLengthEncoding(input);

    return 0;
}