//Iterative Control Statements (Part - 2)

/* 1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main(){
    int i,f,v1=1,v2=0,n;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=v1+v2;
        v1=v2;
        v2=f;
    }
    printf("Nth Term = %d",f);
    return 0;
} 
*/



/* 2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main(){
    int i,v1=1,v2=0,f,n;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    f=v1+v2;
    printf("%d ",f);
    v1=v2;
    v2=f;
    }
    return 0;
}
*/ 


/* 3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main(){
    int i,n,f=0,v1=1,v2=0;
    printf("Enter Your Number = ");
    scanf("%d",&n);
    while(f<=n)
    {
        f=v1+v2;
        if(f==n){
            printf("%d is Present in Fibonacci Series",n);
            break;
        }
        v1=v2;
        v2=f;
    }
    if(f!=n)
    printf("%d is not present in fibonacci series",n);
    return 0;
}
*/

/* 4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main(){
    int a,b,i,hcf;
    printf("enter two numbers \n");
    scanf("%d %d",&a,&b);
    int min = a<b ? a : b ; 
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    printf("hcf is %d",hcf);
    return 0;
}
*/

/* 5. Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main(){
    int a,b,i,hcf;
    printf("enter two numbers \n");
    scanf("%d %d",&a,&b);
    int min = a<b ? a : b ; 
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    if(hcf==1)
        printf("Co-Prime");
    else
        printf("Not Co-Prime");
    return 0;
}
*/

/* 6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main(){
    int i,n,flag=0;
    printf("prime numbers under 100\n");
    for(n=1;n<=100;n++)
    {
        flag=0;
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
                flag=1;
        }
        if(flag==0)
            printf("%d ",n);
    }
    return 0;
}
*/

/* 7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main(){
    int i,n,flag=0,a,b;
    printf("enter two no.\n");
    scanf("%d %d",&a,&b);
    for(n=a;n<=b;n++)
    {
        flag=0;
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
                flag=1;
        }
        if(flag==0)
            printf("%d ",n);
    }
    return 0;
}
*/

/* 8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main(){
    int i,n,flag=0,a;
    printf("enter no.\n");
    scanf("%d",&a);
    for(n=a;1;n++)
    {
        flag=0;
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
                flag=1;
        }
        if(n>a)
        {    
            if(flag==0)
            {
            printf("%d",n);
            break;
            }
        }
    }
    return 0;
}
*/

/* 9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
#include <math.h>

int main(){
    int n,chk,a,arm=0,count=0;
    printf("Enter Your Number to check armstrong number !!! \n");
    scanf("%d",&n);
    chk=n;
    while(chk!=0)
    {
        count++;
        chk=chk/10;
    }
    a=n;
    while(a!=0)
    {
        chk=a%10;
        arm=arm+pow(chk,count);
        a=a/10;
    }
    if(arm==n)
        printf("%d is a armstrong number",n);
    else
        printf("Not armstrong number");
    return 0;
}
*/

/* 10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
#include <math.h>

int main(){
    int n,chk,a,arm,count=0;
    printf("all armstrong number under 1000!!! \n");
    for(n=1;n<=1000;n++)
    {
        arm=0;
        chk=n;
        while(chk!=0)
        {
            a=chk%10;
            arm=arm+a*a*a;
            chk=chk/10;
        }
        if(arm==n)
            printf("%d ",n);
    }
    return 0;
}
*/


// **** 🅿🅻🅴🅰🆂🅴 🅲🅷🅴🅲🅺 🆃🅷🅸🆂 🆀🆄🅴🆂 ***** 🅽🅾🆃 🅶🅴🆃🆃🅸🅽🅶 🅳🅴🆂🅸🆁🅴🅳 🅾🆄🆃🅿🆄🆃 !!!!!!

/* 11. write a program to find the position of first 1 in LSB
#include<stdio.h>
int main(){
    int count=0,n;
    printf("enter no.\n");
    scanf("%d",&n);
    while(n)
    {
        if(n&1==0)
        {
            count++;
            n=n>>1;
        }
    }
    printf("%d",count);
    return 0;
}
*/