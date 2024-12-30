//1.

#include <stdio.h>
#include <string.h>

struct cricket {
    char player_name[50];
    char team_name[50];
    float batting_average;
};

int main() {
    struct cricket players[5];
    int i, highest_index = 0;

    
    printf("Enter details of 5 players:\n");

    for (i = 0; i < 5; i++) {

        printf("\nPlayer %d:\n", i + 1);
        printf("Enter player name: ");
        scanf(" %[^\n]", players[i].player_name);
        printf("Enter team name: ");
        scanf(" %[^\n]", players[i].team_name);
        printf("Enter batting average: ");
        scanf("%f", &players[i].batting_average);
    }

    
    for (i = 1; i < 5; i++) {
        if (players[i].batting_average > players[highest_index].batting_average) {
            highest_index = i;
        }
    }

    
    printf("\nPlayer with the highest batting average:\n");
    printf("Name: %s\n", players[highest_index].player_name);
    printf("Team: %s\n", players[highest_index].team_name);
    printf("Batting Average: %.2f\n", players[highest_index].batting_average);

    return 0;
}


//2.

#include <stdio.h>
#include <string.h>

// Define the structure for a student
struct student {
    int roll_no;
    char name[50];
    float total_marks;
};

int main() {
    int n, i;
    struct student students[150]; // Array to store details of up to 150 students

    // Input the number of students
    printf("Enter the number of students (not more than 150): ");
    scanf("%d", &n);

    if (n > 150) {
        printf("Error: Number of students cannot exceed 150.\n");
        return 1; // Exit the program
    }

    // Read details of each student
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read name with spaces
        printf("Total Marks: ");
        scanf("%f", &students[i].total_marks);
    }

    // Print list of students with marks >= 75
    printf("\nList of students who scored 75 marks and above:\n");
    printf("Roll No.\tName\t\tTotal Marks\n");
    printf("-------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        if (students[i].total_marks >= 75) {
            printf("%d\t\t%s\t\t%.2f\n", students[i].roll_no, students[i].name, students[i].total_marks);
        }
    }

    return 0;
}


//3.

#include <stdio.h>
#include <string.h>

// Define the structure for a book
struct book {
    char name[100];
    int id;
    float price;
    char subject[50];
};

// Function prototypes
void display_books_in_price_range(struct book books[], int n, float min_price, float max_price);
void display_books_by_subject(struct book books[], int n, char subject[]);

int main() {
    int n, i;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct book books[n]; // Array to store details of 'n' books

    // Input details for each book
    for (i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", books[i].name); // Read name with spaces
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Subject: ");
        scanf(" %[^\n]", books[i].subject); // Read subject with spaces
    }

    // Search by price range
    float min_price, max_price;
    printf("\nEnter the minimum price: ");
    scanf("%f", &min_price);
    printf("Enter the maximum price: ");
    scanf("%f", &max_price);
    printf("\nBooks in the price range %.2f to %.2f:\n", min_price, max_price);
    display_books_in_price_range(books, n, min_price, max_price);

    // Search by subject
    char search_subject[50];
    printf("\nEnter the subject to search for: ");
    scanf(" %[^\n]", search_subject);
    printf("\nBooks in the subject '%s':\n", search_subject);
    display_books_by_subject(books, n, search_subject);

    return 0;
}

// Function to display books in a given price range
void display_books_in_price_range(struct book books[], int n, float min_price, float max_price) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (books[i].price >= min_price && books[i].price <= max_price) {
            printf("Name: %s, ID: %d, Price: %.2f, Subject: %s\n", books[i].name, books[i].id, books[i].price, books[i].subject);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found in the given price range.\n");
    }
}

// Function to display books by a specific subject
void display_books_by_subject(struct book books[], int n, char subject[]) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].subject, subject) == 0) {
            printf("Name: %s, ID: %d, Price: %.2f, Subject: %s\n", books[i].name, books[i].id, books[i].price, books[i].subject);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found for the subject '%s'.\n", subject);
    }
}

//4.

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int character_count = 0;

    // Get the filename from the user
    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file exists
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read characters one by one and count them
    while ((ch = fgetc(file)) != EOF) {
        character_count++;
    }

    // Close the file
    fclose(file);

    // Display the total number of characters
    printf("Total number of characters in the file: %d\n", character_count);

    return 0;
}

//5.

#include <stdio.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourceFilename[100], targetFilename[100];
    char ch;

    // Get the source file name
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFilename);

    // Get the target file name
    printf("Enter the name of the target file: ");
    scanf("%s", targetFilename);

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", sourceFilename);
        return 1;
    }

    // Open the target file in write mode
    targetFile = fopen(targetFilename, "w");
    if (targetFile == NULL) {
        printf("Error: Could not open or create target file %s\n", targetFilename);
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

    printf("Contents copied successfully from %s to %s\n", sourceFilename, targetFilename);

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



