#include<stdio.h>
void Increment(int a)
{
    a = a + 1;
    printf(" Addres of the variable a in increment= %d\n", &a);
}
int main()
{
    int a;
    a = 10;
    Increment(a);
    printf(" Addres of the variable a in main= %d\n", &a);

}
// These adresses are different! So each a is a local varible to main and increment respectivetly.
// Applications memory : 1) code(text) : store the instructions, static/global: store static or global variable, stack: all the local varibales go here, Heap. 1) , 2), and 3) are fixed and decided when the program starts executing, the heap segment can provide more memory during execution.