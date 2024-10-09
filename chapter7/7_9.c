#include<stdio.h>

int main(void)
{
   char board[3][3] = { {'1','2','3'} ,{'4','5','6'} ,{'7','8','9'}};
   char *pboard=*board; /* a pointer to a chart. Note we have to use *board because different levels of indirection */
   for(int i=0;i<9;i++)
      printf("borad: %c\n",*(pboard+i));
   return 0;
}
