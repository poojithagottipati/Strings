#include <stdio.h>

void firstOccurrence(char *str, char *ele) {
    int count = 0;
    printf("Occurrences of '%s' in the string: ", ele);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ele[0]) {
            count++;
            printf("%d\n", i);
            break;
        }
    }
    if (count > 0) {
        printf("The element is found.\n");
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

    firstOccurrence(str, el);

    return 0;
}
/*
Enter a string: pooji
Enter element to search: i
Occurrences of 'i' in the string: 4
The element is found.
*/
