1.STRLEN
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    int length = strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}

2.STRCPY
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}

3.STRCAT
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}

4.STRCMP
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    return 0;
}

5.STRCHR
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strchr(str, 'W');
    if (ptr != NULL) {
        printf("Found at position: %ld\n", ptr - str + 1);
    } else {
        printf("Character not found.\n");
    }
    return 0;
}

6.STRRCHR
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strrchr(str, 'o');

    if (ptr != NULL) {
        printf("Last occurrence of 'o' found at position: %ld\n", ptr - str + 1);
    } else {
        printf("Character not found.\n");
    }

    return 0;
}


7.STRSTR
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strstr(str, "World");
    if (ptr != NULL) {
        printf("Substring found at position: %ld\n", ptr - str + 1);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}

8. STRLWR
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    
    // Convert the string to lowercase
    strlwr(str);
    
    printf("String in lowercase: %s\n", str);
    
    return 0;
}

9.STRUPR
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    
    // Convert the string to uppercase
    strupr(str);
    
    printf("String in uppercase: %s\n", str);
    
    return 0;
}

10. STRTOK
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hi, I am Poojitha. What is your name?";
    const char delim[] = ",.!?"; 
    char *token;

    token = strtok(str, delim);
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delim);
    }

    return 0;
}

11.STRNCPY
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];
    strncpy(destination, source, 10);

    destination[10] = '\0';

    printf("Copied string: %s\n", destination);

    return 0;
}
12. STRNCAT
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    strncat(str1, str2, 3); // Concatenates the first 3 characters of str2
    printf("Concatenated string: %s\n", str1);
    return 0;
}

13.STRNCMP
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    int result = strncmp(str1, str2, 3); 
    if (result == 0) {
        printf("The strings are equal.\n");
    }else {
        printf("The strings are not equal.\n");
    }
    return 0;
}

14.STRSPN
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char charset[] = "Helo,!";
    int length = strspn(str, charset);
    printf("Length of initial substring: %d\n", length);
    return 0;
}

  
