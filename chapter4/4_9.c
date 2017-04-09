#include<stdio.h>

int main(void)
{
    long sum = 0L;
    int count=0;
    printf("\nEnter the number of integers you want to sum: ");
    scanf("%d",&count);
    for(int i=1;i<=count;i++)
    {
        sum=0L;
        for(int j=1;j<=i;j++)
            sum+=j;
        printf("\n%d\t%ld",i,sum);
    }
    return 0;

}
