#include<stdio.h>

int main(void)
{
    char str1[40]="To be or not to  be";
    char str2[]  =",that is the question";
    int count1=0,count2=0;

    while(str1[count1])
    {
        printf("%c\n",str1[count1]);
        count1++;
    }
    while(str2[count2])
    {
        printf("%c\n",str2[count2]);
        count2++;
    }
    return 0;
}
