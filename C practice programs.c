#include<stdio.h>
void modify(int[]);
int main() {
    int x[5];
    int n[5] = {5, 4, 3, 2, 1};
    modify(n);
    for (int i = 0; i < 5; i++) {
        printf("%d ", n[i]);
    }
    return 0;
}
void modify(int n[]) {
    for (int i = 0; i < 5; i++) {
        n[i] *= 3;
    }
}
#include<stdio.h>
void swap(int*, int*);
int main(){
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },i;
	for (i = 0; i < 9; i += 2)
		swap(&a[i], &a[i + 1]);
	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	return 0;
}
void swap(int* a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
#include<stdio.h>
int main() {
    int arr[25], i;
    int min = arr[0];
    int *p = arr; 
    for (i = 0; i < 25; i++) {
        printf("\nEnter element: %d ",p+i);
        scanf("%d", (p + i));
    }
    for (i = 0; i < 25; i++) {
        if (*(p + i) < min)
            min = *(p + i);
    }
    printf("\nmin: %d", min);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,5,6,6,7},n;
    printf("Enter number:");
    scanf("%d",&n);
    int c=0;
    for(int i=0; i<10;i++){
        if (arr[i]==n)
        c+=1;
    } 
    if (c>0){
        printf("yes it is in array\n");
        printf("Number of times it appears is : %d",c);
    }
}
#include<stdio.h>
int main(){
    int arr[10] = {-3,-2,-1,0,1,2,3,4},p=0,z=0,n=0;
    for(int i=0;i<10;i++){
        if(arr[i]>0)
        p+=1;
        if(arr[i]==0)
        z+=1;
        if(arr[i]<0)
        n+=1;
        }
        if(n>0)printf("The number of negative numbers are: %d\n",n);
        if (z>0)printf("The number of zeroes are %d\n",z);
        if (p>0) printf("The number of positive numbers are: %d\n",p);
}
#include<stdio.h>
#define n 6
int main(){
    int ar[n] ={1,2,3,3,4,5},i,j;
    for(i=0,j=n-1; i<n; i++,j--){
        if (ar[i] == ar[j])
			printf("\narr[%d] and arr[%d] are equal.", i, j);
		else
			printf("\narr[%d] and arr[%d] are not equal.", i, j);
	}
}
#include <stdio.h>
int main(){
    int arr[10]= {2,4,1,5,2,7,5,9,0,-1};
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < ( 10-i ); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    for (int j=0;j<10;j++){
        printf("%d ",arr[j]);
    }
}
#include<stdio.h>
int main(){
    int n[5][5]={
        2,4,3,6,1,
        5,3,5,1,1,
        2,3,4,5,6,
        3,8,7,3,8,
        2,3,5,7,9
    };
    int max=n[0][0];
    for (int i = 0; i <5; i++) {
        for (int j = 0; j <=5; j++) {
       
     if (n[i][j] > max)
        max = n[i][j];
        continue;}}
    printf("\nmax: %d", max);
    return 0;

}
#include<stdio.h>
int main(){
    int n[4][4]={
        {2,4,3,6},
        {5,3,5,1},
        {2,3,4,5},
        {3,8,7,3}
    };
    for (int i=0; i<4; i++){
        for(int j=i+1; j<4; j++) {
            int t = n[i][j];
            n[i][j] = n[j][i];
            n[j][i] = t;
        }
    }
    
    for (int i=0; i<4; i++){
        for (int j=0; j<4;j++){
            printf("%d ",n[i][j]);
             if(j==3) printf("\n");
        }
    }
}
#include<stdio.h>
#define n 3
int main(){
    int i, j;
    int mat[n][n];
	printf("Enter the elements of the of the %d by %d matrix.\n", n, n);
	for (i = 0; i<n; i++)
		for (j = 0; j<n; j++)
			scanf("%d", &mat[i][j]);
            
    for (i = 0; i<n; i++){
        for (j = 0; j<n; j++){
			if (mat[i][j] != mat[j][i]){
				printf("\nThis is not a symmetric matrix.\n");
				return 0;
			}
			else
			continue;
		}
	}
if (i == n)
printf("\nThis is a symmetric matrix.\n");
return 0;
}
// multiply two matrix of 6 by 6 habibi!!!!!
#include <stdio.h>
#define n 6

