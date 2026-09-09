#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
    printf("The %d is divisible by 7 or 3",x);
    else
    printf("The %d is not divisible by 7 or 3",x);
    getch();
}
