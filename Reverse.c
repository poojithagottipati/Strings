#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int length = strlen(str);

    for (int i = 0;i<length/2;i++) {
        char temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }

    printf("Reverse of the string: %s\n", str);

    return 0;
}
/*
Enter a string: pooji
Reverse of the string: 
ijoop
*/
