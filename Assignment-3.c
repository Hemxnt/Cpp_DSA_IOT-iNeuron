/* 1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main(){
    int x;
    printf("enter any number = ");
    scanf("%d",&x);
    if (x>0)
        printf("Postive");
    else 
        printf("Non-Positive");
    return 0;
}
*/

/* 2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main(){
    int x;
    printf("enter any number = ");
    scanf("%d",&x);
    if(x%5)
        printf("Not Divisible by 5");
    else
        printf("divisible by 5");
    return 0;
}
*/

/* 3. Write a program to check whether a given number is an even number or an odd number.
#include<stdio.h>
int main(){
    int x;
    printf("enter any number = ");
    scanf("%d",&x);
    if(x%2)
        printf("ODD");
    else
        printf("EVEN");
    return 0;
}
*/

/* 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main(){
    int x;
    printf("enter any number = ");
    scanf("%d",&x);
    if(x&1)
        printf("OODD");
    else
        printf("EVEN");
    return 0;

}
*/

/* 5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main(){
    int x;
    printf("enter any number = ");
    scanf("%d",&x);
    if(x<1000)
        printf("Yes,Three Digit Number");
    else
        printf("Not Three Digit Number");
    return 0;
}
*/

/* 6. Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter number \nA = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    if(a>=b)
        printf("%d",a);
    else
        printf("%d",b);
    return 0;
}
*/

/* 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter value of roots\na = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);
    if(b*b-4*a*c>0)
        printf("real & distinct");
    if(b*b-4*a*c=0)
        printf("real & equal");
    if(b*b-4*a*c<0)
        printf("imaginary roots");
    return 0;
}
*/

/* 8. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter Year = ");
    scanf("%d",&year);
    if(year%100==0&&year%400==0||year%100!=0&&year%4==0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");
    return 0;
}
*/

/* 9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter number \nA = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);
    if(a>b&&a>c)
        printf("%d",a);
    if(b>c)
        printf("%d",b);
    else
        printf("%d",c);
    return 0;
}
*/

/* 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main(){
    int cp,sp,pp,lp;
    printf("Cost Price = ");
    scanf("%d",&cp);
    printf("Selling Price = ");
    scanf("%d",&sp);
    pp=(sp-cp)*100/cp;
    lp=(cp-sp)*100/cp;
    printf("Profit Percentage = %d% \nLoss Percentage = %d% ",pp,lp);    
    return 0;
}
*/

/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
#include<stdio.h>
int main(){
    int p,c,m,b,e,sum;
    printf("Physics Marks = ");
    scanf("%d",&p);
    printf("Chemistry Marks = ");
    scanf("%d",&c);
    printf("Maths Marks = ");
    scanf("%d",&m);
    printf("Biology Marks = ");
    scanf("%d",&b);
    printf("English Marks = ");
    scanf("%d",&e);
    sum=p+c+m+b+e;
    if(p>33&&c>33&&m>33&&b>33&&e>33)
        printf("Exam Passed");
    else
        printf("Exam Failed");
    return 0;
}
*/

/* 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any alphabet = ");
    scanf("%c",&ch);
    if(97<=ch&&ch<=122)
        printf("lowercase");
    else
        printf("Uppercase");
    return 0;
}
*/

/* 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main(){
    int n;
    printf("enter number = ");
    scanf("%d",&n);
    if(n%3==0)
        printf("Divisible by 3\n");
    if(n%2==0)
        printf("Divisible by 2");
    if(n%3!=0&&n%2!=0)
        printf("not divisible 3 and 2 both");
    return 0;
}
*/

/* 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main(){
    int n;
    printf("enter number = ");
    scanf("%d",&n);
    if(n%7==0)
        printf("Divisible by 7\n");
    if(n%3==0)
        printf("Divisible by 3");
    if(n%7!=0&&n%3!=0)
        printf("not divisible 7 nor 3");
    return 0;
}
*/

/* 15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main(){
    int n;
    printf("enter number = ");
    scanf("%d",&n);
    if(n==0)
        printf("zero");
    if(n>0)
        printf("Positive");
    if(n<0)
        printf("Negative");
    return 0;
}
*/

/* 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main(){
    char ch;
    printf("enter any character = ");
    scanf("%c",&ch);
    if(48<=ch && ch<=57)
        printf("Digit");
    else if(65<=ch&&ch<=90)
        printf("Uppercase");
    else if(97<=ch&&ch<=122)
        printf("Lovercase");
    else
        printf("Special Character");
    return 0;
}
*/

/* 17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Side A = ");
    scanf("%d",&a);
    printf("Side B = ");
    scanf("%d",&b);
    printf("Side C = ");
    scanf("%d",&c);
    if( (a+b)>c && (b+c)>a && (a+c)>b)
        printf("Valid Triangle");
    else
        printf("Not Valid Triangle");    
    return 0;
}
*/

/* 18. Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main(){
    int m;
    printf("enter month no = ");
    scanf("%d",&m);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        printf("31 Days");
    else if(m==2)
        printf("28 Days");
    else
        printf("30 Days");
    return 0;
}
*/
