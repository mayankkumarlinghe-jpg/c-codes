#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates of point :");
    scanf("%d %d",&x,&y);
    if(x==0) {
        if  (x ==0,y==0) printf("Point lies on Origin"); 
        else printf("Point lies on Y coordinate");}
    else if (y==0) printf("Point lies on X coordinate");
    else printf("Point lies between x and y coordinates");
    return 0;
} 
#include<stdio.h>
int main(){
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    if(y%4==0 || y/4==0)(printf("This year is a leap year"));
    else printf("This year is not a leap year:");
    return 0;
}
#include<stdio.h>
int main(){
    int y;
    printf("Enter year  number");
    scanf("%d",&y);
    y%4==0?printf("This year is a leap year"):printf("This year is not a leap year");
    return 0;
}
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    printf("Enter third number:");
    scanf("%d",&z);
    x>y?(x>z?printf("x is largest "):printf("\n")):printf("\n");
    y>z?(y>x?printf("y is largest"):printf("\n")):printf("\n");
    z>x?(z>y?printf("z is largest"):printf("can't compare")):printf("\n");
return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    float x,a,b,sum;
    printf("Enter value of angle");
    scanf("%d",&x);
    x= x*(180/3.14);
    a = sin(x);
    b = cos(x);
    sum =pow(a,2)+pow(b,2);
    printf("The  sum of sqaure of sin square x and cos square x is %f",sum);
}
#include<stdio.h>
int main(){
    float sal;
    printf("Enter the salary");
    scanf("%f",&sal);
    sal>=15000?(sal <= 40000?printf("Manager"):printf("")):sal>=15000?(sal<20000?printf("Accountant"):printf("Cleark")):printf("");
return 0;
}
#include<stdio.h>
int main(){
    char x;
    printf("Enter a character");
    scanf("%c",&x);
    if(x>=65 && x <= 90) printf("The character is Uppercase");
    else if (x>=97 && x <= 122) printf("The character is Lowercase");
    else if (x>=48 && x <= 57) printf("The character is a Digit");
    else if (x>=0 && x<=47 || x>=58 && x<=64 || x>=91 && x <=96 || x>=123 && x<=127)  
        printf("The character is a speacial symbol");
    return 0;
}
#include<stdio.h>
int main(){
    int s1,s2,s3; // s denotes side of triangle
    printf("Enter the three sides of a triangle:");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1>s2,s3 && s2+s3>s1 || s2>s3,s1 && s1+s3>s2 || s3>s1,s2 && s1+s2>s3) printf("It is a valid triangle");
    else printf("It is not a valid triangle");
}
#include<stdio.h>
#include<math.h>
int main(){
    int s1,s2,s3; // s denotes side of triangle
    printf("Enter the three sides of a triangle:");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s2 == s3)printf("It is an equilateral triangle\n");
    else if (s1 ==s2 && s2!=s3)printf("It is an isoscales triangle\n");
    else if (s1!=s2 && s2!=s3)printf("It is a scalene triangle\n");
    if (s1>s2,s3 && pow(s1,2) == pow(s2,2)+pow(s3,2) || s2>s3,s1 && pow(s2,2) == pow(s3,2)+pow(s1,2) || s3>s1,s2 && pow(s3,2) == pow(s1,2)+pow(s2,2))
    printf("It is a right angle triangle");
}
#include<stdio.h>
int main()
{
float r,g,b,w,c,m,y,k,bla;
printf("Enter values of R G B:");
scanf("%f%f%f",&r,&g,&b);
if(r==0 && b==0 && g==0) 
{
    c=0; m=0; y=0;k=1; 
    }
if(r<=250>g<=250,b<=250)
{ 
    if (r/250>g/250 ,b/250)
    w = r/250;
    else if(g/250>b/250,r/250)
    w = g/250;
    else if (b/250>r/250,b/250)
    w =b/250;}
    else {printf("Enter values of Red Green Blue in between 0 and 250");}
    c =((w-r)/255)/w;
    m = ((w-g)/255)/w;
    y = ((w-b)/255)/w;
    bla = 1-w;
    printf("Value of White is %f\n",w);
    printf("Value of Cyan is %f\n",c);
    printf("Value of Magenta is %f\n",m);
    printf("Value of Yellow is %f\n",y);
    printf("Value of Black is %f\n",bla);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    float bmi,w,h;
    printf("Enter your weight:");
    scanf("%f",&w);
    printf("Enter your height in meters:");
    scanf("%f",&h);
    bmi =w/pow(h,2);
    if (bmi <15) printf("Starvation");
    if(bmi >= 15.1 && bmi <= 17.5) printf("Anorexic");
    if(bmi >=17.6 && bmi<=18.5) printf("Underweight");
    if(bmi>=18.6 && bmi<=24.9) printf("Ideal");
    if(bmi>=25 && bmi<=25.9) printf("Overweight");
    if(bmi>=30 && bmi<=30.9) printf("Obese");
    if(bmi >=40) printf(" Morbidly Obese");
}
#include<stdio.h>
int main(){
    int h,ts;
    float cc;
    printf("Enter the steel hardness:");
    scanf("%d",&h);
    printf("Enter the value of carbon content in steel:");
    scanf("%f",&cc);
    printf(" Enter the value f tensile strength of steel:");
    scanf("%d",&ts);
    if(h>50 &&cc>0.7 && ts>5600) printf("This Steel comes under Grade 10");
    else if (h>50 &&cc>0.7) printf("This Steel comes under Grade 9");
    else if (cc>0.7 && ts>5600) printf("This Steel comes under Grade 8");
    else if (h>50 && ts>5600) printf("This Steel comes under Grade 7");
    else if (h>50 ||cc>0.7 || ts>5600) printf("This Steel comes under Grade 6");
    else printf("This Steel comes under Grade 5");
}
#include<stdio.h>
int main(){
    int emp,rph,h;
    emp =0;
    
    while(emp<=10){
        printf("Enter the number of hours worked: ");
        scanf("%d",&h);
        if(h>40) 
        rph=12*(h-40);
        printf("The total rate paid is %d\n",rph);
        emp+=1;
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n,i,f;
    f=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
    return 0;
}
#include<stdio.h>
int main(){
    int x,y,i=1;
    printf("Enter first number");
    scanf("%d",&x);
    printf("Enter second number");
    scanf("%d",&y);
    while(i<2) {
        x*=y;
        printf("The exponential term is :%d",x);
        i++;
        }
        return 0;
}
#include<stdio.h>
int main(){
    int i;
    char c;
    i=0;
    while(i<=250){
        printf("The ASCII value of character is %d ,i");
        printf("The character is:%c\n",c=i);
        i+=1;
    }
    return 0;
}
#include <stdio.h>
int main(){
    int num,sum,count=1,r;
    while (count<=500){
        num=count;
        sum=0;
        while (num){
            r=num%10;
            sum=sum+r*r*r;
            num=num/10;
        }
        if (count==sum){
            printf("%d is an Armstrong number.\n",count);
        }
        count++;
    }
    return 0;
}
#include<stdio.h>
int main(){
    int i =1,a,b;
    char rs;
    while (i>=1)if(i = 1)
    {printf("Enter the two numbers who's range you want to check:");
    scanf("%d %d",&a,&b);
    if(a>b)printf("The range is :%d\n",a-b);
    if (b>a)printf("The range is :%d\n",b-a);
    i++;
}
}
#include<stdio.h>

int main()
{int num,p=0,n=0,z=0;
char choice ='y';
printf("Enter a number: ");
scanf("%d",&num);
if (num==0) 
z= z+1;
num>0? p++:n++;
printf("Do you want to continue? (y/n): ");
scanf("%s",&choice);
if(choice == 'n')
{printf("The numbers entered are positive :%d Negative :%d and zero :%d",p,n,z);
choice ='y';
} 
} 
#include<stdio.h>

int main() {
    int matchsticks = 21;
    int playerpick;

    printf("Welcome to the 21 Matchstick Game!\n");

    while (matchsticks<=21) {
        printf("Remaining matchsticks: %d\n", matchsticks);
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &playerpick);

        if (playerpick < 1 || playerpick > 4  || playerpick > matchsticks) {
            printf("Invalid input. Please pick again.\n");
            continue;
        }

        matchsticks -= playerpick;

        if (matchsticks == 1) {
            printf("Remaining matchsticks: %d\n", matchsticks );
            printf("You picked the last matchstick. You lose!\n");
            break;
        }
        int computerPick = 5 - playerpick;
        printf("Computer picks: %d\n", computerPick);
        matchsticks -= computerPick;
        
    }
    return 0;
}
#include<stdio.h>
int main(){
    int num,r,oct,n =1;
    printf("Enter the Integer that you want to convert to its Octal Equivalent:");
    scanf("%d",&num);
    r =num%8;
    oct =r;
    while (num!=0&& n>=0){
        num = num/8;
        n = n*10;
        r = num %8;
        oct = (n*r)+oct;

    }
    printf("The octal equivalent is: %d\n",oct);
    return 0;
}
// to make characters display with ascii 
#include<stdio.h>
int main(){
    int j =1;
    while (j <= 255)
    {
        printf("%c %d",j,j);
        j++;
    }

    }

 #include <stdio.h>
 int main(){
    int num,n=300,count,i;
    for (num=1;num<=n;num++){
        count =0;
        for(i =2;i<=num/2;i++){
        if (num%i ==0){
            count ++;
            break;
        }
    }
    if (count ==0  )
    printf("%d\n",num);

 }
 }
 #include<stdio.h>
 int main(){
    int i,x=29,y;
    for(i=1;i<=10;i++){
        y=x*i;
        printf("%d\n",y);
 }
 }

