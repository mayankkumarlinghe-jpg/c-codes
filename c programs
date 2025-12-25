
#include <stdio.h>
#include<math.h>
int main(){
    int n;
 float a,p=100,q=1,r=0.1,i;// n represent nof years
 for(n=1;n<=10;n++){
    for(;q<=10;q++){
        for (;r<=1;r+=0.1){
            i = n*q;
            a = pow(p*(1+r/q),i);
            printf("The amount in the %d year is %f\n ",n,a);
        }
    }

 }
 return 0;
}
#include <stdio.h>
int main(){
 double i,j,k,m=0,f,add=0;
    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            for(f=1;f<=j;f++){
                k = f*j;
                m += k;
                add = i/m+add;
                
                }

    }
    }
    printf("%f ",add);
}
// we have use break rather than using goto to make our program more reasonable
#include<stdio.h>
int main(){
    int i,j,k;
    
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++){
            for (k=1;k<=3;k++){
                if(i==3 && j==3 &&k==3)
                break;
                else 
                    printf("%d %d %d\n",i,j,k);    
            }
        }   
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i=1,f=1,c,n,count =0;
    while (1){
    printf("Enter your choice :\n1 for Factorial\n2 for Prime Number\n3 for Odd or Even Number\n4 to Exit\n");
    scanf("%d",&c);
    switch(c){
        case 1 :
            printf("Enter Number whose factorial you want:");
            scanf("%d",&n);
            while(i<=n){
            f*=i;
            i++;
             }
        printf("The Factorial of the number  is %d",f);
        break;

        case 2: 
            printf("Enter the number whom you want to check to be prime: ");
            scanf("%d",&n);
            printf("number get displayed if prime\n");
            
            for (int num=1;num<=n;num++){ 
        for(i =2;i<=num/2;i++){
        if (num%i ==0){
            count ++;
               break;}}}
            if (count ==0) 
        printf("%d is a prime number\n",n);
    break;
    case 3:
        printf("Enter a number to check for odd and even:\n");
        scanf("%d",&n);
        
            if (n%2==0)
            printf("It is even number\n");
            else 
            printf("It is odd number\n");
            break;
            case 4:
            exit(1);
            
    
            }

}
 #include <stdio.h>
 int main(){
    int c,ms=40,s,g;
    printf("Enter Class Obtained by Student: ");
    scanf("%d",&c);
    printf("Enter marks obtained by students: ");
    scanf("%d",&ms);
    switch(c){
        case 1: printf("Enter number of subjects in which student failed");
        scanf("%d",&s);
        if(s>3){
            ms = ms;
        }
        else ms+=5;
        break;
        case 2: if(s>2){
            ms = ms;
        }
        else ms+=4;
        break;
        case 3:if(s>1){
            ms = ms;
        }
        else ms+=5;
        break;
    }
    printf("The marks obtaioned are: %d\n",ms);
return 0;
 }
 ////// For pattern of number of numbers, to make it a pyramid use another inner loop inside first loop 
 /// but do not use loop inside loop inside loop ,only two inner loops inside first loop 
 // after completion of inner loop write printf("\n"); statement outside inner loop
