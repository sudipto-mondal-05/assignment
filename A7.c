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

    printf("Enter you string: ");
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

    printf("Enter you 1st string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter you 2nd string: ");
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