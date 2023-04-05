// Array in C Language

/* 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main(){
    int s=0,i,arrsum[10];
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arrsum[i]);
        s=s+arrsum[i];
    }
    printf("sum is %d",s);
    return 0;
}
*/


/* 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main(){
    int avg[10],s=0;
    printf("Enter 10 Numbers ");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&avg[i]);
        s=s+avg[i];
    }
    printf("Avg is %d",s/10);
    return 0;
}
*/


/* 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main(){
    int arr[10],even=0,odd=0;
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            even=even+arr[i];
        else
            odd=odd+arr[i];       
    }
    printf("Sum of Even Number = %d \n Sum of Odd Number = %d",even,odd);
    return 0;
}
*/


/* 4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main(){
    int arr[10],greatest=0;
    printf("Enter 10 Numbers\n");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        if(greatest<arr[i])
            greatest=arr[i];
    }
    printf("greatest = %d",greatest);
    return 0;
}
*/


/* 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main(){
    int arr[10],smallest;
    printf("Enter 10 Numbers\n");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        smallest=arr[0];
        if(smallest>=arr[i])
            smallest=arr[i];
    }
    printf("smallest = %d",smallest);
    return 0;
}
*/


/* 6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>


int main(){
    int arr[10],temp;
    printf("Enter 10 Random\n");

    // take values from user 
    for(int i=0;i<=9;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<=9;j++)
        {
            if(arr[i]>arr[j])
            {
                //swap
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
        printf("%d",arr[i]);
    
    return 0;
}
*/

/* 7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main(){
    int arr[999999],length;
    printf("Enter length of a array - \n");
    scanf("%d",&length);
    for(int i=0;i<length;i++)
    {
        printf("Enter Value of array at index %d \n",i);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<length-1;i++)
    {
        int temp;
        for(int j=i+1;j<length;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d ",arr[length-2]);
    return 0;
}
*/

/* another approch for ques no. 7 :----

#include<stdio.h>
int main(){
    int arr[10]={5,6,8,9,1,2,56,47,25,31};
    int largest=arr[0]; //let
    int s_largest=0;
    for(int i=1;i<10;i++)
    {
        if(arr[i]>largest)
            {
                s_largest=largest;
                largest=arr[i];
            }
        else if(arr[i]>s_largest)
            s_largest=arr[i];
    }
    printf("Second largest value is %d",s_largest);
    return 0;
}
*/

/* 8. Write a program to find the second smallest number in an array.Take array values from the user.
#include<stdio.h>
int main(){
    int arr[999999],length;
    printf("Enter length of an array \n");
    scanf("%d",&length);
    printf("Enter Elements in array \n");
    for(int i=0;i<length;i++)
        scanf("%d",&arr[i]);
    int smallest=arr[0];
    int s_smallest=arr[length-1];
    for(int i=1;i<length;i++)
    {
        if(arr[i]<smallest)
        {
            s_smallest=smallest;
            smallest=arr[i];
        }

        else if(arr[i]<s_smallest)
                s_smallest=arr[i];
    }
    printf("Second Smallest Value is %d",s_smallest);
    return 0;
}
*/
// another approch for ques 8 is by sorting and printf arr[1] :-----


/* 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include<stdio.h>
int main(){
    int arr[999999],length;
    printf("Enter length of an array \n");
    scanf("%d",&length);
    printf("Enter Elements in array \n");
    for(int i=0;i<length;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<length;i++)
        printf("%d ",arr[length-1-i]);
    return 0;
}
*/


/* 10. Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>
int main(){
    int arr[999999],c_arr[999999],length;
    printf("Enter length of an array \n");
    scanf("%d",&length);
    printf("Enter Elements in array \n");
    for(int i=0;i<length;i++)   
    {
        scanf("%d",&arr[i]);
        c_arr[i]=arr[i];
    }
    for(int i=0;i<length;i++)
        printf("%d ",c_arr[i]);
    return 0;
}
*/