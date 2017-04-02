#include<stdio.h>

int main(void)
{
    int count=0;
    long sum=0L;
    printf("Enter the number of integers you wnat to sum\n");
    scanf("%d",&count);
    for(int i=1;i<=count;i++)
    {
        sum+=i;
    }
    printf("\nTotal of the first %d numbers is %ld\n",count,sum);
    return 0;
}    
