#include<stdio.h>
#include<stdlib.h>

#define WIDTH 30
#define HEIGHT 20 

char canvas [HEIGHT] [WIDTH];

void initCanvas() 
{
  for(int i=0; i<HEIGHT; i++)
    for (int j=0; j<WIDTH; j++)
      canvas [i] [j] = '.';
}

void displayCanvas()
{
  system("cls");
printf("\n____Pixel Art Editor____\n");
for(int i=0; i<HEIGHT; i++)
{ 
  for(int j=0; j<WIDTH; j++)
{
  printf ("%c", canvas [i] [j]);
}
  printf("\n");
}
  printf("\n");
}

int main()
{
  initCanvas();
  displayCanvas();
return 0;
}
