//Switch Case Problems

/* 1. Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
#include <stdlib.h>
int main(){
    int m;
    while(1)
    {
        printf("Enter Month Number or Press 0 To End Program\n");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
            printf("31 Days\n");
            break;
        case 2:
            printf("28 Days\n");
            break;
        case 3:
            printf("31 Days\n");
            break;
        case 4:
            printf("30 Days\n");
            break;
        case 5:
            printf("31 Days\n");
            break;
        case 6:
            printf("30 Days\n");
            break;
        case 7:
            printf("31 Days\n");
            break;
        case 8:
            printf("31 Days\n");
            break;
        case 9:
            printf("30 Days\n");
            break;
        case 10:
            printf("31 Days\n");
            break;
        case 11:
            printf("30 Days\n");
            break;
        case 12:
            printf("31 Days\n");
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Enter Valid Month Number\n");
            break;
        }
    }
    return 0;
}
*/


// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
/*
#include<stdio.h>
#include <stdlib.h>
int main(){
    int s,n1,n2;
    while(1)
    {
        printf("a. Addition \nb. Subtraction \nc. Multiplication \nd. Division \ne. Exit\n");
        scanf("%c",&s);
        switch(s)
        {
        case 'a':
            printf("Enter Number N1 and N2 \n");
            scanf("%d%d",&n1,&n2);
            printf("Addition of %d and %d = %d\n",n1,n2,n1+n2);
            break;
        case 'b':
            printf("Enter Number N1 and N2 \n");
            scanf("%d%d",&n1,&n2);
            printf("Subtraction of %d and %d = %d\n",n1,n2,n1-n2);
            break;
        case 'c':
            printf("Enter Number N1 and N2 \n");
            scanf("%d%d",&n1,&n2);
            printf("Multiplication of %d and %d = %d\n",n1,n2,n1*n2);
            break;
        case 'd':
            printf("Enter Number N1 and N2 \n");
            scanf("%d%d",&n1,&n2);
            printf("Division of %d and %d = %d\n",n1,n2,n1/n2);
            break;
        case 'e':
            exit(0);
            break;
        }
    }
    return 0;
}
*/

/* 3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>
#include <stdlib.h>
int main(){
    int m;
    while(1)
    {
        printf("Enter week day number (1-7) or Press 0 To End Program\n");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
            printf("Sunshine Day\n");
            break;
        case 2:
            printf("Its a Wonderful day\n");
            break;
        case 3:
            printf("Nice Day\n");
            break;
        case 4:
            printf("what a mesmerzing day\n");
            break;
        case 5:
            printf("Cool Day\n");
            break;
        case 6:
            printf("Beautiful Day\n");
            break;
        case 7:
            printf("Bright Day\n");
            break;
        case 0:
            exit(0);
            break;
        }
    }
    return 0;
}
*/

// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle or not
// d. Exit

/*
#include<stdio.h>
#include<stdlib.h>
int main(){
    while(1)
    {
        int ch,a,b,c;
        printf("\nSelect Option- \na. Check whether a given set of three numbers are lengths of an isosceles triangle or not. \nb. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not. \nc. Check whether a given set of three numbers are equilateral triangle or not. \nd. Exit\n");
        scanf("%c",&ch);
        switch (ch)
        {
        case 'a':
            printf("Enter sides of triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b || b==c || a==c)
                printf("Its isosceles triangle");
            else
                printf("Not Isosceles triangle");
            break;
        case 'b':
            printf("Enter sides of triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a*a==b*b+c*c || b*b==a*a+b*b || c*c==a*a+b*b)
                printf("Its Right angle triangle");
            else
                printf("Not Right angle triangle");
            break;
        case 'c':
            printf("Enter sides of triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b && b==c && a==c)
                printf("Its Equilateral triangle");
            else
                printf("Not Equilateral triangle");
            break;
        case 'd':
            exit(0);
            break;
        }
    }
    return 0;
}
*/

// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// printf("good");
// else if(var == 2)
// printf("better");
// else if(var == 3)
// printf("best");
// else
// printf("invalid");
/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter No b/w 1-3 \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("good");
            break;
        case 2:
            printf("better");
            break;
        case 3:
            printf("best");
            break;
        default:
            printf("invalid");
    }
    return 0;
}
*/

/* 6. Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main(){
    int year;
    printf("Enter year \n");
    scanf("%d",&year);
    switch (year%100==0)  
    {
    case 1:
        switch (year%400==0)
        {
        case 1:
            printf("Leap year\n");
            break;
        case 0:
            printf("Not Leap Year \n");
            break;
        }
        break;
    case 0: 
        switch (year%4==0)
        {
        case 1:  
            printf("Leap Year\n");
            break;
        case 0:
            printf("Not Leap Year\n");
            break;
        }
        break;
    }
    return 0;
}
*/

// 7. Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition . Using the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

/*
#include<stdio.h>
int main(){
    float c,amount=0,total=0;
    printf("enter units\n");
    scanf("%f",&c);
    switch (c<=50)
    {
    case 1:
        amount=c*0.50;
        break;
    case 0:
        switch (c<=150)
        {
        case 1:
            amount=25+(c-25)*0.75;
            break;
        case 0:
            switch (c<=250)
            {
            case 1:
                amount=100 + (c-150)*1.20;
                break;
            case 0:
                amount=220+(c-250)*1.50;
                break;
            }break;
        }break;
        
    }
    total=amount+amount*0.2;
    printf("%f",total);
    return 0;
}
*/

/* 8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
#include<stdio.h>
int main(){
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    switch (n>0)
    {
    case 1:
        printf("%d",-n);
        break;
    case 0:
        printf("%d",-n);
        break;
    }
    return 0;
}
*/

/* 9. Program to Convert even number into its upper nearest odd number Switch Statement.
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    switch (n%2==0)
    {
    case 1:
        printf("%d",n+1);
        break;
    case 0:
        printf("Enter Even Number");
    }
    return 0;
}
*/

/* 10. C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d,root1,root2,imaginary;
    printf("enter value of a ,b ,c \n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    switch (d>0)
    {
    case 1:
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("Roots is %d and %d\n",root1,root2);
        break;
    case 0:
        switch (d==0)
        {
        case 1:
            root1=root2=-b/(2*a);
            printf("Equal Root is %d \n",root1);
            break;
        case 0:
            root1=root2=-b/(2*a);
            imaginary=sqrt(-d)/(2*a);
            printf("Roots is %d+i%d and %d-i%d\n",root1,imaginary,root2,imaginary);
            break;
        }
    }
    return 0;
}
*/