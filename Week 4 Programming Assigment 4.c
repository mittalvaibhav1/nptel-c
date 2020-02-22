#include <stdio.h>
int main()
{
int base, exponent;
long int result;
scanf("%d", &base); //The base value is taken from test case
scanf("%d", &exponent);  //The exponent value is taken from test case
int i=0;
result=1;
while(i<exponent)
{
  result*=base;
  i++;
}
printf("The result is : %ld\n", result);
return 0;
}
