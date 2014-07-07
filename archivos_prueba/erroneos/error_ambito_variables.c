/*
	Errores de ambito detectados
		* Intento de redefinir variable 'n'
		* Variable no declarada 'row'
	Warnings detectados
		* Declaracion implicita de la funcion 'printf'
	
*/

//#include <stdio.h>
 
int main()
{
   int c, n, temp;		
 
   int n = 15;
 
   temp = n;
 
   for ( row = 1 ; row <= n ; row++ )
   {
      for ( c = 1 ; c < temp ; c++ )
         printf(" ");
 
      temp--;
 
      for ( c = 1 ; c <= 2*row - 1 ; c++ )
         printf("*");
 
      printf("\n");
   }
 
   return 0;
}


