
// 1.


// #include <stdio.h>

// int main() {
 	
// int M, N;
//  	printf("Enter the number of rows (M) and columns (N): ");
//  	scanf("%d %d", &M, &N);
    
//    	 int matrix[M][N];
//     	printf("Enter the elements of the matrix:\n");
//     for(int i = 0; i < M; i++) {
//         for(int j = 0; j < N; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     int largest = matrix[0][0];
//     for(int i = 0; i < M; i++) {
//         for(int j = 0; j < N; j++) {
//             if(matrix[i][j] > largest) {
//                 largest = matrix[i][j];
//             }
//         }
//     }

//     printf("The largest number in the matrix is: %d\n", largest);
//     return 0;
// }


// 2. 

// #include <stdio.h>

// int main() {
//     int M, N;
//     printf("Enter the number of rows (M) and columns (N): ");
//     scanf("%d %d", &M, &N);
    
//     int A[M][N], B[N][M];
//     printf("Enter the elements of the matrix A:\n");
//     for(int i = 0; i < M; i++) {
//         for(int j = 0; j < N; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }

//     for(int i = 0; i < M; i++) {
//         for(int j = 0; j < N; j++) {
//             B[j][i] = A[i][j];
//         }
//     }

//     printf("Transpose of matrix A is:\n");
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < M; j++) {
//             printf("%d ", B[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// 3.

// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter the order of the square matrix (N): ");
//     scanf("%d", &N);
    
//     int matrix[N][N];
//     printf("Enter the elements of the matrix:\n");
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < N; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     int isSymmetric = 1;
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < N; j++) {
//             if(matrix[i][j] != matrix[j][i]) {
//                 isSymmetric = 0;
//                 break;
//             }
//         }
//     }

//     if(isSymmetric) {
//         printf("The matrix is symmetric.\n");
//     } else {
//         printf("The matrix is not symmetric.\n");
//     }
//     return 0;
// }



// 4.

// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter the order of the square matrix (N): ");
//     scanf("%d", &N);
    
//     int matrix[N][N];
//     printf("Enter the elements of the matrix:\n");
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < N; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     int trace = 0;
//     for(int i = 0; i < N; i++) {
//         trace += matrix[i][i];
//     }

//     printf("The trace of the matrix is: %d\n", trace);
//     return 0;
// }



// 5

// #include <stdio.h>

// int main() {
//     int M, N;
//     printf("Enter the number of rows (M) and columns (N): ");
//     scanf("%d %d", &M, &N);
    
//     int A[M][N], B[M][N], C[M][N];
//     printf("Enter the elements of matrix A:\n");
//     for(int i = 0; i < M; i++) {
//         for(int j = 0; j < N; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }

//     printf("Enter the elements of matrix B:\n");
//     for(int i = 0; i < M; i++) {
//         for(int j = 0; j < N; j++) {
//             scanf("%d", &B[i][j]);
//         }
//     }

//     for(int i = 0; i < M; i++) {
//         for(int j = 0; j < N; j++) {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }

//     printf("The sum of matrices A and B is:\n");
//     for(int i = 0; i < M; i++) {
//         for(int j = 0; j < N; j++) {
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// 6.

// #include <stdio.h>

// int main() {
//     int M, N, P;
//     printf("Enter the number of rows of matrix A (M) and columns of matrix A (N): ");
//     scanf("%d %d", &M, &N);
//     printf("Enter the number of columns of matrix B (P): ");
//     scanf("%d", &P);

//     int A[M][N], B[N][P], C[M][P];
//     printf("Enter the elements of matrix A:\n");
//     for(int i = 0; i < M; i++) {
//         for(int j = 0; j < N; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }

//     printf("Enter the elements of matrix B:\n");
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < P; j++) {
//             scanf("%d", &B[i][j]);
//         }
//     }

//     for(int i = 0; i < M; i++) {
//         for(int j = 0; j < P; j++) {
//             C[i][j] = 0;
//             for(int k = 0; k < N; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     printf("The product of matrices A and B is:\n");
//     for(int i = 0; i < M; i++) {
//         for(int j = 0; j < P; j++) {
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// 7.

#include <stdio.h>

int main() {
    int rows, coef = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } 
            else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%2d", coef);  
        }
        printf("\n");
    }

    return 0;
}




// 8.

// #include <stdio.h>

// int main() {
//     int m;
//     printf("Enter the size of the square matrix: ");
//     scanf("%d", &m);

//     int arr[m][m];
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < m; j++) {
//             if(i == j) {
//                 arr[i][j] = 1;
//             } else {
//                 arr[i][j] = 0;
//             }
//         }
//     }

//     printf("The matrix is:\n");
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < m; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



