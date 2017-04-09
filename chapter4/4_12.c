#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main(void)
{
    int counter=0;
    char another_game='Y';
    bool correct=true;
    int number=0;
    int guess_number=0;
    time_t seed=0;
    printf("Simon game:\n");
    while(correct==true)
    {
        counter++;
        printf("Guessing %d numbers\n",counter);
        seed=time(NULL);
        srand((unsigned) seed);
        for(int i=1;i<=counter ;i++ )
        {
            number=rand()%10;
            printf("%d\n",number);
            sleep(1);
        }
        printf("Please enter the numbers:\n");
        for(int j=1;j<=counter;j++)
        {
            scanf("%d",&guess_number);
            printf("%d\t%d\n",guess_number,number);
            if(guess_number != number)
            {
                printf("That is not correct!\n");
                printf("Do you want to try again?(Y or N)\n");
                scanf(" %c",&another_game);
                if(toupper(another_game)=='Y')
                    break;
                else
                    goto final;
            }
            else continue;

        }
    }
    final: ;
    return 0;
}
