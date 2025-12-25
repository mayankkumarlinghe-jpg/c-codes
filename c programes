
#include<stdio.h>
int main(){
int a,b,c,d,e;
printf("Enter first digit of number:"); 
scanf("%d",&a);
printf("Enter  second digit of number:");
scanf("%d",&b);
printf("Enter  third digit of number:");
scanf("%d",&c);
printf("Enter  fourth digit of number:"); 
scanf("%d",&d);
printf("Enter  fifth digit of number:");
scanf("%d",&e);
printf("Sum is %d",a+b+c+d+e);
return 0;
}
#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,s,y;
    printf("Enter fist side of a triangle:");
    scanf("%d",&a);
    printf("Enter second side of a triangle:");
    scanf("%d",&b);
    printf("Enter third side of a triangle:");
    scanf("%d",&c);
    s = (a+b+c)/2;
    d = s*((s-a)*(s-b)*(s-c));
    y = sqrt(d);
    printf("The area of triangle is %d",y);
    return 0;
} 
#include <stdio.h>
int main(){
    int n,a,b,c,d,e,sum;
    printf("Enter a five digit number:");
    scanf("%d",&n);
    a=n%10;
    b =(n/10)%10;
    c =(n/100)%10;
    d =(n/1000)%10;
    e =(n/10000)%10;
    sum = a+b+c+d+e;
    printf("The sum is %d",sum);
}

#include <stdio.h>
int main(){
    int x,y,a,b,c,d,e;
    printf("Enter a 5 digit number:");
    scanf("%d",&x);
    a = x%10;
    b = (x/10)%10;
    c = (x/100)%10;
    d = (x/1000)%10;
    e = (x/10000)%10;
    y = a*10000+b*1000+c*100+d*10+e;
    printf("The Reversed number is%d",y);
    }
