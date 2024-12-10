// 1.

#include <stdio.h>
int main() {
    char str[200];
    int length = 0;
    printf("Enter a string: ");
    gets(str); 
    while (str[length] != '\0') {
        length++; 
    }
    printf("Length of the string: %d\n", length);
    return 0;
}

// 2.

// #include <stdio.h>

// int main() {
//     char str1[100], str2[100];
//     int i = 0;

//     printf("Enter a string: ");
//     scanf("%[^\n]s", str1);

//     while (str1[i] != '\0') {
//         str2[i] = str1[i];
//         i++;
//     }
//     str2[i] = '\0';

//     printf("Copied string: %s\n", str2);
//     return 0;
// }

// 3.

// #include <stdio.h>

// int main() {
//     char str1[100], str2[100];
//     int i = 0, isEqual = 1;

//     printf("Enter the first string: ");
//     scanf("%s", str1);
//     printf("Enter the second string: ");
//     scanf("%s", str2);

//     while (str1[i] != '\0' || str2[i] != '\0') {
//         if (str1[i] != str2[i]) {
//             isEqual = 0;
//             break;
//         }
//         i++;
//     }

//     if (isEqual) {
//         printf("Strings are equal.\n");
//     } else {
//         printf("Strings are not equal.\n");
//     }

//     return 0;
// }

// 4.

// #include <stdio.h>

// int main() {
//     char str1[100], str2[100];
//     int i = 0, j = 0;

//     printf("Enter the first string: ");
//     scanf("%s", str1);
//     printf("Enter the second string: ");
//     scanf("%s", str2);

//     while (str1[i] != '\0') {
//         i++;
//     }

//     while (str2[j] != '\0') {
//         str1[i] = str2[j];
//         i++;
//         j++;
//     }
//     str1[i] = '\0';

//     printf("Concatenated string: %s\n", str1);
//     return 0;
// }

// 5.

// #include <stdio.h>

// int main() {
//     char str[100];
//     int length = 0, isPalindrome = 1;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     while (str[length] != '\0') {
//         length++;
//     }

//     for (int i = 0; i < length / 2; i++) {
//         if (str[i] != str[length - i - 1]) {
//             isPalindrome = 0;
//             break;
//         }
//     }

//     if (isPalindrome) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is not a palindrome.\n");
//     }

//     return 0;
// }

// 6.

// #include <stdio.h>

// int main() {
//     char str[100];
//     int length = 0;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     while (str[length] != '\0') {
//         length++;
//     }

//     printf("Reversed string: ");
//     for (int i = length - 1; i >= 0; i--) {
//         printf("%c", str[i]);
//     }
//     printf("\n");

//     return 0;
// }

// 7.

// #include <stdio.h>

// int main() {
//     char str[200];
//     int words = 1, characters = 0;

//     printf("Enter a line of text: ");
//     scanf(" %[^\n]s", str);

//     for (int i = 0; str[i] != '\0'; i++) {
//         characters++;
//         if (str[i] == ' ') {
//             words++;
//         }
//     }

//     printf("Number of words: %d\n", words);
//     printf("Number of characters: %d\n", characters);
//     return 0;
// }

// 8. 

// #include <stdio.h>

// int main() {
//     char str[100];
//     int vowels = 0, consonants = 0;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     for (int i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//                 vowels++;
//             } else {
//                 consonants++;
//             }
//         }
//     }

//     printf("Number of vowels: %d\n", vowels);
//     printf("Number of consonants: %d\n", consonants);
//     return 0;


//YOUR MOM IS GAY.

//DARK HUMOUR IS LIKE YOUR MOM, EVERYBODY GETS IT NOWADAYS.