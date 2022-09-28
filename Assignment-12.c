// Recursion

// 1. Write a recursive function to print first N natural numbers
/*#include<stdio.h>
void pnat(int);

int main(){
  pnat(10);
}

void pnat(int n){
  if(n>0){
    pnat(n-1);
    printf("%d ",n);
  }
}
*/


// 2. Write a recursive function to print first N natural numbers in reverse order
/*
#include<stdio.h>
void prnat(int);

int main(){
  prnat(10);
  return 0;
}

void prnat(int n){
  if(n>0){
    printf("%d ",n);
    prnat(n-1);
  }
}
*/


// 3. Write a recursive function to print first N odd natural numbers
/*#include<stdio.h>
void ponat(int);

int main(){
  ponat(10);
  return 0;
}

void ponat(int n){
  if(n>0){
    ponat(n-1);
    printf("%d ",2*n-1);
  }
}
*/


// 4. Write a recursive function to print first N odd natural numbers in reverse order
/*#include<stdio.h>
void pronat(int);

int main(){
  pronat(10);
  return 0;
}

void pronat(int n){
  if(n>0){
    printf("%d ",2*n-1);
    pronat(n-1);
  }
}
*/

// 5. Write a recursive function to print first N even natural numbers
/*#include<stdio.h>
void penat(int);

int main(){
  penat(10);
  return 0;
}

void penat(int n){
  if(n>0){
    penat(n-1);
    printf("%d ",2*n);
  }
}
*/

// 6. Write a recursive function to print first N even natural numbers in reverse order
/*#include<stdio.h>
void prenat(int);

int main(){
  prenat(10);
  return 0;
}

void prenat(int n){
  if(n>0){
    printf("%d ",2*n);
    prenat(n-1);
  }
}
*/


// 7. Write a recursive function to print squares of first N natural numbers
/*#include<stdio.h>
void psquare(int);

int main(){
  psquare(10);
  return 0;
}

void psquare(int n){
  if(n>0){
    psquare(n-1);
    printf("%d ",n*n);
  }
}
*/


// 8. Write a recursive function to print binary of a given decimal number
/*#include<stdio.h>
void binary(int);

void binary(int n){
    int p;
    if(n==0)
        return ;
    binary(n>>1);
    printf("%d",n&1);
}
int main(){
    binary(12);
    return 0;
}
*/

// 8. Another Method 
/*#include<stdio.h>
void binary(int);

void binary(int n){
    int p;
    if(n==0)
        return ;
    binary(n/2);
    printf("%d",n%2);
}
int main(){
    binary(12);
    return 0;
}
*/

//9. Write a recursive function to print octal of a given decimal number
/*#include<stdio.h>
void binary(int);

void binary(int n){
    int p;
    if(n==0)
        return ;
    binary(n/8);
    printf("%d",n%8);
}
int main(){
    binary(12);
    return 0;
}
*/


// 10. Write a recursive function to print reverse of a given number
/*#include<stdio.h>
void reverse(int);

void reverse(int n){
    if(n==0)
        return;
    printf("%d",n%10);
    reverse(n/10);
}

int main(){
    reverse(123456);
    return 0;
}
*/
