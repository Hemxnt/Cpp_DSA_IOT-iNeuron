//Pattern Problems

/* 1.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
    printf("\n");
    }
    return 0;
}
*/

/* 2.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            printf("*");
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}
*/

/* 3.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            printf("*");
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}
*/

/* 4.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            printf("*");
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}
*/

/* 5.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

/* 6.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i && j<=10-i)
            printf("*");
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}
*/

/* 7.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<=6-i || j>=5+i)
            printf("*");
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}
*/

/* 8.
#include<stdio.h>
int main(){
    int i,j,n;
    for(i=1;i<=4;i++)
    {
        n=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
            printf("%d",n);
                if(j>3)
                n--;
                else
                n++;
            }
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}
*/

/* 9.
#include<stdio.h>
int main(){
    int i,j,n;
    for(i=1;i<=4;i++)
    {
        n=1;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
            printf("%d",n);
                if(j>3)
                n--;
                else
                n++;
            }
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}
*/

/* 10.
#include<stdio.h>
int main(){
    int i,j,n;
    for(i=1;i<=4;i++)
    {
        n=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
            printf("%d",n);
                if(j<4)
                n++;
                else
                n--;
            }
            else{
            printf(" ");
            if(j==4)
            n--;
            }
        }
    printf("\n");
    }
    return 0;
}
*/

/* 11.
#include<stdio.h>
int main(){
    int i,j,ch;
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
                {
                  printf("%c",ch);
                    if(j>4)
                    ch--;
                    else
                    ch++;
                }
            else
                printf(" ");
        }
    printf("\n");
    }   
    return 0;
}
*/

/* 12.
#include<stdio.h>
int main(){
    int i,j,ch;
    for(i=1;i<=4;i++)
    {
        ch='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",ch);
                if(j<4)
                ch++;
                else
                ch--;
            }
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}
*/

/* 13.
#include<stdio.h>
int main(){
    int i,j,ch;
    for(i=1;i<=7;i++)
    {
        ch='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i || j>=6+i)
            {
            printf("%c",ch);
                if(j<7)
                ch++;
                else
                ch--;
            }
            else{
            printf(" ");
            if(j==7)
            ch--;
            }
        }
    printf("\n");
    }
    return 0;
}
*/

/* 14.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==5)
            printf("*");
            else
            {
                if(j==1 || j==i)
                printf("*");
                else
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
*/

/* 15.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==5)
            printf("*");
            else
            {
                if(j==6-i || j==5)
                printf("*");
                else
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
*/

/* 16.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==5)
            printf("*");
            else
            {
                if(j==6-i || j==4+i)
                printf("*");
                else
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
*/

/* 17.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==1)
            printf("*");
            else
            {
                if(j==6-i || j==4+i)
                printf("*");
                else
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
*/

/* 18.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i<=5)
            {
                if(j>=6-i && j<=4+i)
                    printf("*");
                else
                    printf(" ");
            }
            else
                if(j>=i-4 && j<=14-i)
                    printf("*");
                else
                    printf(" ");
        }
    printf("\n");
    }
    return 0;
}
*/

/* 19.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(j>=4-i && j<=6+i || j>=14-i && j<=16+i)
                printf("*");
            else
                printf(" ");
        }
    printf("\n");
    }
    if(i==4)
        printf("******MySirG*******\n");
    for(i=5;i<=13;i++)
    {
        for(j=2;j<=18;j++)
        {
            if(j>=i-3 && j<=23-i)
                printf("*");
            else
                printf(" ");
        }
    printf(" \n");
    }
    return 0;
}
*/