#include <stdio.h>
int main()
{
   int x, y, GCD; 
   scanf("%d %d", &x, &y); //Two numbers x and y are taken from the test cases
   //You can use any other variable as required 
   //The last part is already written 

int i=x,j=y;
while(i%j!=0)
{
  int tmp=j;
  j=i%j;
  i=tmp;
}
GCD=j;
printf("GCD of the numbers %d and %d is %d", x, y,GCD);

	 return 0;
}