#include<stdio.h>
#include<math.h>
int main(){
    float x,y,r,m,q;
    printf("Enter the value of x catesian co ordinate :");
    scanf("%f",&x);
    printf("Enter the value of y cartesian co ordinate :");
    scanf("%f",&y);
    m = x*x+y*y;
    r = sqrt(m);
    q = 1/tan(y/x);
    printf("The r polar co ordinate is %f, The q polar co ordinate is %f ",r,q); 
    return 0;
}
#include <stdio.h>
#include<math.h>
#define PI 22/7
int main(){
    float a,b,c,d,l1,l2,r1,r2,D;
    printf("Enter L1:"); scanf("%f",&a);
    printf("Enter L2:"); scanf("%f",&b);
    printf("Enter R1:"); scanf("%f",&c);
    printf("Enter R2:"); scanf("%f",&d);
    l1 = a*180/PI;
    l2 = b*180/PI;
    r1 = c*180/PI;
    r2 = d*180/PI;
    D = 3963*(1/cos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(r2-r1)));
    printf("The value of distance in nautical miles is : %f" ,D);
}
#include<stdio.h>
#include<math.h>
int main(){
    float v,t,wcf;
    printf("Enter value of Wind velocity:");
    scanf("%f",&v);
    printf("Enter temperature : ");
    scanf("%f",&t);
    wcf = 35.74+ 0.625*t +(0.425*t-35.75)*pow(v,0.16);
    printf("The Wind Chill Factor is %f",wcf);
}
#include<stdio.h>
#include<math.h>
int main (){
    float a;
    printf("Enter the value of angle (x) in randians:");
    scanf("%f",&a);
    printf("The value of sin(x) is :%f\n",sin(a));
    printf("The value of cos(x) is :%f\n",cos(a));
    printf("The value of tan(x) is :%f\n",tan(a));
    printf("The value of cot(x) is :%f\n",1/tan(a));
    printf("The value of sec(x) is :%f\n",1/cos(a));
    printf("The value of cosec(X) is :%f\n",1/sin(a));
}
#include<stdio.h>
#include<math.h>
int main (){
    int x,y;
    printf("The value of 1st number:");
    scanf("%d",&x);
    printf("The value of 2nd number:");
    scanf("%d",&y);
    x  = x+y;
    y = x-y;
    x = x-y;
    printf("The interchange vale of x is %d,The value of y is %d",x,y);
}
#include <stdio.h>
int main(){
    int cp,sp;
    printf("Enter the Cost Price of Product:");
    scanf("%d",&cp);
    printf("Enter the Selling Price of Product:");
    scanf("%d",&sp);
    if(sp>cp)
        printf("Seller has made profit");
    else 
        printf("Seller has made loss");
    return 0;
}
#include <stdio.h>
int main(){
    int i;
    printf("Eter an integer:");
    scanf("%d",&i);
    if(i%2==0)
        printf("It is an even number");
    else 
    printf("It is an odd number");
    return 0;
}
#include<stdio.h>
int main(){
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    if(y%4==0)
        printf("It is a leap year");
    else
        printf("It is not a leap year");
    return 0;
}
#include<stdio.h>
int main(){
    // taking 1900 as basic year in which there is monday on 1st january
    int lpy,rmy,y,td,d,bsy = 1900;
    printf("Enter the year : ");
    scanf("%d",&y);
    y = (y-1)-bsy;// to calculate total years between basic and entered year
    lpy = y/4;
    rmy = y - lpy;
    td = (rmy*365)+(lpy*366)+1; // to calculate total days in all years
    d = td%7;

    if(d ==0)printf("Monday");
    if(d==1) printf("Sunday");
    if(d==2) printf("Monday");
    if(d==3) printf("Tuesday");
    if(d==4) printf("Wednesday");
    if(d==5) printf("Thursday");
    if(d==6) printf("Friday");
    if(d==7) printf("Saturday");
return 0;
}
#include <stdio.h>
int main(){
    int x,y,a,b,c,d,e;
    printf("Enter a 5 digit number");
    scanf("%d",&x);
    a = x%10;
    b = (x/10)%10;
    c = (x/100)%10;
    d = (x/1000)%10;
    e = (x/10000)%10;
    y = a*10000+b*1000+c*100+d*10+e;
    if(x==y)
        printf("The reversed number is equal to original number");
    else
        printf("The reversed number is not equal to original number");
    return 0;
}
#include <stdio.h>
int main(){
    int aor,aos,aoa;
    printf("Enter the age of Ram :");
    scanf("%d",&aor);
    printf("Enter the age of Shyam :");
    scanf("%d",&aos);
    printf("Enter the age of Ajay:");
    scanf("%d",&aoa);
    if(aor<aos,aoa)
        printf("Ram is Youngest in Three of them");
    else if (aos<aoa,aor) printf("Shyam is Youngest in Three of them");
    else  if (aoa<aor,aos) printf("Ajay is Youngest in Three of them");
    else printf("It is not possible to determine whom from three of them is youngest");
return 0;
}
// Program to deterine whether a triangle valid or not through input of angles
#include<stdio.h> 
int main(){
    int a1,a2,a3,sum;
    printf("Enter the first angle of triangle: ");
    scanf("%d",&a1);
    printf("Enter the second angle of triangle: ");
    scanf("%d",&a2);
    printf("Enter the third angle of triangle: ");
    scanf("%d",&a3);
    sum =a1+a2+a3;
    if(sum==180)
        printf("Valid Triangle");
    else printf("Invalid Triangle");
    return 0;
}
#include<stdio.h>
int main(){
    int a,b,c,d,e,f,sum;
    printf("Enter the number of notes of Rs. 1: ");
    scanf("%d",&a);
    printf("Enter the number of notes of Rs. 2: ");
    scanf("%d",&b);
    printf("Enter the number of notes of Rs. 5: ");
    scanf("%d",&c);
    printf("Enter the number of notes of Rs. 10: ");
    scanf("%d",&d);
    printf("Enter the number of notes of Rs. 100: ");
    scanf("%d",&e);
    printf("Enter the number of notes of Rs. 500: ");
    scanf("%d",&f);
    sum = a*1+b*2+c*5+d*10+e*100+f*500;
    if(sum%1 == 0) printf("THe total amount can be in %d number of 1 Rs. notes\n",sum/1);
    if (sum%2 == 0) printf("THe total amount can be in %d number of 2 Rs. notes\n",sum/2);
    if (sum%5 == 0) printf("THe total amount can be in %d  number of 5 Rs. notes\n",sum/5);
    if (sum%10 == 0) printf("THe total amount can be in %d number of 10 Rs. notes\n",sum/10);
    if (sum%100 == 0) printf("THe total amount can be in %d numberof 100 Rs. notes\n",sum/100);
    if (sum%500 == 0) printf("THe total amount can be in %d number of 500 Rs. notes\n",sum/500);
    return 0;
}
#include<stdio.h>
#include<stdlib.h> // to use abs() we have to include stdlib.h header file
int main(){
    int i,a;
    printf("Enter the value of the integer");
    scanf("%d",&i);
    a = abs(i);// to return absolute value of function
    printf("%dis the absolute value of the integer",a);
}
#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the values of x1 and y1");
    scanf("%d%d",&x1,&y1);
    printf("Enter the values of x2 and y2");
    scanf("%d%d",&x2,&y2);
    printf("Enter the values of x3 and y3");
    scanf("%d%d",&x3,&y3);
    if((y1 - y2) * (x1 - x3) == (y1 - y3) * (x1 - x2)) printf("Three points lie on same line");
    else printf("Three points doesn't lie on same line");
    return 0;
}
#include <stdio.h>
#include<math.h>
int main(){
    int x,y,a,b,c,x1,y1,r;
    x = -2; y = 1;r = 3;
    printf("Enter the coordinates of point \n");
    scanf("%d %d",&x1,&y1);
    a = pow(x1-x,2);
    b = pow(y1-y,2);
    c = sqrt(a+b);
    if(pow(r,2)==a+b) printf("Point lie on circle");
    else if (c<r) printf("Point lie inside circle");
    else  if(c>r) (printf("Point lie outside circle"));
    return 0;
}
