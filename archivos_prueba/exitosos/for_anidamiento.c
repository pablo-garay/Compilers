//#include <stdio.h>
 
int main()
{
  int m=4, n=3, p=3, q=4;
  int c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  if ( n != p )
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
  {
    
	for (  c = 0 ; c < m ; c++ )
    	for ( d = 0 ; d < n ; d++ )
      		first[c][d] = 2;

	for ( c = 0 ; c < p ; c++ )
      	for ( d = 0 ; d < q ; d++ )
        	second[c][d] = 3;
 
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
      {
        for ( k = 0 ; k < p ; k++ )
        {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}
