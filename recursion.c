#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Global variables for some functions that need persistence
int global_count = 0;
long long global_binary = 0;
long long global_factor = 1;

// 1. Print numbers from 1 to n recursively
void printNatural(int n) {
    if (n < 1) return;
    printNatural(n - 1);
    printf("%d ", n);
}

// 2. Sum of natural numbers 1 to n
int sumNatural(int n) {
    if (n <= 0) return 0;
    return n + sumNatural(n - 1);
}

// 3. Factorial of a number
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// 4. Fibonacci series (returns nth fibonacci number)
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 5. Power: base^exponent
long long power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

// 6. Count digits in a number
int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

// 7. Sum of digits
int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

// 8. Reverse a number
int reverseNumber(int n) {
    static int rev = 0;
    if (n == 0) {
        int temp = rev;
        rev = 0;
        return temp;
    }
    rev = rev * 10 + n % 10;
    reverseNumber(n / 10);
    return rev;
}

// 9. Check if number is palindrome
int isPalindrome(int n) {
    return n == reverseNumber(n);
}

// 10. GCD using Euclidean algorithm (recursive)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 11. LCM using GCD
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

// 12. Check if prime
int isPrimeHelper(int n, int i) {
    if (i * i > n) return 1;
    if (n % i == 0) return 0;
    return isPrimeHelper(n, i + 1);
}

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    return isPrimeHelper(n, 5);
}

// 13. Print array elements recursively
void printArray(int arr[], int size, int index) {
    if (index >= size) return;
    printf("%d ", arr[index]);
    printArray(arr, size, index + 1);
}

// 14. Find maximum in array
int findMax(int arr[], int size, int index) {
    if (index == size - 1) return arr[index];
    int maxRest = findMax(arr, size, index + 1);
    return (arr[index] > maxRest) ? arr[index] : maxRest;
}

// 15. Find minimum in array
int findMin(int arr[], int size, int index) {
    if (index == size - 1) return arr[index];
    int minRest = findMin(arr, size, index + 1);
    return (arr[index] < minRest) ? arr[index] : minRest;
}

// 16. Binary search in sorted array
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) return mid;
    if (arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key);
    return binarySearch(arr, mid + 1, high, key);
}

// 17. Reverse a string recursively
void reverseString(char str[], int start, int end) {
    if (start >= end) return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

// 18. Check if string is palindrome
int isStringPalindrome(char str[], int start, int end) {
    if (start >= end) return 1;
    if (str[start] != str[end]) return 0;
    return isStringPalindrome(str, start + 1, end - 1);
}

// 19. Decimal to Binary conversion
void decimalToBinary(int n) {
    if (n > 1)
        decimalToBinary(n / 2);
    printf("%d", n % 2);
}

// 20. Print all permutations of a string (partial example - full would be very long)
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char str[], int l, int r) {
    if (l == r)
        printf("%s\n", str);
    else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i)); // backtrack
        }
    }
}

// 21. Tower of Hanoi
void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    towerOfHanoi(n - 1, aux, to, from);
}

// Main function with menu to demonstrate all recursive functions
int main() {
    int choice, n, a, b, num, index;
    char str[100];
    int arr[100];
    int size;

    printf("\n=== Recursion Examples in C - All in One Program ===\n\n");

    do {
        printf("\nChoose a recursive function to test:\n");
        printf("1.  Print 1 to N\n");
        printf("2.  Sum of 1 to N\n");
        printf("3.  Factorial\n");
        printf("4.  Fibonacci (nth term)\n");
        printf("5.  Power (base^exp)\n");
        printf("6.  Count digits\n");
        printf("7.  Sum of digits\n");
        printf("8.  Reverse number\n");
        printf("9.  Check palindrome number\n");
        printf("10. GCD of two numbers\n");
        printf("11. LCM of two numbers\n");
        printf("12. Check prime\n");
        printf("13. Print array elements\n");
        printf("14. Find maximum in array\n");
        printf("15. Find minimum in array\n");
        printf("16. Binary search\n");
        printf("17. Reverse string\n");
        printf("18. Check string palindrome\n");
        printf("19. Decimal to Binary\n");
        printf("20. Tower of Hanoi\n");
        printf("0.  Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter n: ");
                scanf("%d", &n);
                printf("Numbers 1 to %d: ", n);
                printNatural(n);
                printf("\n");
                break;

            case 2:
                printf("Enter n: ");
                scanf("%d", &n);
                printf("Sum 1 to %d = %d\n", n, sumNatural(n));
                break;

            case 3:
                printf("Enter n: ");
                scanf("%d", &n);
                printf("Factorial(%d) = %lld\n", n, factorial(n));
                break;

            case 4:
                printf("Enter n (for nth Fibonacci): ");
                scanf("%d", &n);
                printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%d %d", &a, &b);
                printf("%d^%d = %lld\n", a, b, power(a, b));
                break;

            case 6:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Number of digits = %d\n", countDigits(n));
                break;

            case 7:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Sum of digits = %d\n", sumDigits(n));
                break;

            case 8:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Reversed = %d\n", reverseNumber(n));
                break;

            case 9:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("%d is %s palindrome\n", n, isPalindrome(n) ? "a" : "not a");
                break;

            case 10:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
                break;

            case 11:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("LCM(%d, %d) = %d\n", a, b, lcm(a, b));
                break;

            case 12:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("%d is %s prime\n", n, isPrime(n) ? "" : "not");
                break;

            case 13:
                printf("Enter array size: ");
                scanf("%d", &size);
                printf("Enter %d elements: ", size);
                for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
                printf("Array: ");
                printArray(arr, size, 0);
                printf("\n");
                break;

            case 14:
                printf("Enter array size: ");
                scanf("%d", &size);
                printf("Enter %d elements: ", size);
                for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
                printf("Maximum = %d\n", findMax(arr, size, 0));
                break;

            case 15:
                printf("Enter array size: ");
                scanf("%d", &size);
                printf("Enter %d elements: ", size);
                for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
                printf("Minimum = %d\n", findMin(arr, size, 0));
                break;

            case 16:
                printf("Enter sorted array size: ");
                scanf("%d", &size);
                printf("Enter %d sorted elements: ", size);
                for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
                printf("Enter key to search: ");
                scanf("%d", &num);
                index = binarySearch(arr, 0, size - 1, num);
                if (index != -1)
                    printf("Found at index %d\n", index);
                else
                    printf("Not found\n");
                break;

            case 17:
                printf("Enter string: ");
                scanf("%s", str);
                reverseString(str, 0, strlen(str) - 1);
                printf("Reversed: %s\n", str);
                break;

            case 18:
                printf("Enter string: ");
                scanf("%s", str);
                printf("%s is %s palindrome\n", str,
                       isStringPalindrome(str, 0, strlen(str) - 1) ? "a" : "not a");
                break;

            case 19:
                printf("Enter decimal number: ");
                scanf("%d", &n);
                printf("Binary: ");
                if (n == 0) printf("0");
                else decimalToBinary(n);
                printf("\n");
                break;

            case 20:
                printf("Enter number of disks: ");
                scanf("%d", &n);
                printf("Tower of Hanoi solution:\n");
                towerOfHanoi(n, 'A', 'C', 'B');
                break;

            case 0:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
