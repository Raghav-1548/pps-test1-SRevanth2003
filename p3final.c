#include<stdio.h>
#include<stdlib.h>
void input(int *a , int *b)
{
  printf("Enter the First Number : \n");
scanf("%d",a);
printf("enter the Second Number : \n");
scanf("%d", b);
}
void add(int a, int b,int *sum)
{
  *sum=a+b;
}
void output(int a, int b,int sum)
{
  printf("sum of %d and %d is %d \n", a,b,sum);
}
int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}