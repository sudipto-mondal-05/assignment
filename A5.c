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
