#include <stdio.h>

int stringCompare(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1); 

    printf("Enter second string: ");
    scanf("%s", str2); 

    int result = stringCompare(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
/*
Enter first string: ooji
Enter second string: pooji
The strings are not equal.
*/
   
