#include <stdio.h>
#include <string.h>

int count(char str[], char letter) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == letter) {
            count += 1;
        }
    }
    return count;
}

int main() {
    char str[100], letter;
    scanf("%s %c", str, &letter);
    int result = count(str, letter);
    printf("%d\n", result);
    return 0;
}