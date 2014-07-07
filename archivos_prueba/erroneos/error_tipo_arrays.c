/*
	Errores de tipo detectados
		* Asignacion no valida en linea 19
		* Indice no valido en linea 21
	Warnings detectados
		* Declaracion implicita de la funcion 'printf'
*/

//#include <stdio.h>

int main(){
    int n=10, i;
	float sum=0.0, average;
    float num[n]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
	
	num[2] = 4.0;
	num[3] = num[i] + 4.0;

	num = 3.0;

	num['a'] = 2.3;	

	for(i=0; i<n; ++i)
	{
	  sum+=num[i];
	}

	average=sum/(float)n;
	printf("Average = %.2f",average);
	return 0;
}

