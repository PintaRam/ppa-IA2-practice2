#include<stdio.h>
int input_side()
{
  int n;
  printf("enter the value\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{ 
   int result=0;
    if(a==b || b==c || a==c)
    {
      result=1;
    } 
     else
  {
    result=0;
   }
   return result;
}
void output(int a , int b, int c, int isscalene)
{
  if(isscalene==0)
 {
 printf("triangle is scalene\n");
 }
  else
  {
  printf("triangle is not a scalene\n ");
  }
}
int main()
{
  int a, b, c, isscalene;
  a = input_side();
  b=input_side();
  c=input_side();
  isscalene= check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0 ;
}