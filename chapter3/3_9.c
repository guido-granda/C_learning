#include<stdio.h>

int main(void)
{
    char answer=0;
    printf("Enter Y or N:\n");
    scanf("%c",&answer);
    switch(answer)
    {
        case 'y' : case 'Y':
            printf("You response was afirmative\n");
            break; 
        case 'n' : case 'N':
            printf("You response was negative\n");
            break;
        default:
            printf("You did not response correctly...\n");
            break;
    }

    return 0;
}

