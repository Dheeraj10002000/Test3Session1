#include<stdio.h>
  void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the numbers\n");
  scanf("%d%d%d%d",num1,den1,num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  *num3= num1*den2 + num2*den1;
  *den3= den1 * den2;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("the sum is %d/%d",num3,den3);
}
int main()
{
  int a,b,c,d,e,f;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&e,&f);
  output(a,b,c,d,e,f);
  return 0;
}