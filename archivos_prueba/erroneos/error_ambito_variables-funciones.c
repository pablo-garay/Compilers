/*
	Errores de ambito detectados
		* Intento de redefinir variable 'n'
		* Variable no declarada 'tmp'
		* Intento de redefinir funcion 'swap	'
	Warnings detectados
		* Declaracion implicita de la funcion 'printf'
	
*/

//#include<stdio.h>

void swap(int a, int b)
{ 
	int b;
    tmp = a;
    a = b;
    b = tmp;
    printf(" \nvalues after swap m = %d\n and n = %d", a, b);
}

void swap(int a, int b){}

int main()
{
    int m = 22, n = 44;
	int n;
    // calling swap function by value
    printf(" values before swap  m = %d \nand n = %d", m, n);
    swap(m, n);                         
}

