// Array and Functions in C Language

/* 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>

int greatest(int arr[])
{
    int great=arr[0];
    for(int i=1;i<10;i++)
    {
        if(great<arr[i])
            great=arr[i];
    }
    return great;
}
int main(){
    int arr[10]={4,7,2,4,7,8,6,9,1,1};
    printf("%d",greatest(arr)); 
    return 0;
}
*/


/* 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>

int smallest(int a[])
{
    int small=a[0];
    for(int i=1;i<10;i++)
    {
        if(small>a[i])
            small=a[i];
    }
    return small;
}

int main(){
    int a[10]={3,4,5,6,7,2,1,6,9,4};
    printf("%d",smallest(a));
    return 0;
}
*/


/* 3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>

int sort(int a[], int length)
{
    int temp;
    for (int i = 0; i < length-1; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    return a;
}

void printArray(int a[],int length){
    int i = 0;
    while(i<length){
        printf("%d", a[i]);
        i++;
    }
}

int main(){
    int length,a[99999], sortedArray;
    printf("Sorting\nEnter length of a array\n");
    scanf("%d",&length);
    printf("Enter Elements in Array\n");
    for(int i=0;i<length;i++)
        scanf("%d",&a[i]);
    sortedArray = sort(a,length);
    printArray(a, length);
    return 0;
}
*/


/* 4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include<stdio.h>
void rotate(int arr[],int n)
{
    int temp;
    while(n!=0)
    {
        temp=arr[0];
        for(int i=0;i<4;i++)
            arr[i]=arr[i+1];
        arr[4]=temp;
        n--;
    }
    for(int i=0;i<5;i++)
        printf("%d,",arr[i]);
}

int main(){
    int arr[5]={32,29,40,12,70};
    int n=2;
    rotate(arr,n);    
    return 0;
}
*/

/* 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include<stdio.h>
int same(int arr[] , int size ){
    for(int i=0 ; i<size ; i++){
        if(arr[i]==arr[i+1]) {
            return arr[i];
            break;
        }
    }
}
int main(){
    int arr[]={5,1,3,4,5,5};
    int size=6;
    printf("%d",same(arr,size));
    return 0;
}
*/


/* 6. Write a function in C to read n number of values in an array and display it in reverse order.
#include <stdio.h>
int rev(int arr[],int size){
    for(int i=size-1 ; i>=0 ; i--){
        printf("%d  ",arr[i]);
    }
    return 1;
}
int main(){
    int arr[]={4,5,1,3,46,4,7};
    int size=7;
    rev( arr, size);
    return 0;
}
*/


/* 7. Write a function in C to count a total number of duplicate elements in an array.

#include <stdio.h>
int dupli(int arr[],int size){
    int count=0;
    for(int i=0 ; i<size-1 ; i++){
        for(int j=i+1 ; j<size ; j++) {
            if(arr[i]==arr[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    int arr[]={1,3,1,4,5,6,4,};
    int size=7;
    printf("%d",dupli(arr,size));
    return 0;
}
*/

/* 8. Write a function in C to print all unique elements in an array.

#include <stdio.h>
int unique(int arr[],int size){
    for(int i=0 ; i<size-1 ; i++){
        int count=1;
        for(int j=0 ; j<size ; j++) {
            if(arr[i]==arr[j] && i!=j){
                count=0;
                break;
            }
        }
        if(count)
            printf("%d ", arr[i]);
    }
    return 1;
}
int main(){
    int arr[]={1,3,1,4,5,6,4,};
    int size=7;
    unique(arr,size);
    return 0;
}
*/

/* 9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include <stdio.h>

void mergeD(int arr1[] , int arr2[] ,int merge_arr[],int size){
    int i=0 , j=0 ;
    for(int k=0 ; k<size ; k++){
        if(arr1[i]>=arr2[j]) {
            merge_arr[k] = arr1[i];
            i++;
        }
        else{
            merge_arr[k]=arr2[j];
            j++;
        }
    }
}
int main(){
    int arr1[]={10,8,6,4,2,};
    int arr2[]={9,7,5,3,1,};
    int merge_arr[10];
    int size=10;
    mergeD(arr1,arr2,merge_arr,size);
    printf("Merged Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", merge_arr[i]);
    }
}
*/

/* 10. Write a function in C to count the frequency of each element of an array.
#include <stdio.h>

void freq(int arr[],int size,int freq_arr[]){
    for(int i=0 ; i<size ; i++){
        freq_arr[arr[i]]++;
    }
    for(int i=0 ; i<size ; i++){
        printf("Frequency of %d = %d \n",arr[i],freq_arr[arr[i]]);
    }
}
int main(){
    int arr[]={1,3,4,1,3,3,5,4,1,8,4,2,4,6,1};
    int size=15;
    int freq_arr[20]={0}; // size of arr must be greater than the greatest element in the given array !!!
    freq(arr,size,freq_arr);
    return 0;
}
*/