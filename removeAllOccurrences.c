#include <stdio.h>
#include <string.h>

void removeAllOccurrences(char str[], int *size, char Ele) {
    int newSize = 0;
    for (int i = 0; i < *size; ++i) {
        if (str[i] != Ele) {
            str[newSize] = str[i];
            newSize++;
        }
    }
    *size = newSize;
}

int main() {
    int size;
    printf("Enter the size of the string: ");
    scanf("%d", &size);

    char arr[size];
    printf("Enter string values:\n");
    for (int i = 0; i < size; ++i) {
        scanf(" %c", &arr[i]); // Reading single characters correctly
    }

    char Ele;
    printf("Enter the element to remove: ");
    scanf(" %c", &Ele); // Reading single character correctly

    remove
      AllOccurrences(arr, &size, Ele);

    printf("string after deleting duplicates:\n");
    for (int i = 0; i < size; ++i) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}
