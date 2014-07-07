/*
	Errores de cantidad de parametros formales distinta de cantidad de parametros actuales para funciones
		* Demasiados argumentos para la funcion
		* Muy pocos argumentos en llamada a funcion
		
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
    int vector[3] = {1, 2, 3};
    char vector2[] = {"1", "2", "3"};
    
    n = 5;
    
    /* Tipo de argumento incompatible para argumento 1 de 'factorial'. Demasiados argumentos para la funcion 'factorial' */
    factorial(vector, 2, 3);
    
    /* error: Demasiados argumentos para la funcion 'factorial' */
    factorial(1, 2, 3, 4, 5);
    
    /* error: Muy pocos argumentos en llamada a funcion 'mult' */
    mult();
    
    /* Tipo de argumento incompatible para argumento 1 de 'mult'. Tipo de argumento incompatible para argumento 2 de 'mult' */
    mult(vector2[1], vector2[2]);
    
    /* OK */
    mult(vector[1], vector[2]);
    
    
    return 0;
}

