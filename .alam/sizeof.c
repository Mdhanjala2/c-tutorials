#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf(x<=0?"The number is non positive":"The number is positive");
    getch();
}