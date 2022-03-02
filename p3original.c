#include<stdio.h>
int input_n_and_r(int *n, int *r)
{
  printf("enter the values\n");
  scanf("%d%d",n,r);
}
int ncr(int n, int r)
{
  int a=1;
  int b=1;
  int c=1;
  int result;
  for(int i=2; i<=n; i++)
    {
      a=a*i;
    }
  for(int j=2;j<=r;j++)
    {
      b=b*j;
    }
  for( int k=2; k<=n-r; k++)
    {
      c=c*k;
    }
result=a/(b*c);
  return result;
}
void output(int n, int r, int result)
{
  printf("Result is %d",result);
}
int main()
{
  int a,b,c;
  input_n_and_r(&a,&b);
  c=ncr(a,b);
  output(a,b,c);
  return 0;
}
