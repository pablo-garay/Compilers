/*
	Errores de comprobacion de tipos de funciones
		* Tipo de argumento incompatible para argumento N
	
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
    char vector2[] = {"1", "2", "3"};
    
    
    printf("Enter an positive integer: ");
    n = 5;
    
    /* Tipo de argumento incompatible para argumento 1 de 'factorial' */
    factorial(vector);
    
    /* Tipo de argumento incompatible para argumento 1 de 'factorial' */
    mult(factorial(vector), 2);
    
    /* Tipo de argumento incompatible para argumento 2 de 'mult'.  */
    mult(3, vector2);
    
    /* error: Tipo de argumento incompatible para argumento 1 de 'factorial'. Tipo de argumento incompatible para argumento 2 de 'mult'.  */
    mult(factorial(vector), vector2);
    
   /* OK  */
    mult(factorial(3), factorial(6));
    
    return 0;
}

