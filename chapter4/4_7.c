/* Program 4.7 A Guessing Game */
#include <stdio.h>
int main(void)
{
int chosen = 15;
int guess = 0;
int count = 3;
/* The lucky number
 */
/* Stores a guess
 */
/* The maximum number of tries */
printf("\nThis is a guessing game.");
printf("\nI have chosen a number between 1 and 20"
" which you must guess.\n");
for( ; count>0 ; --count)
{
	printf("\nYou have %d tr%s left.", count, count == 1 ? "y" : "ies");
	printf("\nEnter a guess: ");
	 /* Prompt for a guess */
	scanf("%d", &guess);
	 /* Read in a guess
	 */
	/* Check for a correct guess */
	if(guess == chosen)
	{
	    printf("\nYou guessed it!\n");
	    return 0;
	}
/* End the program
 */
/* Check for an invalid guess */
	if(guess<1 || guess > 20)
	printf("I said between 1 and 20.\n ");
	else
	printf("Sorry. %d is wrong.\n", guess);
}
printf("\nYou have had three tries and failed. The number was %d\n",chosen);
return 0;
}
