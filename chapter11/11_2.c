/* 11.2 Exercising the horse */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	/* Strcuture declaration */
	struct horse
	{
		int age;
		int height;
		char name[20];
		char father[20];
		char mother[20];

	};

	struct horse My_horses[50]; /* Structure array declaration*/
 	int hcount=0; /* count of number of horses */
	char test = '\0'; /* Test value for ending*/

	for (hcount=0;hcount<50; hcount++)
	{
		printf("\nDo you want to enter details of a%s horse (Y or N)?",hcount?"nother ":"");
		scanf("%c",&test);
		if(tolower(test)=='n')
			break;
		printf("Enter the name of the horse");
	        scanf("%s",My_horses[hcount].name);

		printf("How old is %s ?",My_horses[hcount].name);
		scanf("%d",&My_horses[hcount].age);

		printf("How high is %s (in hands)?",My_horses[hcount].name);
		scanf("%d",&My_horses[hcount].height);

		printf("Who is %s's father ?",My_horses[hcount].name);
		scanf("%s",My_horses[hcount].father);

		printf("who is %s's mother?",My_horses[hcount].name);
		scanf("%s",My_horses[hcount].mother);

	}
	for (hcount=0;hcount<50; hcount++)
	{
		printf("%s is %d years old, %d hands height,",My_horses[hcount].name,My_horses[hcount].age,My_horses[hcount].height);

		printf("and has %s and %s as parents. \n",My_horses[hcount].father,My_horses[hcount].mother );
	}
	return 0;

}
