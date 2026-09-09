#include<stdio.h>
#include<conio.h>
int main()
{
    int x=5,y;
    y=x++;
    printf("%d\n%d",x,y);
    // The output will be:
    //6
    //5
    getch();
}