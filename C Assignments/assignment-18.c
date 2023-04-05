// String and Functions in C Language

/* 1. Write a function to calculate length of the string
#include <stdio.h>
int len(char str[]){
    int count=0;
    for (int i = 0; str[i]; ++i)
        count++;
    return count;
}
int main(){
    char str[]="hemant";
    printf("%d",len(str));
    return 0;
}
*/


/* 2. Write a function to reverse a string.
#include <stdio.h>
char* rev(char str[], int len){
    for (int i = 0; i < len/2; ++i){
        char temp = str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    return str;
}
int main(){
    char str[]="hemant";
    int len=0;
    for (int i = 0; str[i]; ++i)
        len++;
    printf("%s",rev(str,len));
    return 0;
}
*/

/* 3. Write a function to compare two strings.
#include <stdio.h>
int compare(char str1[], char str2[]){
    int i = 0;
    while (str1[i] && str2[i]) {
        if (str1[i] != str2[i])
            return (str1[i] < str2[i]) ? -1 : 1;
        i++;
    }
    return (str1[i] == str2[i]) ? 0 : ((str1[i] < str2[i]) ? -1 : 1);
}
//0 if they are equal,
//-1 if the first string is less than the second,
//1 if the first string is greater than the second.

int main(){
    char str1[] = "hemant";
    char str2[] = "hemant";
    printf("%d\n", compare(str1, str2)); // should print 0

    char str3[] = "hemant";
    char str4[] = "hem";
    printf("%d\n", compare(str3, str4)); // should print 1

    char str5[] = "hem";
    char str6[] = "hemant";
    printf("%d\n", compare(str5, str6)); // should print -1
    return 0;
}
*/

/* 4. Write a function to transform string into uppercase
#include <stdio.h>
char* upr(char str[]){
    for (int i = 0; str[i] ; ++i)
        str[i]-= 32;
    return str;
}
int main(){
    char str[]="hemant";
    printf("%s",upr(str));
    return 0;
}
*/

/* 5. Write a function to transform a string into lowercase
#include <stdio.h>
char* upr(char str[]){
    for (int i = 0; str[i] ; ++i)
        str[i]+= 32;
    return str;
}
int main(){
    char str[]="HEMANT";
    printf("%s",upr(str));
    return 0;
}
*/

/* 6. Write a function to check whether a given string is an alphanumeric string or not.(Alphanumeric string must contain at least one alphabet and one digit)
#include <stdio.h>
int alphanumeric(char str[]){
    int alpha =0,numeric = 0 ;
    for (int i = 0; str[i] ; ++i) {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            alpha = 1;
        if(str[i] >= '0' && str[i] <= '9')
            numeric = 1;
    }
    if(alpha == numeric == 1)
        return 1;
    else
        return -1;
}
int main(){
    char str[]="hemant21";
    printf("%d",alphanumeric(str));
    return 0;
}
*/

/* 7. Write a function to check whether a given string is palindrome or not.
#include <stdio.h>
int palindrome(char str[]){
    int len=0;
    for (int i = 0; str[i] ; ++i)
        len++;
    for (int i = 0; i < len/2; ++i) {
        if(str[i]==str[len-1-i])
            return 1;
        else
            return -1;
    }
}
int main(){
    char str1[]="tenet";
    char str2[]="hemant";
    printf("%d \n",palindrome(str1)); // 1 if palindrome
    printf("%d",palindrome(str2)); // -1 if not palindrome
    return 0;
}
*/

/* 8. Write a function to count words in a given string
#include <stdio.h>
int count_word(char str[]){
    int count=0;
    for (int i = 0; str[i] ; ++i){
        if(str[i]==' ')
            count++;
    }
    return count+1;
}
int main(){
    char str[]="tom is a cat";
    printf("%d",count_word(str));
    return 0;
}
*/

/* 9. Write a function to reverse a string word wise. (For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )
#include <stdio.h>

void swap(char a[], int i, int j) {
    char temp;
    while(i < j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char a[] = "tom is a cat";
    int i = 0, start = 0, end = 0, flag = 0;
    while(a[i]) {
        while(a[i] != ' ' && a[i] != '\0') {
            end++;
            i++;
        }
        swap(a, start, end - 1);
        if(a[i] == '\0') {
            flag = 1;
            break;
        }
        start = end + 1;
        end++;
        i++;
    }
    swap(a, 0, i - 1);
    printf("%s", a);
    return 0;
}
*/

/* 10. Write a function to find the repeated character in a given string.
#include <stdio.h>
void repeated(char str[]){
    int freq_arr[150]={0};
    for (int i = 0; str[i] ; ++i)
        freq_arr[str[i]]++;
    for (int i = 0; i < 150; ++i){
        if(freq_arr[i]!=0)
            printf("%c ==> %d \n",i,freq_arr[i]);
    }
}
int main(){
    char str[]="mississippi";
    repeated(str);
}
*/