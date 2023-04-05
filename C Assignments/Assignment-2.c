/* 1-Write a program to print unit digit of a given number
#include<stdio.h>
int main(){
    int x;
    printf("enter any number - ");
    scanf("%d",&x);
    printf("Unit Digit is %d",x%10);
    return 0;
}
*/

/* 2-Write a program to print a given number without its last digit.
#include<stdio.h>
int main(){
    int x;
    printf("enter any number = ");
    scanf("%d",&x);
    printf("Number without last digit is %d",x/10);
    return 0;
}
*/

/* 3-Write a program to swap values of two int variables
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter value\nA= ");
    scanf("%d",&a);
    printf("B= ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped value \nA=%d and B=%d",a,b);
    return 0;

}
*/

/* 4-Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter value\nA= ");
    scanf("%d",&a);
    printf("B= ");
    scanf("%d",&b);
    b=b-a;
    a=a+b;
    b=a-b;
    printf("swapped value\nA= %d and B= %d",a,b);
    return 0;
}
*/

/* 5-Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main(){
    int x,s=0;
    printf("Enter three digit number = ");
    scanf("%d",&x);
    s=s+x%10;
    x=x/10;
    s=s+x%10;
    x=x/10;
    s=s+x;
    printf("%d",s);
}
*/

/* 6-Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main(){
    char ch;
    printf("enter any character = ");
    scanf("%c",&ch);
    printf("ASCII code of %c is %d ",ch,ch);
    return 0;
}
*/

/* 7-Write a program to find the position of first 1 in LSB(least significant bit).
#include<stdio.h>
int main(){
    int x,lsb;
    printf("enter any number = ");
    scanf("%d",&x);
    lsb=x&1;
    printf("lsb is %d",lsb);
    return 0;
} 
*/

/* 8-Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any Number = ");
    scanf("%d",&num);
    if(num&1==0)
    printf("%d is EVEN NUMBER",num);
    else
    printf("%d is ODD NUMBER",num);
    return 0;
}
*/

/* 9-Write a program to print size of an int, a float, a char and a double type variable
#include <stdio.h>
int main(){
    int a;
    float b;
    char c;
    double d;
    
    // Size of Variables
    printf("Size of int: %ld bytes \n", sizeof(a));
    printf("Size of float: %ld bytes \n", sizeof(b));
    printf("Size of char: %ld bytes \n", sizeof(c));
    printf("Size of double: %ld bytes", sizeof(d));
    
    return 0;
}
*/

/* 10-Write a program to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
int main(){
    int x;
    printf("enter any number = ");
    scanf("%d",&x);
    x=(x/10)*10;
    printf("%d",x);
    return 0;
}
*/

/* 11-Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
#include<stdio.h>
int main(){
    int n,d;
    printf("enter any number = ");
    scanf("%d",&n);
    printf("enter any digit = ");
    scanf("%d",&d);
    n=n*10+d;
    printf("%d",n);
    return 0;
}
*/

/* 12-Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main(){
    float inr,usd;
    printf("Enter Amount in INR = ");
    scanf("%f",&inr);
    usd=inr/76.23;
    printf("%finr convert to %fusd",inr,usd);
    return 0;
}
*/

/* 13-Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main(){
    int x,s;
    printf("enter three digit number = ");
    scanf("%d",&x);
    s=(x%10)*100;
    s=s+x/10;
    printf("%d",s);
    return 0;    
}
*/