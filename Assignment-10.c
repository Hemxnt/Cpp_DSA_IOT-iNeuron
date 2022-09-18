//Functions in C Language

/* 1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>

float area(float);

int main(){
    printf("%f",area(5));
    return 0;
}

float area(float r)
{
    return (3.14*r*r);
}
*/

/* 2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
int simp(int,int,int);

int main(){
    printf("simple interest = %d ",simp(3500,12,5));
    return 0;
}
int simp(int p,int r,int t)
{
    return (p*r*t)/100;
}
*/

/* 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int check(int);

int main(){
    printf("%d",check(9));   
    return 0;
}
int check(int c)
{
    if(c%2)
        return 0;
    else
        return 1;
}
*/

/* 4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void printN(int);

int main(){
    printN(20);    
    return 0;
}
void printN(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}
*/

/* 5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void printON(int);

int main(){
    printON(20);    
    return 0;
}
void printON(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
    }
}
*/

/* 6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int);

int main(){
    printf("%d",fact(5));    
    return 0;
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
*/

/* 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int comb(int,int);
int fact(int);

int main(){
    printf("%d",comb(4,3));    
    return 0;
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int comb(int n,int r)
{ 
    int c;
    c=fact(n)/(fact(r)*fact(n-r));
    return c;
}
*/

/* 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int arrange(int,int);

int main(){
    printf("%d",arrange(5,4));    
    return 0;
}
int arrange(int n,int r)
{
    int i,s,fn=1,fr=1,fs=1;
    for(i=1;i<=n;i++)
        fn=fn*i;  // factorial of n
    s=n-r;
    for(i=1;i<=s;i++)
        fs=fs*i; // factorial of n-r
    return fn/fs;
}
*/

/* 9. Write a function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int check(int,int);

int main(){
    int num,d;
    printf("Enter Number = ");
    scanf("%d",&num);
    printf("Enter Digit = ");
    scanf("%d",&d);
    printf("%d",check(num,d));    
    return 0;
}
int check(int num,int d)
{
    while(num!=0)
    {
        if(num%10==d)
            return 1;
        else
            num=num/10;
    }
    return 0;
}
*/

/* 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
void prime(int);

int main(){
    prime(36);    
    return 0;
}
void prime(int n)
{
    int i;
    for(i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf("%d,",i);
        }
    }
}
*/