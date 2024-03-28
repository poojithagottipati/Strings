#include <stdio.h>
#include <string.h>

void removeRepeated(char arr[]) {
    int size=0;
    while(arr[size]!='\0'){
        size++;
    }

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size;) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                (size)--;
            } else {
                j++;
            }
        }
    }
}

int main() {
    char arr[100];
    printf("Enter the string:");
    fgets(arr, sizeof(arr), stdin);
    
    removeRepeated(arr);

    printf("After removing repeated characters:\n");
 
        printf("%s", arr);

    printf("\n");

    return 0;
}
