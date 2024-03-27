#include <stdio.h>

int main() {
    char str[100];
    int words = 0;

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ( str[i] == ' ') {
            words++;
        }
    }
    words++;

    printf("Total words: %d\n", words);

    return 0;
}
/*
Enter a string:i am poojitha
Total words: 3
*/
