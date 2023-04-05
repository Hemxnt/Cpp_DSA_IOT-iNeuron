// BASICS OF CPP

/* 1. Write a C++ program to print Hello MySirG on the screen.
#include<iostream>
using namespace std;
int main() {
    cout << "Hello MySirG" << endl;
    return 0;
}
*/


/* 2. Write a C++ program to print Hello on the first line and MySirG on the second line using endl.
#include<iostream>
using namespace std;
int main(){
    cout << "Hello" << endl << "MySirG";
    return 0;
}
 */

/* 3. Write a C++ program to calculate the sum of two numbers.
#include<iostream>
using namespace std;
int main(){
    int a=5,b=10;
    cout << "Sum is : " << a+b ;
    return 0;
}
*/

/* 4. Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main(){
    float pi=3.14,r=5;
    cout << "Area is : " << pi*r*r ;
    return 0;
}
*/

/* 5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main(){
    int l=5,b=12,h=8;
    cout << "Vol. of Cuboid is : " << l*b*h ;
    return 0;
}
*/

/* 6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main(){
    int a=5,b=6,c=14;
    float avg=(a+b+c)/3;
    cout << "Avg : " << avg ;
    return 0;
}
*/

/* 7. Write a C++ program to calculate the square of a number
#include<iostream>
using namespace std;
int main(){
    int n=5;
    cout << "Sqaure is : " << n*n;
    return 0;
}
*/


/* 8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main(){
    int a=5,b=10;
    cout << " Before Swap a = " << a << " b = " << b << endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << " After Swap a = " << a << " b = " << b ;
    return 0;
}
*/

/* 9. Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main(){
    int a=10,b=20;
    int ans = (a>b)?a:b;
    cout << ans ;
    return 0;
}
*/


/* 10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main (){
    int s=0;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    for(int i:arr)
        s=s+i;
    cout << s;
    return 0;
}
*/


