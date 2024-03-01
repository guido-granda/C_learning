/* 11.1 Exercising the horse */
#include <stdio.h>

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

	struct horse My_first_horse;

	printf("Enter the name of the horse");
	scanf("%s",My_first_horse.name);

	printf("How old is %s ?",My_first_horse.name);
	scanf("%d",&My_first_horse.age);

	printf("How high is %s (in hands)?",My_first_horse.name);
	scanf("%d",&My_first_horse.height);

	printf("Who is %s's father ?",My_first_horse.name);
	scanf("%s",My_first_horse.father);

	printf("who is %s's mother?",My_first_horse.name);
	scanf("%s",My_first_horse.mother);

	printf("%s is %d years old, %d hands height,",My_first_horse.name,My_first_horse.age,My_first_horse.height);

	printf("and has %s and %s as parents. \n",My_first_horse.father,My_first_horse.mother );
	return 0;

}
