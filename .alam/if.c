#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x<=0)
    printf("%d is a non positive number",x);
    if(x>0)
    printf("%d is a positive number",x);
    getch();
}