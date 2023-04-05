// More on functions in C Language

/* 1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int,int);
int lcm(int a , int b)
{
    int l;
    for(l=a>b?a:b;l<=a*b;l++)
        if(l%a==0&&l%b==0)
        break;
    return l;
}
int main(){
    printf("%d",lcm(4,6));
    return 0;
}
*/


/* 2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int,int);

int hcf(int a,int b)
{
    int h;
    for(h=a<b?a:b;h>=1;h--)
    {
        if(a%h==0 && b%h==0)
            break;
    }
    return h;
}
int main(){
    printf("%d",hcf(12,30));
    return 0;
}
*/


/* 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime(int);

int prime(int n)
{
    int i,flag=0;
    for(i=2;i<n/2;i++){
        if(n%i==0)
            flag=1;
            break;
    }
    if(flag==0)
        return 1;
    else 
        return 0;
}
int main(){
    int n,x;
    printf("enter positive number = ");
    scanf("%d",&n);
    x=prime(n);
    if(x==1)
        printf("Prime Number");
    else
        printf("Not Prime");
    return 0;
}
*/


/* 4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int primeN(int);

int primeN(int a)
{
    int i,n,flag=0;
    for(n=a;1;n++)
    {
        flag=0;
        for(i=2;i<n/2;i++)
        {
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(n>a)
        {
            if(flag==0)
                return n;
        }
    }  
}

int main(){
    printf("%d",primeN(7));
    return 0;
}
*/

/* 5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void fnprime(int);

void fnprime(int a)
{
    int i,n,flag=0,count=0;
    for(n=2;1;n++){
        flag=0;
        for(i=2;i<n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",n);
            count++;
        }
        if(count==a)
            break;
    }  
}

int main(){
    int n;
    printf("enter no. = ");
    scanf("%d",&n);
    fnprime(n);
    return 0;
}
*/

/* 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void primeN(int , int );

void primeN(int a, int b){
    int i,n,flag=0;
    for(n=a;n<=b;n++){
        flag=0;
        for(i=2;i<n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",n);
        }
    }
}

int main(){
    int a,b;
    printf("Enter Two Number \n");
    scanf("%d %d",&a,&b);
    primeN(a,b);
    return 0;
}
*/


/* 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibo(int);

int main(){
    int n;
    printf("enter no. = ");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
void fibo(int n){
    int a=1,b=0,f,i;
    for(i=1;i<=n;i++){
        f=a+b;
        a=b;
        b=f;
        printf("%d ",f);
    }
}
*/


/* 8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
void pascal(int);
int comb(int,int);
int fact(int);

int main(){
    int a;
    printf("Enter no. of lines for PASCAL Trangle\n");
    scanf("%d",&a);
    pascal(a);
    return 0;
}
void pascal(int n){
    int i,j;
    n=n-1;
   for(i = 0; i <= n; i++) {
      for(j = 0; j <= n-i; j++)
         printf("  ");
         
      for(j = 0; j <= i; j++)
         printf(" %3d", comb(i, j));

      printf("\n");
   }
}
int comb(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int fact(int n){
    int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
*/


/* 9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
void sqaure(int );

int main(){
    int n;
    printf("enter number to find square = ");
    scanf("%d",&n);
    sqaure(n);
    return 0;
}
void sqaure(int n){
    printf("sqaure of %d is %d",n,n*n);
}
*/

/* 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int fact(int);

int fact(int n){
    int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int series(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum=sum+fact(i)/i;
    }
    return sum;
}

int main(){
    printf("%d",series(5));
    return 0;
}
*/