#include<stdio.h>
int main(){
    int rows,num;
    num =1;
    for(rows=1;rows<=num&&rows<=5;rows++){
            for(num=1;num<=5 && num<=rows;num++)
            {printf("%d ",num);}
    printf("\n");
}
}
#include<stdio.h>
int fact(int);
int main(){
    int a,num;
    printf("Enter number whose factorial you want:");
    scanf("%d",&num);
    num =fact(num);
    printf("Factorial is %d\n",num);
}
int fact(int num){
    int f=1;
    for(int i=1;i<=num;num--){
        f*=num;
    }
    return (f);
}
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the number you want to make base of power:");
    scanf("%d",&a);
    printf("Enter the number you want to make the  power of base:");
    scanf("%d",&b);
    c = pow(a,b);
    printf("%d is power of %d raise to the power %d",c,a,b);
}
#include<stdio.h>
int leapyear();
int main(){
    int y,check;
    printf("Enter the year :");
    scanf("%d",&y);
    check = leapyear(y);

}
int leapyear(int y){
    if (y%4 ==0){
        printf("It is a leap year");
    }
    else printf("It is not a leap year");
}
#include<stdio.h>
#include<math.h>
int sumavgs(int,int ,int ,int ,int ,int*,int *,int*);
int main(){
    int num,m,a,b,c,d,e;
    int sum,avg,std;
    printf("Enter five integers :\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sumavgs(a,b,c,d,e,&sum,&avg,&std);
    printf("%d is sum of integers\n",sum);   
    printf("%d is average of integers\n",avg);
    printf("%d is standard deviation of integers\n",std);
}
int sumavgs(int a,int b,int c,int d,int e,int *sum,int *avg,int *std){
    int n,s;
    *sum =a+b+c+d+e;
    *avg = *sum/2;
    n = ((a-*avg))+((b-*avg))+((c-*avg))+((d-*avg))+((e-*avg));
    s = pow(n,2)/(*sum);
    *std =sqrt(s);
}
#include<stdio.h>
int avgp(float*,float*,float*,int*,int*);
int main(){
    float s1,s2,s3;
    int avg,percentage;
    printf("Enter marks of first subject:");
    scanf("%f",&s1);
    printf("Enter marks of second subject:");
    scanf("%f",&s2);
    printf("Enter marks of third subject:");
    scanf("%f",&s3);
    avgp(&s1, &s2, &s3,&avg,&percentage);
    printf("The average of marks is :%d \n",avg);
    printf("The percentage of marks is :%d \n",percentage);
    return 0;

}
int avgp(float *s1, float *s2,float *s3,int *avg,int *percentage){
    *avg = (*s1+*s2+*s3)/3;
    *percentage = ((*s1+*s2+*s3)/300)*100;
}
#include<stdio.h>
#include<math.h>
float areas(float*,float*,float*,float*);
int main(){
    float a,b,c,s;
    float area;
    printf("Enter the three side of triangle:");
    scanf("\n%f %f %f",&a,&b,&c);
     areas(&a,&b,&c,&area);
    printf("Area of triangle is %f",area);
}
float areas(float *a,float *b,float *c,float *area){
   float s = (*a+*b+*c)/2;
   *area = sqrt(s*(s-*a)*(s-*b)*(s-*c)); 
return 0;
}
#include<stdio.h>
int swapr(int*,int*,int*);
int main(){
    int x,y,z,t,s;
    printf("Enter the numbers you want to swap to right:\n");
    scanf("%d %d %d",&x,&y,&z);
    swapr(&x,&y,&z);
    printf("The swapped numbers are %d %d %d",x,y,z);
return 0;
}
int swapr(int *x,int *y,int *z) {
    int t =*x;
    *x = *z;
    *y=*y;
    *z = t;
}
#include<stdio.h>
int pf(int*);
int main(){
    int num,x;
    printf("Enter the number to get prime factors:");
    scanf("%d",&num);
    x = pf(&num);
    return 0;
}
int pf(int *num){
    for (int i = 2; i <= *num; i++) {
        while (*num % i == 0) {
            printf("%d ", i);
            *num /= i;
}
    }
}

#include<stdio.h>
#include<conio.h>
void rom(int);
void print(int,char);
int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    rom(year);

}
void rom(int y){
    int v,x,l,c,d,m;
    m = y/1000;
    print(m,'m');
    y%=1000;
    d = y/500;
    print(d,'d');
    y%=500;
    c=y/100;
    print(c,'c');
    y%=100;
    l=y/50;
    print(l,'l');
    y%=50;
    x=y/10;
    print(x,'x');
    y%=10;
    v=y/5;
    print(v,'v');
    y%=5;
    print(y,'i');
}
void print (int a,char c){
    int i;
    for(i=0;i<a;i++)
    printf("%c",c);
}
#include<stdio.h>
#include<math.h>
int dist(int*,int*,int*,int*,int*);
int areas(int*,int*,int*,float*);
int main(){
    int x1,x2,x3,y1,y2,y3,a,b,c;
    float area;
    printf("Enter the value of x1 and y1 coordinates:\n");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of x2 and y2 coordinates:\n");
    scanf("%d %d",&x2,&y2);
    printf("Enter the value of x3 and y3 coordinates:\n");
    scanf("%d %d",&x3,&y3);
    dist(&x1,&y1,&x2,&y2,&a);
    dist(&x2,&y2,&x3,&y3,&b);
    dist(&x3,&y3,&x1,&y1,&c);
    printf("The distance between x1,y1 and x2,y2 is %d\n",a);
    printf("The distance between x2,y2 and x3,y3 is %d\n",b);
    printf("The distance between x3,y3 and x1,y1 is %d\n",c);
    areas(&a,&b,&c,&area);
    printf("The area of triangle is :%f",area);
}
int dist(int *x1,int *y1,int*x2,int *y2,int *a){
    *a= sqrt((pow((*x2-*x1),2)) +(pow((*y2-*y1),2)));
}
int areas(int*a,int*b,int*c,float*area){
    float s;
    s=*a+*b+*c/2;
    *area=sqrt(s*(s-*a)*(s-*b)*(s-*c));
}
#include<stdio.h>
int gcd(int *a, int *b) {
    if (*b == 0)
        return *a;
    int  z=*a % *b;
    return gcd(&(*b),&z);
}
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
#include<stdio.h>
int main() {
    int x = 2; 
    double sum = 0;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            sum += pow(x, 2 * i + 1) / factorial(2 * i + 1);
        } else {
            sum -= pow(x, 2 * i + 1) / factorial(2 * i + 1);
        }
    }

    printf("Sum of the series is: %f\n", sum);

    return 0;
}

