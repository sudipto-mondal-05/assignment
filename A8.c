// 1.

#include <stdio.h>

float product(float a, int b) {
    return a * b;
}

int main() {
    float a, c;
    int b;

    printf("Enter a float number: ");
    scanf("%f", &a);

    printf("Enter an integer number: ");
    scanf("%d", &b);

    c = product(a, b);
    printf("Product: %f\n", c);

    return 0;
}


// 2.

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}


// 3I

#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, f;

    printf("Enter a number: ");
    scanf("%d", &n);

    f = fact(n);

    printf("Factorial of %d: %d\n", n, f);

    return 0;
}


// 3II

#include <stdio.h>

int fact(int a) {
    if (a == 1) {
        return a;
    } else {
        return a * fact(a - 1);
    }
}

int main() {
    int n, f;

    printf("Enter a number: ");
    scanf("%d", &n);

    f = fact(n);

    printf("Factorial of %d: %d\n", n, f);

    return 0;
}


// 4I

#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;
    printf("%d %d ", a, b);
    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n >= 2) {
        fibonacci(n);
    } else {
        printf("Enter a number greater than or equal to 2\n");
    }

    return 0;
}


// 4II

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}


// 5

#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0) return a;
    else return hcf(b, a % b);
}

int main() {
    int m, n, p;

    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    p = hcf(m, n);

    printf("HCF: %d\n", p);

    return 0;
}


// 6

#include <stdio.h>
#include <math.h>

void Quad(int a, int b, int c) {
    int d, x, y;

    d = (b * b) - (4 * a * c);

    if (d >= 0) {
        x = ((-b) + sqrt(d)) / (2 * a);
        y = ((-b) - sqrt(d)) / (2 * a);
        printf("The Real Roots Are: x = %d and y = %d\n", x, y);
    } else {
        printf("No Real Roots\n");
    }
}

int main() {
    int a, b, c;

    printf("Enter coefficients a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    Quad(a, b, c);

    return 0;
}
