#include<stdio.h>
int main()
{
	int x=5;
	int* p=&x;
	*p = 6;
	int** q=&p;
	int*** r=&q;
	printf("%d \n",*p); // 6
	printf("%d \n",*q); // this give the adress of p eg 225
	printf("%d \n",*(*q)); // this gives the the value at the adress of p , so 6
	printf(" %d \n",*(*r));// this gives the value of the adress 
	printf(" %d \n",*(*(*r)));
}

