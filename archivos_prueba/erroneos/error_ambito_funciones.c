/*
	Errores de ambito detectados
		* Intento de redefinir funcion 'sum'
	Warnings detectados
		* Declaracion implicita de la funcion 'printf'
		* Declaracion implicita de la funcion 'mult'
	
*/

//#include <stdio.h>
    
int sum (int a, int b)
{
    return a + b;
}

char sum (){
	return 'a';
}

int main (void)
{
    int total;

    total = sum (2, 3);
    printf ("Total is %d\n", total);

	mult();

    return 0;
}


