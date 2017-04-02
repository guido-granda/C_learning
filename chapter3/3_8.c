#include<stdio.h>

int main(void)
{
    int choice=0;
    printf("\n Pick a number between 1 and 10 and you may win a price!");
    scanf("%d",&choice);
    if (choice >10 || choice<1)
        choice=11;
    switch(choice)
    {
        case 7:
             printf("\nCongratulations!");
             printf("\nYou win the collected works of Amos Gruntfuttock.");
             break;
        case 2:
             printf("\nYou win the folding thermometer-pen-watch-umbrella.");
             break;
        case 8:
             printf("\nTry between 1 and 10. Yo wasted your guess.");
        default:
             printf("\nSorry, you lose.\n");
	     break;

    }
    return 0;
}
