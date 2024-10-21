// arrays as funtion arguments
#include<stdio.h>
int SunofElements( int A[]){ /* This is interpreted as int* A */
    int i,sum;
    int size=sizeof(A)/sizeof(A[0]);
    sum=0;
    printf(" SOA size of A = %d , size of A[0] = %d \n",sizeof(A),sizeof(A[0]));
    for( i=0;i< size;i++){
        sum+=A[i];
    }
    return sum;

}
int main(){

    int A[]={1,2,3,4,5};
    int total=SunofElements(A);
    printf("Sum of elements is = %d \n",total);
    printf(" MAIN size of A = %d , size of A[0] = %d \n",sizeof(A),sizeof(A[0]));

}
// why is this happening ? We need to understand how the compiler interprets an array as function argument. For a fucntion call we use the stack
//  part of the memory. Some part of the stack is used to store the main function, this is callled the stack frame. In main() we have 2 variables
//  A and total. A will have 20 bytes and total 4 bytes. When we reach SOE part in main() another part of the stack frame is allocated to execute
// the fucntion SOE. In SOE the value of A should be copied to its stack part. But actually this doesnt happend. When the compiler sees and array
// as a function argument it creates a pointer value to the data type of the array and the compiler just copy the adress of the first element 
// of that array. This is a call by reference. Arrays are always passed as reference parameters. This makes sense because arrays can be really
// large. Because function interprets the passed array as a pointer, we nned to pass the size of the array to solve this problem.
// When we have SOE(A ) we give the pointer to the first element. SOE(&A[0]) pass the adress of the first element, 