int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    int result = gcd(&n1, &n2);
    printf("Greatest Common Divisor is : %d\n", result);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int sum(int);
int main(){
    int num;
    printf("Enter the 5 digit number: ");
    scanf("%d",&num);
    int z= sum(num);
    printf("The sum is :%d",z);
    return 0;
}
int sum(int num) {
    if (num == 0) {
        return 0;
    }
    
    return (num % 10) + sum(num / 10);
}
#include<stdio.h>
#include<stdlib.h>
int sum(int);
int main(){
    int i=1;
    int s =sum(i);
    printf("%d\n", s);
}
int sum (int i){
    if (i>25) return 0;
    else return i+sum(i+1);
}
#include<stdio.h>
void  pf(int,int);
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    pf(num,2);
}
void  pf(int num,int i){
    if (num<=1)
    return ;
    while (num%i==0){
            num /= i;
            printf("%d ", i);
        }
        return pf(num,i+1);       
}
#include <stdio.h>
int fibon(int n){
if(x<=1)
return n;
return fibon(n-1)+fibon(n-2); 
}
int main(){
int i;
for(i=0;i<25;i++){
printf("%d",fibon(i));}
return 0;
}
#include<stdio.h>
#define LOWERCASE(c)if (c>=97 && c <=122){\
    printf("Entered character is lowercase.\n");}\
    else {printf("not a lowercase character.\n");\
}
int main(){
    char c;
    printf("Enter a charcter.\n");
    scanf("%c",&c);
    LOWERCASE(c);
    return 0;
}
#include<stdio.h>
#define UPPERCASE(c)if (c>=65 && c <=90){\
    printf("Entered character is Uppercase.\n");}\
    else {printf("not a Uppercase character.\n");\
}
int main(){
    char c;
    printf("Enter a charcter.\n");
    scanf("%c",&c);
    UPPERCASE(c);
    return 0;
}
#include<stdio.h>
#define COMPARE(x,y)if (x>y){\
    printf("%d is greater ",x);}\
    else if (y>x) printf("%d is greater  \n",y);\

int main(){
    char x,y;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    COMPARE(x,y);
    return 0;
}
#include<stdio.h>
#define SWAP(x) if (x>=65 && x<=90) {x= x+32; printf("%c",x);}\
else if (x>=97 && x<122)  {x= x-32;printf("%c",x);}
int main(){
    char c;
    printf("Enter a character: "); 
    scanf("%c",&c);
    SWAP(c);
}
#include<stdio.h>
int main(){
    int num[10] ={1,2,3,4,5,6,7,8,9,10};
    int reverse[10];
    for(int i = 0; i <10;i++){
    reverse[i] = num[9-i];
}
for (int i = 0; i < 10;i++){
    printf("%d ",reverse[i]);
}
}
