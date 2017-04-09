#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    char another_game='Y';
    bool correct= true;
    int counter= 0;
    int sequence_length =0; /*number of digits ina sequence */
    time_t seed=0; /*seed for the random number sequence */
    int number =0; /* *stores an imput digit*/

    /*Describe how the game is played */
    printf("\n To play Simple Simon, ");
    printf("watch the screen for a sequence of digits.");
    printf("\n Watch carefully, as the digits are only displayed for one second");
    printf("\nThe computer will remove them, and then prompt you ");
    printf("to enter the same sequence.");
    printf("\nWhen you do, you must put spaces between the digits. \n");
    printf("Good luck! \nPress enter to play\n");
    scanf("%c",&another_game);
    
    do 
    {
        correct= true;
        counter=0;
        sequence_length=2;
        while(correct)
        {
            seed=time(NULL);
            srand((unsigned int)seed);
            for(int i=1;i<= sequence_length; i++)
                printf("%d",rand()%10);
        
            for(int i=1;i<=sequence_length;i++)
            {
                scanf("%d",&number); /*Read an imput number */
                if(number != rand()%10)
                {
                    correct = false;
                    break;
                 }
            }

            printf("%s\n",correct ? "Correct!" : "Wrong!");
       }
       printf("\nDo you wnat to play again? ");
       scanf("%c",&another_game);
                
    } while(toupper(another_game)=='Y');
    return 0;
}
