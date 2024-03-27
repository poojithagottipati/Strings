#include <stdio.h>

void stringConcatenate(char *str1, char *str2) {
  
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    //*str1 = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1); 

    printf("Enter second string: ");
    scanf("%s", str2); 

    stringConcatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
/*
Enter first string: poojitha
Enter second string: gottipati
Concatenated string: poojithagottipati
*/
