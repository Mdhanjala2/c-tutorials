#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%3==0 && x%2==0)
    printf("The %d is divisible by 2 & 3",x);
    else
    printf("The %d is not divisible by 2 & 3",x);
    getch();
}