int main() {
    int m1[n][n];
    int m2[n][n];
    int sum[n][n];
    printf("Enter the elements of the 1st %d by %d matrix\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the elements of the 2nd %d by %d matrix\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#define n 3

int main() {
    int m1[n][n];
    int m2[n][n];
    int multiply[n][n];
    printf("Enter the elements of the 1st %d by %d matrix\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the elements of the 2nd %d by %d matrix\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            multiply[i][j] = m1[i][j] * m2[i][j];
        }
    }

    printf("multiplication of the matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include<stdio.h>
void shift(int *base){
	int *web, fir, sec, i;
	web = base;
	fir = *base;
	sec = *(base + 1);
	for (i = 0; i<3; i++)
    *(web + i) = *((base + 2) + i);
	*(web + 3) = fir;
	*(web + 4) = sec;
}
int main(){
	int a[5], i;
    printf("Enter 5 numbers : ");
	for (i = 0; i<5; i++)
		scanf("%d", &a[i]);
        shift(a);
        printf("\nList after shifting it's rows by two positions.\n");
        for (i = 0; i<5; i++)
        printf("%d ", a[i]);
return 0;
}
#include<stdio.h>
int main ( )
{
int a[6][6], i, j;
long determinant;
printf("Enter the elements of matrix: ");
for(i = 0 ;i < 6;i++)
for(j = 0;j < 6;j++)
scanf("%d", &a[i][j]);
printf("\nThe matrix is\n");
for(i = 0;i < 6; i++)
{
printf("\n");
for(j = 0;j < 6; j++)
printf("%d\t", a[i][j]);
}
determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
printf("\nDeterminant of 6X6 matrix: %ld", determinant);
return 0;
}
#include<stdio.h>
#include<math.h>
int mean(int *n){
    float sum=0;
    for(int i=0; i<14; i++){
        sum+=n[i];
}
return sum/14;
}
int std(int *n,float* _x){
    int stdn[20];
    float std =0;
    for(int i=0; i<20; i++){
        float y = pow(n[i]-*_x,2);
        std += (sqrt(y));
}
return std/14;
}
int main(){
    int n[20]={-6,-12,8,13,11,6,7,2,-6,-10,11,10,9,2};
    float _x = mean(n);
    printf("mean of the data is %f\n", _x);
    float S = std(n,&_x);
    printf("The standard deviation of the data is %f\n", S);
}
#include<stdio.h>
#include<math.h>
int main(){
    float a[6][4] = {
		1,		137.4,	80.9,	0.78,
		2,		155.2,	92.62,	0.89,
		3,		149.3,	97.93,	0.89,
		4, 		160.0,	100.25,	1.35,
		5, 		155.6,	68.95,	1.25,
		6,		149.7,	120.0,	1.75,
	},ar[6],
		max;
	int i, x = 0;
	for (i = 0; i<6; i++){
		ar[i] = (0.5)*a[i][1] * a[i][2] * sin(a[i][3]);
		if (max<ar[i]){
            max = ar[i];
			x = a[i][0];
		}
	}
    printf("\n\n\nAreas of the triangles are ~ ");
    for (i = 0; i<6; i++)
    printf("\n%f : %2f", a[i][0], ar[i]);
    printf("\n\n\nNumber %d. triangle has maximum area of %2f.", x, max);
return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
	float x[10], y[10], dis = 0;
	int i, j;
	printf("Enter the coordinates of 10 points : \n\n");
	for (i = 0; i<10; i++)
		scanf("%f%f", &x[i], &y[i]);
	for (i = 0; i<10; i++)
		dis += sqrt(pow((x[i + 1] - x[i]), 2) + pow((y[i + 1] - y[i]), 2));
	printf("The total distance between first and last point is %f", dis);
	return 0;
}
#include<stdio.h>
#define n 10
int main(){
	double set[n][2] = {
		3.0, 1.5,
		4.5, 2.0,
		5.5, 3.5,
		6.5, 5.0,
		7.5, 6.0,
		8.5, 7.5,
		8.0, 9.0,
		9.0, 10.5,
		9.5, 12.0,
		10.0, 14.0
	};
    double sx = 0, sy = 0, sxy = 0, sx2 = 0, a, b, xbar, ybar;
	int i;
	for (i = 0; i < n; i++){
		sx += set[i][0];
		sy += set[i][1];
		sxy += set[i][0] * set[i][1];
		sx2 += set[i][0] * set[i][0];
	}
	xbar = sx / n;
	ybar = sy / n;
	b = (n*sxy - sx*sy) / (n*sx2 - sx*sx);
	a = ybar - b*xbar;
	printf("\nRequired equation is\n\ny = %.2lf + %.2lfx", a, b);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
	float x[11][2] = {
		34.22, 102.43,
		39.87, 100.93,
		41.85, 97.43,
		43.23, 97.81,
		40.06, 98.32,
		53.29, 98.32,
		53.29, 100.07,
		49.12, 91.59,
		40.71, 94.85,
		55.15, 94.65,

	},xysum = 0, xsum = 0, ysum = 0, x2sum = 0, y2sum = 0, n = 11, r;
	int i;
	for (i = 0; i<11; i++){
        xsum += x[i][0];
		ysum += x[i][0];
		xysum += x[i][0] * x[i][1];
		x2sum += x[i][0] * x[i][0];
		y2sum += x[i][1] * x[i][1];
	}
r = (xysum - xsum*ysum) / (sqrt((n*x2sum - xsum*xsum)*(n*y2sum - ysum*ysum)));
printf("Coefficient of correlation (r) = %f", r);
return 0;
}
#include<stdio.h>
void m(int m,char *p){
    printf("%s",(p+m));
}
int main(){
    char s[]="Mayank Kamboj";
    m(0,s);
}
#include<stdio.h>
#include<stdlib.h>
int intgr(char *p){
    int y;
    y = atoi(p);
    printf("%d", y);
}

int main(){
    char s[]="12";
    intgr(s);
}
#include<stdio.h>
#include<string.h>
int main()
{
	char x[50] = "a", z[50];
	char y[50] = "b";
	int i;
	for (i = 0; i <= 5; i++)
	{
		printf("%s\t", x);
		strcpy(z, x);
		strcpy(x, y);
		strcat(y, z);
	}
	return 0;
}
#include<stdio.h>
int main(){
	char num[20];
	int i, sum = 0;
	printf("Enter a 16 digit credit card number : ");
	scanf("%s", num);
	for (i = 0; i <= 15; i++){
		num[i] -= 48;
		if ((i % 2)) sum = sum + num[i];
		else{
			num[i] *= 2;
			if (num[i] >= 10)
				num[i] -= 9;
			sum = sum + num[i];
        }
	}
	if (!(sum % 10))
		printf("Number is valid.");
	else
		printf("Number is not valid.");
return 0;
}
#include<stdio.h>
int main() {
    char num[20];
    int i, sum = 0;
    printf("Enter a 10 digit ISBN number : ");
    scanf("%s", num);
    if (num[0] == 'x') {
        sum += 10;
        for (i = 1; i < 10; i++) {
            sum += (i + 1) * (num[i]);
        }
    } else {
        for (i = 0; i < 10; i++) {
            sum += (i + 1) * (num[i]);
        }
    }
    if (sum % 11 == 0)
        printf("Valid ISBN number\n");
    else
        printf("Invalid ISBN number\n");

    return 0;
}
