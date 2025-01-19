// 1 

#include <stdio.h>

int main() {
    char str[100];  
    int length = 0;
    char *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    ptr = str; 

    while (*ptr != '\0' && *ptr != '\n') {
        length++;
        ptr++;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}

// 2 

#include <stdio.h>

int main(){
    char str1[100];
    char str2[100];
    char *ptr;
    ptr = str1;

    printf("Enter the string: ");
    fgets(str1, sizeof(str1), stdin);
    
    int i = 0;
    while(*ptr != '\0'){
        str2[i] = str1[i];
        i++;
        ptr++;
    } 
    str2[i] = '\0';
    printf("The copied strinh is: %s", str2);
    return 0;
}

// 3 
 
#include <stdio.h>

int main(){
    char str1[100];
    char str2[100];

    printf("Enter the 1st string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the 2nd string: ");
    fgets(str2, sizeof(str2), stdin);

    int count = 0, i = 0;

    while ( str1[i] != '\0' || str2[i] != '\0' ){
        if(str1[i] != str2[i])
            count++;
        i++;
    }

    if (count == 0){
        printf("Strings are Equal.");
    }
    else{
        printf("Strings are not Equal.");
    }
    
    return 0;
}

// 4 

#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';

    printf("Concatenated String: %s\n", result);

    return 0;
}

// 5 

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

// 6 

#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int length = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }

    reversed[length] = '\0';

    printf("Reversed String: %s\n", reversed);

    return 0;
}

// 7

#include <stdio.h>

int main() {
    char line[200];
    int i = 0, charCount = 0, wordCount = 0;

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    while (line[i] != '\0') {
        if (line[i] != '\n') {
            charCount++;
        }

        if ((line[i] != ' ' && line[i] != '\n') &&
            (line[i + 1] == ' ' || line[i + 1] == '\n' || line[i + 1] == '\0')) {
            wordCount++;
        }

        i++;
    }

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);

    return 0;
}

// 8

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }

        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}