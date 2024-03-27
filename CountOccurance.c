#include <stdio.h>

void countOccurrence(char *str, char *ele) {
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ele[0]) {
            count++;
         
        }
    }
    if (count > 0) {
        printf("No of Occurences: %d.\n", count);
    } else {
        printf("Not found.\n");
    }
}

int main() {
    char str[100];
    char el[10];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter element to search: ");
    scanf("%s", el);

    countOccurrence(str, el);

    return 0;
}
/*
Enter a string: poojitha
Enter element to search: i
No of Occurences: 1.
*/
