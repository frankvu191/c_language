#include <stdio.h>

int main()
{
  retangular();
  zero();

  return 0;
}

void retangular()
{
  for(int i = 0; i < 9; i++)
  {  
    if(i == 0 || i == 8)
    {
      printf("\t*********\n");
    }  
    else
    {
      printf("\t*       *\n");
    }
  }
}

void zero()
{
  for(int i = 0; i < 9; i++)
  {
    if(i == 0 || i == 8)
    {
      printf("\t   ***   ");
    }
    if(i == 2 || i == 7) 
    {
      printf("\t *     * ");
    }
    else
    {
      printf("\t*       *");
    } 
  }
}
