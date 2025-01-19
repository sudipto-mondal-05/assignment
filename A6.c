// Assignment 6(1)

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int max = matrix[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    printf("Largest number in the matrix: %d\n", max);
    return 0;
}


//Assignment 6(2)

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &m, &n);
    int matrix[m][n], transpose[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Original matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// Assignment 6(3)

#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n], symmetric = 1; // in compilers 0 == false and 1 == true
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        printf("\n");
    }
    printf("The new matrix is: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");
    return 0;
}


// Assignment 6(4)

#include <stdio.h>
int main() {
    int n, trace = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
        
        trace += matrix[i][i];
    }
    printf("Trace of the matrix: %d\n", trace);
    return 0;
}


// Assignment 6(5)

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &m, &n);
    int matrix1[m][n], matrix2[m][n], sum;
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Sum of the matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum = matrix1[i][j] + matrix2[i][j];
             printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}


// Assignment 6(6)

#include <stdio.h>
int main() {
    int m, n, p;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter columns of second matrix: ");
    scanf("%d", &p);
    int matrix1[m][n], matrix2[n][p], product[m][p];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            product[i][j] = 0;
            for (int k = 0; k < n; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Product of the matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// Assignment 6 (7)

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    int triangle[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1; 
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; 
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%4d", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}


//Assignment 6(8)

#include <stdio.h>
int main() {
    printf("Enter the size the square matrix: ");
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
