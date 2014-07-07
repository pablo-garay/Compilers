/*
	Errores de cantidad de parametros formales distinta de cantidad de parametros actuales para funciones
		* Demasiados argumentos para la funcion
		* Muy pocos argumentos en llamada a funcion
	
*/

int factorial(int n)
{
    if(n!=1)
     return n*factorial(n-1);
}


int mult (int x, int y)
{
  return x * y;
}


int main()
{
    int n;
    int vector[10];
    
    
    printf("Enter an positive integer: ");
    n = 5;
    
    /* OK */
    factorial(factorial(n));
    
    /* error: Demasiados argumentos para la funcion 'factorial' */
    factorial(n, vector);
    
    /* error: Muy pocos argumentos en llamada a funcion 'factorial' */
    factorial();
    
    /* error: Muy pocos argumentos en llamada a funcion 'mult' */
    mult(1);
    
    /* OK */
    mult(1, 2);
    
    /* error: Demasiados argumentos para la funcion 'mult' */
    mult(1, 2, 3);
    
    return 0;
}

