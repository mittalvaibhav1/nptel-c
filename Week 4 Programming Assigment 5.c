#include <stdio.h>
int main()
{

int N, First_digit, Last_digit;

scanf("%d", &N); //The number is accepted from the test case
int i=N;
while(i>0)
{
  int r=i%10;
  if(i==N)
  {
    Last_digit=r;
  }
  i=i/10;
  if(i==0)
  {
    First_digit=r;
  }
}
printf("Sum of First and Last digit = %d", First_digit + Last_digit);

return 0;
}
