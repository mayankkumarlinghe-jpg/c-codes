#include <stdio.h>

int main() {
    int i, j, k, n;
    int choice;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\nPATTERN MENU\n");
    printf("1. Square Star\n");
    printf("2. Right Triangle Star\n");
    printf("3. Inverted Triangle Star\n");
    printf("4. Pyramid Star\n");
    printf("5. Inverted Pyramid\n");
    printf("6. Diamond Star\n");
    printf("7. Number Triangle\n");
    printf("8. Floyd's Triangle\n");
    printf("9. Pascal Triangle\n");
    printf("10. Hollow Square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

    case 1: // Square
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++)
                printf("* ");
            printf("\n");
        }
        break;

    case 2: // Right Triangle
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= i; j++)
                printf("* ");
            printf("\n");
        }
        break;

    case 3: // Inverted Triangle
        for(i = n; i >= 1; i--) {
            for(j = 1; j <= i; j++)
                printf("* ");
            printf("\n");
        }
        break;

    case 4: // Pyramid
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n - i; j++)
                printf(" ");
            for(j = 1; j <= 2*i - 1; j++)
                printf("*");
            printf("\n");
        }
        break;

    case 5: // Inverted Pyramid
        for(i = n; i >= 1; i--) {
            for(j = 1; j <= n - i; j++)
                printf(" ");
            for(j = 1; j <= 2*i - 1; j++)
                printf("*");
            printf("\n");
        }
        break;

    case 6: // Diamond
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n - i; j++)
                printf(" ");
            for(j = 1; j <= 2*i - 1; j++)
                printf("*");
            printf("\n");
        }
        for(i = n - 1; i >= 1; i--) {
            for(j = 1; j <= n - i; j++)
                printf(" ");
            for(j = 1; j <= 2*i - 1; j++)
                printf("*");
            printf("\n");
        }
        break;

    case 7: // Number Triangle
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= i; j++)
                printf("%d ", j);
            printf("\n");
        }
        break;

    case 8: // Floyd's Triangle
        k = 1;
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= i; j++)
                printf("%d ", k++);
            printf("\n");
        }
        break;

    case 9: // Pascal Triangle
        for(i = 0; i < n; i++) {
            int val = 1;
            for(j = 0; j <= i; j++) {
                printf("%d ", val);
                val = val * (i - j) / (j + 1);
            }
            printf("\n");
        }
        break;

    case 10: // Hollow Square
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                if(i == 1 || i == n || j == 1 || j == n)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
        break;

    default:
        printf("Invalid Choice");
    }

    return 0;
}
