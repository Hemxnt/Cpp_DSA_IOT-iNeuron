//Use any loop

/* 1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main(){
    int i,s=0,n;
    printf("enter no = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+i;
    printf("sum = %d",s);
    return 0;
}
*/

/* 2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("enter no = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       s=s+2*i;
    printf("sum = %d",s);
    return 0;
}
*/

/* 3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("enter no = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       s=s+2*i-1;
    printf("sum = %d",s);
    return 0;
}
*/

/* 4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("enter no = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       s=s+i*i;
    printf("sum = %d",s);
    return 0;
}
*/

/* 5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("enter no = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       s=s+i*i*i;
    printf("sum = %d",s);
    return 0;
}
*/

/* 6. Write a program to calculate factorial of a number
#include<stdio.h>
int main(){
    int i,n,s=1;
    printf("enter no = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       s=s*(n+1-i);
    printf("factorial = %d",s);
    return 0;
}
*/

/* 7. Write a program to count digits in a given number
#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter no = ");
    scanf("%d",&n);
    while(n!=0)
    {   n=n/10;
        count++;
    }
    printf("count = %d",count);
    return 0;
}
*/

/* 8. Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main(){
    int i,n,c=0;
    printf("enter no = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0)
            c++;
    }
    if(c==2)
        printf("Prime No");
    else
        printf("Not Prime");
    return 0;
}
*/

/* 9. Write a program to calculate LCM of two numbers
#include <stdio.h>

int main() {

    int n1, n2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
*/


/* 10. Write a program to reverse a given number
#include<stdio.h>
int main(){
    int n,r;
    printf("enter no = ");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
    return 0;
}
*/