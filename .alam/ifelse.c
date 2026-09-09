#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter the nummber: ");
    scanf("%d",&x);
    if(x<=0)
    printf("%d is a non positive number",x);
    else
    printf("%d is a positive number",x);
    getch();
}