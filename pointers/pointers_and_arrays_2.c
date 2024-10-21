// arrays as funtion arguments
#include<stdio.h>
int SunofElements( int A[], int size){
    int i,sum;
    sum=0;
    for( i=0;i< size;i++){
        sum+=A[i];
    }
    return sum;

}
int main(){

    int A[]={1,2,3,4,5};
    int size=sizeof(A)/sizeof(A[0]);
    int total=SunofElements(A,size);
    printf("Sum of elements is = %d \n",total);

}