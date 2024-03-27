#include <stdio.h>

void copyString(char *str1, char *str2) {
    while (*str1 != '\0') {
        *str2 = *str1;
        str1++;
        str2++;
    }
    
    *str2 = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter string 1: ");
    scanf("%s", str1); 
    
    copyString(str1, str2);

    printf("string 1: %s\n", str1);
    printf("string 2: %s\n", str2);

    return 0;
}
/*
Enter string 1: poojitha
string 1: poojitha
string 2: poojitha
*/
