// arrays as funtion arguments
#include<stdio.h>
void Double( int A[], int size){ /* This is interpreted as int* A */
    int i;
    for( i=0;i< size;i++){
        A[i]=2.0*A[i];
    }
}
int main(){

    int A[]={1,2,3,4,5};
    int size=sizeof(A)/sizeof(A[0]);
    int i;
    Double(A,size);
    for (i=0;i<size; i++){
        printf("%d",A[i]);
    }
}
// Because the array is passed by refrence to a function , we can modify the array using that function.
// 
// 
// 
// 
// 
// 
// 