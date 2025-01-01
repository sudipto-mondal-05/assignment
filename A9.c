//1.

#include <stdio.h>
#include <string.h>

struct cricket {
    char player[50];
    char team[50];
    float avg;
};

int main() {
    struct cricket players[5];
    int i, p = 0;

    
    printf("Enter details of 5 players:\n");

    for (i = 0; i < 5; i++) {

        printf("\nPlayer %d:\n", i + 1);
        printf("Enter player name: ");
        scanf(" %[^\n]", players[i].player);
        printf("Enter team name: ");
        scanf(" %[^\n]", players[i].team);
        printf("Enter batting average: ");
        scanf("%f", &players[i].avg);
    }

    
    for (i = 1; i < 5; i++) {
        if (players[i].avg > players[p].avg) {
            p = i;
        }
    }

    
    printf("\nPlayer with the highest batting average:\n");
    printf("Name: %s\n", players[p].player);
    printf("Team: %s\n", players[p].team);
    printf("Batting Average: %.2f\n", players[p].avg);

    return 0;
}


//2.

#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    struct student students[150];

    printf("Enter the number of students (not more than 150): ");
    scanf("%d", &n);

    if (n > 150) {
        printf("Number of students cannot exceed 150.\n");
        return 1;
    }


    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Total Marks: ");
        scanf("%f", &students[i].marks);
    }


    printf("\n\nList of students who scored 75 marks and above:\n\n");
    printf("Roll No.\tName\t\tTotal Marks\n");
    printf("-------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        if (students[i].marks >= 75) {
            printf("%d\t\t%s\t\t%.2f\n", students[i].roll, students[i].name, students[i].marks);
        }
    }

    printf("-------------------------------------------------\n");


    return 0;
}


//3.

#include <stdio.h>
#include <string.h>


struct books {
    char name[100];
    int id;
    float price;
    char subject[50];
};


void price_range(struct books BOOKS[], int n, float min, float max);
void by_subject(struct books BOOKS[], int n, char subject[]);

int main() {
    int n, i;
    printf("Enter the number of BOOKS: ");
    scanf("%d", &n);

    struct books BOOKS[n]; 

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details for books %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", BOOKS[i].name); 
        printf("ID: ");
        scanf("%d", &BOOKS[i].id);
        printf("Price: ");
        scanf("%f", &BOOKS[i].price);
        printf("Subject: ");
        scanf(" %[^\n]", BOOKS[i].subject); 
    }

    
    float min, max;
    printf("\nEnter the minimum price: ");
    scanf("%f", &min);
    printf("Enter the maximum price: ");
    scanf("%f", &max);
    printf("\nBOOKS in the price range %f to %f:\n", min, max);
    price_range(BOOKS, n, min, max);

  
    char search_subject[50];
    printf("\nEnter the subject to search for: ");
    scanf(" %[^\n]", search_subject);
    printf("\nBOOKS in the subject '%s':\n", search_subject);
    by_subject(BOOKS, n, search_subject);

    return 0;
}


void price_range(struct books BOOKS[], int n, float min, float max) {
    int f = 0;
    for (int i = 0; i < n; i++) {
        if (BOOKS[i].price >= min && BOOKS[i].price <= max) {
            printf("Name: %s, ID: %d, Price: %f, Subject: %s\n", BOOKS[i].name, BOOKS[i].id, BOOKS[i].price, BOOKS[i].subject);
            f = 1;
        }
    }
    if (!f) {
        printf("No BOOKS found in the given price range.\n");
    }
}


void by_subject(struct books BOOKS[], int n, char subject[]) {
    int f = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(BOOKS[i].subject, subject) == 0) {
            printf("Name: %s, ID: %d, Price: %f, Subject: %s\n", BOOKS[i].name, BOOKS[i].id, BOOKS[i].price, BOOKS[i].subject);
            f = 1;
        }
    }
    if (!f) {
        printf("No BOOKS on the subject '%s'.\n", subject);
    }
}


//4.

#include <stdio.h>

int main() {

    FILE *fptr;
    char chh[100];
    char c[105];
    char ch;
    int n = 0;

    printf("Enter the name of the text file without adding extension: ");
    scanf("%s", chh);

    sprintf(c, "%s.txt", chh);

    fptr = fopen(c, "r");

    if (fptr == NULL) {
        printf("No Such File Exists.");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        n++;
    }

    fclose(fptr);

    printf("Total number of characters in the file: %d\n", n);

    return 0;
}


//5.

#include <stdio.h>

int main() {
    FILE *src, *trgt;
    char a[100], b[100], xx[105], yy[105];
    char ch;

    printf("Enter the name of the source text file (without extension): ");
    scanf("%s", a);

    printf("Enter the name of the target text file (without extension): ");
    scanf("%s", b);

    sprintf(xx, "%s.txt", a);

    sprintf(yy, "%s.txt", b);


    src = fopen(xx, "r");
    if (src == NULL) {
        printf("No Such File Exists.");
        return 1;
    }

    trgt = fopen(yy, "w");
    if (trgt == NULL) {
        printf("No Such File Exists.");
        fclose(src); 
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, trgt);
    }

    fclose(src);
    fclose(trgt);

    printf("Contents copied successfully from %s to %s\n", a, b);

    return 0;
}

//6.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *sourceFile, *targetFile;
    char ch;

    // Check if correct number of arguments are provided
    if (argc != 3) {
        printf("Usage: %s <source_file> <target_file>\n", argv[0]);
        return 1;
    }

    // Open the source file in read mode
    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", argv[1]);
        return 1;
    }

    // Open the target file in write mode
    targetFile = fopen(argv[2], "w");
    if (targetFile == NULL) {
        printf("Error: Could not open or create target file %s\n", argv[2]);
        fclose(sourceFile); // Close the source file
        return 1;
    }

    // Copy content from source to target file character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(targetFile);

    printf("Contents copied successfully from %s to %s\n", argv[1], argv[2]);

    return 0;
}



