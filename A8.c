// 1.

// #include <stdio.h>

// float product(float num1, int num2) {
//     return num1 * num2;
// }

// int main() {
//     float num1;
//     int num2;
    
//     printf("Enter a float number: ");
//     scanf("%f", &num1);
    
//     printf("Enter an integer number: ");
//     scanf("%d", &num2);
    
//     float result = product(num1, num2);
//     printf("Product: %.2f\n", result);
    
//     return 0;
// }



// 2.

// #include <stdio.h>

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x, y;
    
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);
    
//     printf("Before swapping: x = %d, y = %d\n", x, y);
    
//     swap(&x, &y);
    
//     printf("After swapping: x = %d, y = %d\n", x, y);
    
//     return 0;
// }


// 3I.

// #include <stdio.h>

// int factorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     printf("Factorial of %d: %d\n", num, factorial(num));
    
//     return 0;
// }

// 3II.

// #include <stdio.h>

// int factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     printf("Factorial of %d: %d\n", num, factorial(num));
    
//     return 0;
// }

// 4I

// #include <stdio.h>

// void fibonacci(int n) {
//     int a = 0, b = 1, c;
//     printf("%d %d ", a, b);
//     for (int i = 2; i < n; i++) {
//         c = a + b;
//         printf("%d ", c);
//         a = b;
//         b = c;
//     }
//     printf("\n");
// }

// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
    
//     if (n >= 2) {
//         fibonacci(n);
//     } else {
//         printf("Enter a number greater than or equal to 2\n");
//     }
    
//     return 0;
// }

// 4II

// #include <stdio.h>

// int fibonacci(int n) {
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
    
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n");
    
//     return 0;
// }

// 5.

// #include <stdio.h>

// int hcf(int a, int b) {
//     if (b == 0)
//         return a;
//     else
//         return hcf(b, a % b);
// }

// int main() {
//     int num1, num2;
    
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
    
//     printf("HCF: %d\n", hcf(num1, num2));
    
//     return 0;
// }

// 6.

// #include <stdio.h>
// #include <math.h>

// void Quad(float a, float b, float c) {
//     float discriminant = b * b - 4 * a * c;
    
//     if (discriminant > 0) {
//         float root1 = (-b + sqrt(discriminant)) / (2 * a);
//         float root2 = (-b - sqrt(discriminant)) / (2 * a);
//         printf("Real and Distinct Roots: %.2f and %.2f\n", root1, root2);
//     } else if (discriminant == 0) {
//         float root = -b / (2 * a);
//         printf("Real and Equal Root: %.2f\n", root);
//     } else {
//         printf("No Real Roots.\n");
//     }
// }

// int main() {
//     float a, b, c;
    
//     printf("Enter coefficients a, b, and c: ");
//     scanf("%f %f %f", &a, &b, &c);
    
//     Quad(a, b, c);
    
//     return 0;
// }

