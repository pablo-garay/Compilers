// #include <stdio.h>
 
void Print_Squares(void)
{
  int i;
  for(i=1; i <=5; i++)
  {
    printf("%d ", i*i);
  }
}
 
int main(void)
{
  Print_Squares();
  Print_Squares();
  return 0;
}
