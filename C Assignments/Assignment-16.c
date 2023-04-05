// Multi-Dimensional Array in C Language

/* 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
int main(){
    int a[3][3]={1,2,3,
                 4,5,6,
                 7,8,9};
    int b[3][3]={1,2,3,
                 4,5,6,
                 7,8,9};
    int sum[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d, ", sum[i][j]);
        }
    printf("\n");
    }
    return 0;
}
*/
/* 2. Write a program to calculate the product of two matrices each of order 3x3.
#include <stdio.h>
int main(){
    int a[3][3]={1,2,3,
                 4,5,6,
                 7,8,9};
    int b[3][3]={1,2,3,
                 4,5,6,
                 7,8,9};
    int c[3][3] = {{0, 0, 0},
                   {0, 0, 0},
                   {0, 0, 0}};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d, ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/* 3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
int main(){
    int a[3][3]={1,2,3,
                 4,5,6,
                 7,8,9}
    int t[3][3] = {0, 0, 0,
                   0, 0, 0,
                   0, 0, 0};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            t[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d, ",t[i][j]);
        }
        printf("\n");
    }
}
*/

/* 4. Write a program in C to find the sum of right diagonals of a matrix.
#include <stdio.h>
int main(){
    int a[3][3]={1,2,3,
                 4,5,6,
                 7,8,9} ;
    int s = 0;
    for (int j = 0; j < 3; ++j) {
        s+=a[j][2-j];
    }
    printf("%d",s);
}
*/


/* 5. Write a program in C to find the sum of left diagonals of a matrix.
#include <stdio.h>
int main(){
    int a[3][3]={1,2,3,
                 4,10,6,
                 7,8,9} ;
    int s = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(i==j)
                s += a[i][j];
        }
    }
    printf("%d",s);
}
*/

/* 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include <stdio.h>
int main(){
    int a[3][3]={1,2,3,
                 4,10,6,
                 7,8,9} ;
    int rowsum[3] = {0}, colsum[3] = {0} ;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            rowsum[i] += a[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            colsum[i] += a[j][i];
        }
    }
    printf("RowSum = ");
    for (int i = 0; i < 3; ++i) {
        printf("%d ",rowsum[i]);
    }

    printf("\nColSum = ");
    for (int i = 0; i < 3; ++i) {
        printf("%d ",colsum[i]);
    }
}
*/



/* 7. Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>
int main(){
    int a[3][3]={1,2,3,
                 4,10,6,
                 7,8,9} ;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(i==j || i>j)
                printf("%d ",a[i][j]);
            else
                printf("0 ");
        }
    printf("\n");
    }
}
*/


/* 8. Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>
int main(){
    int a[3][3]={1,2,3,
                 4,10,6,
                 7,8,9} ;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(i==j || j>i)
                printf("%d ",a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
*/


/* 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>

int main(){
    int rows , cols , count = 0 , density ;
    //intput
    printf("Enter Number of Row \n");
    scanf("%d",&rows);
    printf("\nEnter Number of Column \n  ");
    scanf("%d",&cols);
    int arr[rows][cols];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols ; ++j) {
            printf("Enter Element at Index %d%d = ",i,j);
            scanf("%d",&arr[i][j]);
            if(arr[i][j]!=0)
                count++;
        }
    }

    // Calculate density
    density = (float)count / (rows * cols) * 100;

    // Check if matrix is sparse or not
    if(density < 20.0) {
        printf("The matrix is sparse.\n");
    } else {
        printf("The matrix is not sparse.\n");
    }

    return 0;
}
*/



/* 10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>

int main(){
    int arr[4][5]={0, 1, 1, 0, 0,
                   0, 1, 1, 1, 0,
                   0, 0, 1, 0, 0,
                   1, 0, 0, 0, 0};
    int max_one=0,index,i,j;

    for (i = 0; i < 4; ++i) {
        int count=0;
        for (j = 0; j < 5; ++j) {
            if(arr[i][j]==1)
                count++;
        }
        if(max_one < count) {
            max_one = count;
            index = i;
        }
    }
    printf("Row = %d",index+1);
}
*/
