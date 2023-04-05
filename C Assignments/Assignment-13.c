// More on Recursion

// 1. Write a recursive function to calculate sum of first N natural numbers
/*#include<stdio.h>
int sum_natural(int);

int main(){
  printf("%d",sum_natural(100));
}

int sum_natural(int n){
    if(n==1)
        return 1;
    return sum_natural(n-1)+n;
}
*/

/* 2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sum_odd(int);

int main(){
  printf("%d",sum_odd(10));
}

int sum_odd(int n){
    if(n==1)
        return 1;
    return sum_odd(n-1)+2*n-1;
}
*/


// 3. Repeat Question in Assignment sheet !!!


// 4. Write a recursive function to calculate sum of squares of first n natural numbers
/*#include<stdio.h>
int sum_Square(int);

int sum_Square(int n){
    if(n==1)
        return 1;
    return sum_Square(n-1)+n*n;
}

int main(){
    printf("%d",sum_Square(10));
    return 0;
}
*/


/* 5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sum_digits(int);

int sum_digits(int n){
    if(n==0)
        return 0;
    return sum_digits(n/10)+n%10;
}

int main(){
    printf("%d",sum_digits(555));
    return 0;
}
*/


// 6. Write a recursive function to calculate factorial of a given number
/*#include<stdio.h>
int fact(int);

int fact(int n){
    if(n==1)
        return 1;
    return fact(n-1)*n;
}

int main(){
    printf("%d",fact(5));
    return 0;
}
*/

/* 7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int,int);

int hcf(int a,int b){
    int max=a>b?a:b;
    int min=a<b?a:b;
    if(max%min==0)
        return min;
    hcf(max%min,min);
}

int main(){
    printf("%d",hcf(15,6));
    return 0;
}
*/


/* 8. Write a recursive function to print first N terms of Fibonacci series

#include<stdio.h>
int fibonacci(int);

int fibonacci(int n){
    if(n==0 || n==1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n=5;
    for(int i=0;i<=5;i++){
        printf("%d",fibonacci(i));
    }
    return 0;
}
*/


/* 9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int countdigit(int);

int countdigit(int n){
    int count=0;
    if(n==1)
        return 1;
    return countdigit(n/10)+1;
        
}

int main(){
    printf("%d",countdigit(123456789));
    return 0;
}
*/

/* 10. Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
*/