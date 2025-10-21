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

void drawPixel( int x,int y,char color )
{


    if ( x >= 0 && x < HEIGHT&& y>= 0 && y < WIDTH )
    canvas[x][y]=color;
    else
        printf("Coordinates are invalid...\n");


}

    void erasePixel(int x, int y)
{
        if (x>= 0&&  x< HEIGHT&& y>= 0 && y< WIDTH)

    canvas[x][y] ='.';
        else
        printf("Coordinates are not valid....\n");
}

void fillArea( int x, int y, char target, char replacement )
{
    if(x < 0 || x >= HEIGHT || y < 0 || y >= WIDTH) return;
        if(canvas[x][y] != target ) return;
        if(canvas[x] [y] == replacement) return;


canvas[x][y] = replacement ;
fillArea( x+1, y, target, replacement);
fillArea(x-1, y, target, replacement);
fillArea (x , y+1, target, replacement);
fillArea(x , y-1, target, replacement);
}

int main()
{
  initCanvas();
  displayCanvas();
return 0;
}
