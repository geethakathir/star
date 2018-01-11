#include<stdio.h>
#include<conio.h>
void main()
{
int n,ri=0,rem,oi;
printf("enter an integer");
scanf("%d",&n);
oi==n;
while(n!=0)
{
rem=(n%10);
ri=ri*10+rem;
n/=10;
if(oi==ri)
{
printf("the given number is palindrome");
}
else
{
printf("the given number is not palindrome");
}
}