#include <stdio.h>
#include <conio.h>
int main(){
    int x,y,z;
    for(x=1;x<4;x+=1){
        for (y=1;y<4;y+=1){
            for (z=1;z<4;z+=1){
                 
                    printf("%d%d%d\n", x,y,z);
                 }
            }
        }
    }

#include<stdio.h>
int main(){
float x=5.5,y =1,i;
for (;y<=6 && x<=12.5;y+=1,x+=0.5){
    i =2+(y+0.5*x);
    printf("%f\n",i);
}
}
#include<stdio.h>
int main(){
    int t;
    for(t=1;t<=12;t++){
        printf("%d AM\n",t);
        if (t== 12 ){
        break;
        } }
        printf("Afternoon\n");
        for (t=1;t<=12;t++){   
            printf("%d PM\n",t);
        if (t== 12 )
        break;}
        printf("Midnight\n");
        }
#include<stdio.h>
int main(){
    int n=1,p=100000;
    for(;n<=10;n++){
        printf("Population in the  last %d Year is %d\n",n,p);
        p-=10000;

    }

}
#include <stdio.h>

int main() {
    int rows ,spc,num=4,i,c=1; 
    for (rows =1;rows<=num;rows++) {
        for (spc =-5;spc<=(num-rows);spc++){
            printf(" "); 
        }
        for (i=1;i<=rows;i++) 
            printf("%d ", c++);
             printf("\n");
        }
       
    }

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    for(a=1;a<=30 ;a++){
    for (b=1;b<=30 ;b++){
        for(c=1;c<=30 ;c++){
            if (pow(c,2) == pow(a,2)+pow(b,2))
            printf("%d %d %d\n",a,b,c);
        }
    }
    }
}

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    for(a=1;a<=10 ;a++){
    for (b=1;b<=10 ;b++){
        for(c=1;c<=10;c++){
            for (d=1;d<=1 ;d++){
            if (pow(a,2) +pow(b,2) == pow(c,2)+pow(d,2))
            printf("%d %d %d %d\n",a,b,c,d);
            }
        }
    }
    }
}

#include <stdio.h>
#include<math.h>
int main(){
    float x,n,m=0;
    printf("Enter value of x:");
    scanf("%f",&x);
    x= (x-1)/x;
    for(n=1;n<=7;n++){
        if (n==1)
        m+=x;
        else 
        m+=(1/2)*pow(x,n);
        
    }
    printf("The sum of series is  %f",m);
}
