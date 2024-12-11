#include <stdio.h>
#include <ctype.h>

int main() {
    char input[10];
    printf("Enter a number or a character: ");
    scanf("%s", input);

    if (isdigit(input[0]) || (input[0] == '-' && isdigit(input[1]))) {
        // Input is a number
        int number = atoi(input);
        switch (number > 0) {
            case 1:
                printf("The number is positive.\n");
                break;
            case 0:
                switch (number == 0) {
                    case 1:
                        printf("The number is zero.\n");
                        break;
                    case 0:
                        printf("The number is negative.\n");
                        break;
                }
                break;
        }
    } else if (isalpha(input[0]) && input[1] == '\0') {
        // Input is a single character
        char ch = tolower(input[0]);
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("The character is a vowel.\n");
                break;
            default:
                printf("The character is a consonant.\n");
                break;
        }
    } else {
        printf("Invalid input. Please enter a number or a single character.\n");
    }

    return 0;
}
