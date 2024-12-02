// // Assignment 5(1)

// #include <stdio.h>
// int main(){
//     int arr[10];
//     int *ptr = arr;
//     printf("[ ");
//     for (int i = 0; i < 10; i++){
//         *(ptr + i) = i + 1;
//         printf("%d ", *(ptr + i));
//     }
//     printf("]\n");

//     return 0;
// }


// // Assignment 5(2)

// #include <stdio.h>
// int main(){
//     int arr[10];
//     int *ptr = arr;

//     printf("[ ");
//     for (int i = 0; i < 10; i++){
//         *(ptr + i) = i + 1;
//         printf("%d ", *(ptr + i) * *(ptr + i)); 
//     }
//     printf("]\n");

//     return 0;
// }


// Assignment 5(3)
// 
// #include <stdio.h>
// int main(){
//     int arr[5];
//     int *ptr = arr;

//     printf("Enter 5 values for the array: \n");

//     for (int i = 0; i < 5; i++){
//         scanf("%d", (ptr + i));    
//     }

//     printf("[ ");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", (*(ptr + i)) * (*(ptr + i))); 
//     }
//         printf("]\n");

//     return 0;
// }


// Assignment 5(4)

// #include <stdio.h>
// int main() {
//     int n, *ptr;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);         
//     int arr[n];
//     ptr = &arr[0];

//     printf("Enter the %d elements of the array: \n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", ptr+i );   
//     }

//     int max = *ptr;
//     for (int i = 1; i < n; i++) {  
//         if (*(ptr + i) > max) {
//             max = *(ptr + i);
//         }
//     }

//     printf("The largest element is: %d\n", max);

//     return 0;
// }


// Assignment 5(5)

// #include <stdio.h>
// int main() {
//     int n, *ptr;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);         
//     int arr[n];
//     ptr = &arr[0];

//     printf("Enter the %d elements of the array: \n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", ptr+i );    
//     }

//     int *p_max = ptr;
//     for (int i = 1; i < n; i++) {   
//         if (*(ptr + i) > *p_max) {
//             p_max = (ptr + i);
//         }
//     }
//     printf("The largest element is: %d\n", *p_max);

//     int *p_min = ptr;
//     for (int i = 1; i < n; i++) {   
//         if (*(ptr + i) < *p_min) {
//             p_min = (ptr + i);
//         }
//     }
//     printf("The smallest element is: %d\n", *p_min);

//     return 0;
// }


// Assignment 5(6)

// #include <stdio.h>
// int main() {
//     int n, even = 0, odd = 0;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
    
//     int arr[n];
//     int *ptr = arr;
//     printf("Enter the elements:\n");
    
//     for (int i = 0; i < n; i++) {
//         scanf("%d", (ptr + i));
//         if (*(ptr + i) % 2 == 0) 
//             even++;
//         else
//             odd++;
//     }

//     printf("Even numbers: %d, Odd numbers: %d\n", even, odd);
//     return 0;
// }


//Assignment 5(7)

// #include <stdio.h>
// int main(){
//     int num, sum = 0;
//     int *total = &sum;
//     printf("Enter the size of the array: ");
//     scanf("%d", &num);
//     int *n = &num;
//     int arr[*n];
//     int *ptr = &arr[0];
    
//     printf("Enter the elements of the array:\n ");
//     for (int i = 0; i < *n; i++) {
//         scanf("%d", (ptr + i));
//         *total = *total + *(ptr + i);
//     }
//     printf("The sum of elements of the array are : %d", *total);
//     return 0;
// }


//Assignmnet 5(8)

// #include <stdio.h>
// int main() {
//     int n, val, coun = -1;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     int *ptr = arr;
//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", (ptr + i));
//     }
//     printf("Enter the key to search: ");
//     scanf("%d", &val);
//     for (int i = 0; i < n; i++) {
//         if (*(ptr + i) == val) {
//             coun = i + 1;
//             break;
//         }
//     }
//     if (coun != -1)
//         printf("Element found at position: %d\n", coun);
//     else
//         printf("Element not found\n");
//     return 0;
// }


//Assignment 5(9)

