#include <stdio.h>
int cmp(int a, int b, int c)
{
  int largest=0;
  if(a>b && b>c)
        largest=a;
  else if(b>a && b>c)
        largest=b;
  else if(c>a && c>b)
        largest=c;
}
int input()
{
  int a;
  printf("Enter the number:");
  scanf("%d", &a);
  return a;
}
void output(int l)
{
  printf("Largest number is : %d\n", l);
}
int main()
{
  int x,y,z,l;
  x= input();
  y= input();
  z= input();
  l= cmp(x,y,z);
  output(l);
  return 0;
  }