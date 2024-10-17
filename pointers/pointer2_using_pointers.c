#include<stdio.h>
void Increment(int *p) // in this case we pass adress of a varible: call by reference
{
    *p = *p + 1;
    //printf(" Addres of the variable a in increment= %d\n", &a);
}
int main()
{
    int a;
    a = 10;
    Increment(&a);
    //printf(" Addres of the variable a in main= %d\n", &a);
    printf("a= %d", a);
}
// Call by reference can save us a lot of memory because we dont create a copy to a datatype, we instead use a reference to it.