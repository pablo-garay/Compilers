//#include <stdio.h>

int main()
{
  int n, reverse=0, rem;

  n = 4567;

  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
  printf("Reversed Number = %d",reverse);
  return 0;
}
