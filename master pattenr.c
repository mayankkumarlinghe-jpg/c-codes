#include <stdio.h>

int main() {
    int n = 5, i, j;

    printf("\n1. Solid Rectangle\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            printf("* ");
        printf("\n");
    }

    printf("\n2. Hollow Rectangle\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\n3. Right Triangle\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }

    printf("\n4. Inverted Right Triangle\n");
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }

    printf("\n5. Left Aligned Triangle\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf("  ");
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }

    printf("\n6. Pyramid\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }

    printf("\n7. Inverted Pyramid\n");
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }

    printf("\n8. Diamond Pattern\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }

    printf("\n9. Number Triangle\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("%d ", j);
        printf("\n");
    }

    printf("\n10. Floyd’s Triangle\n");
    int num = 1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("%d ", num++);
        printf("\n");
    }

    printf("\n11. Binary Triangle\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    printf("\n12. Reverse Number Triangle\n");
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++)
            printf("%d ", j);
        printf("\n");
    }

    printf("\n13. Alphabet Triangle\n");
    for(i=1;i<=n;i++){
        char ch='A';
        for(j=1;j<=i;j++)
            printf("%c ", ch++);
        printf("\n");
    }

    printf("\n14. Same Row Number Pattern\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("%d ", i);
        printf("\n");
    }

    printf("\n15. Hourglass Pattern\n");
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
