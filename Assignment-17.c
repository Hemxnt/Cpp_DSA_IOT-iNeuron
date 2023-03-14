// String Basics in C Language

/* 1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
int main(){
    char name[]="hemant";
    int len=0;
    for (int i = 0; name[i]; ++i) {
        len++;
    }
    printf("length of the given string is %d",len);
}
*/

/* 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
int main(){
    char str[]="mississippi";
    char ch = 's';
    int count=0;
    for (int i = 0; str[i]; ++i) {
        if(str[i]==ch)
            count++;
    }
    printf("occurrence of %c is %d",ch,count);
}
*/


/* 3. Write a program to count vowels in a given string
#include <stdio.h>
int main(){
    char str[]="hemant";
    char vowels[]="aeiouAEIOU";
    int count=0;
    for (int i = 0; str[i]; ++i) {
        for (int j = 0; vowels[j]; ++j) {
            if(str[i]==vowels[j])
                count++;
        }
    }
    printf("%d",count);
}
*/

/* 4. Write a program to convert a given string into uppercase
#include <stdio.h>
#include <string.h>
int main(){
    char name[]="hemant";
    printf("%s",strupr(name));
}
*/
/* 5. Write a program to convert a given string into lowercase
#include <stdio.h>
#include <string.h>
int main(){
    char name[]="HEMANT";
    printf("%s",strlwr(name));
}
*/
/* 6. Write a program to reverse a string.
#include <stdio.h>
#include <string.h>
int main(){
    char name[]="HEMANT";
    printf("%s",strrev(name));
    return 0;
}
*/
/* 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
int main(){
    char str[]="hemant@21";
    int count_alp=0, count_digit=0,count_special=0;
    for (int i = 0; str[i]; ++i) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            count_alp++;
        else if('0' <= str[i] && str[i] <= '9')
            count_digit++;
        else
            count_special++;

    }
    printf("Alp = %d Digits = %d Special = %d",count_alp,count_digit,count_special);
}
*/

/* 8. Write a program in C to copy one string to another string.
#include <stdio.h>
#include <string.h>
int main(){
    char str1[]="hemant";
    char str2[strlen(str1) + 1];
    for (int i = 0; str1[i]; ++i)
        str2[i]=str1[i];
    printf("%s",str2);
}
*/


/* 9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
int main(){
    char str[]="hemant";
    for (int i = 0; str[i]; ++i) {
        for (int j = i+1; str[j]; ++j) {
            if(str[i]>str[j]){
                char temp = str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s ",str);
}
*/

// 10. Write a program in C to Find the Frequency of Characters.
/*#include <stdio.h>
int main(){
    char str[]="mississippi";
    int freq_arr[150]={0};
    for (int i = 0; str[i] ; ++i)
        freq_arr[str[i]]++;
    for (int i = 0; i < 150; ++i){
        if(freq_arr[i]!=0)
            printf("%c ==> %d \n",i,freq_arr[i]);
    }
}
*/