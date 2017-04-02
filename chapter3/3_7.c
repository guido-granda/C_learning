#include <stdio.h>
#include<stdbool.h>
int main(void)
{
    int age=0;
    int college=0;
    int subject=0;
    bool interview= false;
    

    printf("\n What college? 1: Harvard, 2: Yale, 3: Other ");
    scanf("%d",&college);
    printf("\n What subject? 1: chemistry, 2: economics, 3: other ");
    scanf("%d",&subject);
    printf("Age:");
    scanf("%d",&age);

    if( (age>25&& subject==1) && (college!=2))
    
       interview= true;
    
    if(college==2 && subject==1)
    
        interview= true;
    
    if( (college==1 && subject==2) && age<=28 )
    
        interview =true;
    
    if( age>25 && subject!=1)
    
        interview =true;
    
    if(interview)
       printf("\n\nGive them an interview");
    else 
       printf("\n\n Reject them");
    return 0;
}
