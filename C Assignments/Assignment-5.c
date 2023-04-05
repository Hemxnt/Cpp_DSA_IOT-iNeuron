//More on Iterative Control Statements

/* 1. Write a program to print MySirG N times on the screen
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter Number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("Mysirg\n");
    return 0;
}
*/

/* 2. Write a program to print the first N natural numbers.
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number = ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
        printf("%d\n",i);
    return 0;
}
*/

/* 3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main(){
    int i,n;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d\n",n+1-i);
    return 0;
}
*/

/* 4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main(){
    int i,n;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",2*i-1);
    return 0;
}
*/

/* 5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main(){
    int i,n;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",2*n-2*i+1);
    return 0;
}
*/

/* 6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main(){
    int i,n;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",i*2);
    return 0;
}
*/

/* 7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main(){
    int i,n;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",2*n+2-i*2);
    return 0;
}
*/

/* 8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main(){
    int i,n;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",i*i);
    return 0;
}
*/

/* 9. Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main(){
    int i,n;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",i*i*i);    
    return 0;
}
*/

/* 10. Write a program to print a table of N.
#include<stdio.h>
int main(){
    int i,n;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        printf("%d X %d = %d \n",n,i,n*i);
    return 0;
}
*/