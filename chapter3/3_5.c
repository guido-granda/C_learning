#include<stdio.h>
int main(void)
{
    char letter =0;
    printf("Enter an upper case letter:");
    scanf("%c",&letter);

    if((letter >= 'A') && (letter <= 'Z'))
    {
	letter += 'a' - 'A';
        printf("You have entered an upper case letter %c. \n",letter);
    }
    else
        printf("You did not ever enter an upper case letter.\n");
    return 0;
}
