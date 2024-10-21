#include<stdio.h>

int main(){
    int A[] = {2, 4, 5, 8, 1};
    int i;
    printf("%d \n", A);     /* adress of the first element of the array*/
    printf("%d \n", &A[0]); /* same as above*/
    printf("%d \n", A[0]); /* firts element fo the array*/
    printf("%d \n", *A); /* same as above*/
    /* Note that using the varible A itself give us the pointer to the array*/
    for (i = 0;i<=4;i++)
    {
        printf("%d \n", A+i);     /* adress of the first element of the array*/
        printf("%d \n", &A[i]); /* same as above*/
        printf("%d \n", A[i]); /* firts element fo the array*/
        printf("%d \n", *(A+i)); /* same as above*/

    }
}