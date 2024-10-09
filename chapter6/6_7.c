#include<stdio.h>
#include<string.h>

int main(void)
{
   char str1[]="This string contains the holy grail";

   char str2[]="the holy grail";
   char str3[]="the holy grill";

   if(strstr(str1,str2)==NULL)
      printf("\n\"%s\" ws not found.",str2);
   else
      printf("\n\"%s\" was found in \"%s\"",str2,str1);
   if(strstr(str1,str3)==NULL)
      printf("\n\"%s\" ws not found.",str3);
   else
      printf("\n\"%s\" was found in \"%s\"",str3,str1);
   return 0;
}
