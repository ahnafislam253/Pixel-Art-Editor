#include<stdio.h>
#include<stdlib.h>

int WIDTH, HEIGHT;
char **canvas;

void initCanvas() 
{
    canvas = (char **)malloc(HEIGHT * sizeof(char *));
    for (int i = 0; i < HEIGHT; i++) 
    {
        canvas[i] = (char *)malloc(WIDTH * sizeof(char));
        for (int j = 0; j < WIDTH; j++) 
        {
            canvas[i][j] = '.';
        }
    }
}

void displayCanvas() 
{
    system("cls");
    printf("\n--- Pixel Art Editor ---\n");
    printf("Canvas Size: %d x %d\n\n", HEIGHT, WIDTH);

    printf("   ");
    for (int j = 0; j < WIDTH; j++) 
    {
        printf("%2d", j % 10);
    }
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) 
    {
        printf("%2d ", i);
        for (int j = 0; j < WIDTH; j++) 
        {
            printf("%c ", canvas[i][j]);
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
        if (x>= 0 &&  x< HEIGHT&& y>= 0 && y< WIDTH)

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

void clearCanvas()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            canvas[i][j] = '.';
    }
}

void freeCanvas()
{

    for (int i =0; i< HEIGHT; i++) 
    {
        free(canvas[i]);}
        free(canvas);}

void getCanvasDimensions() 
{
    int max_width=80;
    int max_height= 50;

printf("Enter canvas dimensions (height width):\n");


  printf("Suggested maximum: %d x %d for good terminal display\n", max_height, max_width);  

do {
        printf("Height (1-%d): ", max_height);
         scanf("%d", &HEIGHT);
 if(HEIGHT <= 0 || HEIGHT > max_height){
            printf("Invalid height! Please enter between 1 and %d\n", max_height);

}
    }
