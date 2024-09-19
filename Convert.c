#include <stdio.h>

void lowwertoUpper(char *str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        }
    }
}

int main() {
    char inputString[100];

    printf("Enter a string in lowercase: ");
    
    int i = 0;
	char c;

	while (i < 99 && scanf("%c", &c) == 1 && c != '\n') {
    	inputString[i++] = c;
	}

	inputString[i] = '\0'; 

    lowwertoUpper(inputString);

    printf("Uppercase string: %s\n", inputString);

    return 0;
}
