/*Write a program that accepts a string as input, capitalizes the first letter of each word in the
string, and then returns the result string.
Examples:
"hi"=> returns "Hi"
"i love programming"=> returns "I Love Programming"*/




#include <stdio.h>
#include <ctype.h>

char *capitalize_words(char *str) {
    char *result = str;
    int in_word = 0;

    while (*str) {
        if (isalpha(*str)) {
            // Capitalize if it's the first letter of a word
            if (!in_word) {
                *str = toupper(*str);
            }
            in_word = 1;
        } else {
            in_word = 0;
        }
        str++;
    }

    return result;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *capitalized_str = capitalize_words(str);
    printf("Capitalized string: %s", capitalized_str);

    return 0;
}
