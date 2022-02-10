#include<stdio.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  int i;
  int count=0;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    count++;
  }
  return count;
}
void output(int n, int composite)
{
  if(composite>2)
  {
    printf("%d is an composite number",n);
  
  }
  else
  {
    printf("%d is not an composite number",n);
  }
}

int  main()
{
  int n, composite;
n = input_number();
composite = is_composite(n);
 output( n, composite);
 return 0;
}
   