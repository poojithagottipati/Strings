#include <stdio.h>
#include <string.h>

void findHighestFreq(char *arr) {
    int size = strlen(arr);
    int maxFreq = 0;
    char maxFreqChar;

    for (int i = 0; i < size; i++) {
        int count = 0;
        if (arr[i] == '\0') {
            continue; 
        }
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            maxFreqChar = arr[i];
        }
    }

    printf("The character with the highest frequency is '%c' with frequency %d\n", maxFreqChar, maxFreq);
}

int main() {
    char arr[] = "ppooojiitha";
    findHighestFreq(arr);

    return 0;
}
/*
output:
The character with the highest frequency is 'o' with frequency 3
*/