// #include <stdio.h>
// void sort(int *arr, int n) {  
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (*(arr + i) > *(arr + j)) {
//                 int temp = *(arr + i);
//                 *(arr + i) = *(arr + j);
//                 *(arr + j) = temp;
//             }
//         }
//     }
// }
// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     int *ptr = arr;
//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", (ptr + i));
//     }
//     sort(ptr, n);
//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", *(ptr + i));
//     }
//     return 0;
// }


// Assignment 5(10)

// #include <stdio.h>
// void reverse(int *arr, int n) {
//     for (int i = 0; i < n / 2; i++) {
//         int temp = *(arr + i);
//         *(arr + i) = *(arr + n - i - 1);
//         *(arr + n - i - 1) = temp;
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     int *ptr = arr;

//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", (ptr + i));
//     }

//     printf("Original array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", *(ptr + i));
//     }
//     printf("\n");

//     reverse(ptr, n);

//     printf("Reversed array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", *(ptr + i));
//     }
//     return 0;
// }


// Assignment 5(11)

// #include <stdio.h>
// void convertToBinary(int n, int *binary, int *size) {
//     int i = 0;
//     while (n > 0) {
//         *(binary + i) = n % 2;
//         n /= 2;
//         i++;
//     }
//     *size = i;
// }
// int main() {
//     int n;
//     printf("Enter a positive decimal integer: ");
//     scanf("%d", &n);
//     int binary[32], size;
//     int *ptr = binary;

//     convertToBinary(n, ptr, &size);
    
//     printf("Binary representation: ");
//     for (int i = size - 1; i >= 0; i--) {
//         printf("%d", *(ptr + i));
//     }
//     return 0;
// }


// Assignment 5(12)    

// #include <stdio.h>
// int main() {
//     int arr1[5], arr2[5], result[5];
//     int *ptr1 = arr1, *ptr2 = arr2, *res = result;

//     printf("Enter 5 elements for the first array:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", (ptr1 + i));
//     }

//     printf("Enter 5 elements for the second array:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", (ptr2 + i));
//     }

//     printf("Resultant array: ");
//     for (int i = 0; i < 5; i++) {
//         *(res + i) = *(ptr1 + i) + *(ptr2 + i);
//         printf("%d ", *(res + i));
//     }
//     return 0;
// }


// Assignment 5(13)

// #include <stdio.h>
// int main() {
//     int arr[10];
//     int *ptr = arr;

//     printf("Enter 10 elements:\n");
//     for (int i = 0; i < 10; i++) {
//         scanf("%d", (ptr + i));
//     }

//     for (int i = 0; i < 10; i += 2) {
//         int temp = *(ptr + i);
//         *(ptr + i) = *(ptr + i + 1);
//         *(ptr + i + 1) = temp;
//     }

//     printf("Swapped array: ");
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", *(ptr + i));
//     }
//     return 0;
// }


// Assignment 5(14)

// #include <stdio.h>
// int main() {
//     int n, pos, value;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n + 1];
//     int *ptr = arr;
//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", (ptr + i));
//     }
//     printf("Enter the position and value to insert: \n");
//     scanf("%d %d", &pos, &value);
//     for (int i = n; i >= pos; i--) {
//         *(ptr + i) = *(ptr + i - 1);
//     }
//     *(ptr + pos - 1) = value;
//     printf("Updated array: ");
//     for (int i = 0; i <= n; i++) {
//         printf("%d ", *(ptr + i));
//     }
//     return 0;
// }


// Assignment 5(15)

// #include <stdio.h>
// int main() {
//     int n, pos;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     int *ptr = arr;
//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", (ptr + i));
//     }
//     printf("Enter the position to delete: ");
//     scanf("%d", &pos);
//     for (int i = pos - 1; i < n - 1; i++) {
//         *(ptr + i) = *(ptr + i + 1);
//     }
//     printf("Updated array: ");
//     for (int i = 0; i < n - 1; i++) {
//         printf("%d ", *(ptr + i));
//     }
//     return 0;
// }


// Assignment 5(16)

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     int *ptr = arr;
//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", (ptr + i));
//     }
//     int newSize = 0;
//     for (int i = 0; i < n; i++) {
//         int duplicate = 0;
//         for (int j = 0; j < newSize; j++) {
//             if (*(ptr + j) == *(ptr + i)) {
//                 duplicate = 1;
//                 break;
//             }
//         }
//         if (!duplicate) {
//             *(ptr + newSize) = *(ptr + i);
//             newSize++;
//         }
//     }
//     printf("Array after removing duplicates: ");
//     for (int i = 0; i < newSize; i++) {
//         printf("%d ", *(ptr + i));
//     }
//     return 0;
// }

