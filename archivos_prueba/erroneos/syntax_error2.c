/*
	Errores de ambito detectados
		* Intento de redefinir variable 'search'
	Errores de tipo detectados
		* Tipos de datos incompatibles en la asignacion del array
	Errores de sintaxis detectados	
		* Linea 35, falta de punto y coma
	Warnings detectados
		* Declaracion implicita de la funcion 'printf'
	
*/

//#include <stdio.h>
 
int main()
{
	int search, c, n;	

	int array[]={1,2,3,4,5,'a',7,8,9,10};

	int search = 7;

	for (c = 0; c < n; c++)
	{
	  if (array[c] == search)     /* if required element found */
	  {
		 printf("%d is present at location %d.\n", search, c+1);
		 break;
	  }
	}
	if (c == n)
	  printf("%d is not present in array.\n", search);

	return 0
}
