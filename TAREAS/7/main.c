#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argu[]){
	//Programa potencia
	float n1,n2,resultado=1;
	//declaramos nuestras variables como float 
	//para que tambien manejen decimales 
	n1 = atof(argu[1]);
	n2 = atof(argu[2]);
	//estos son nuestros 2 parametros de entrada 
	//que convertiremos a float
	for(int a=1;a<=n2;a++){
		resultado = resultado*n1;
	//este for es para acumular la suma de la multiplicacion del parametro que entre 
	//como potencia por el otro numero que se ingrese;siempre y cuando sea diferente de 1
	}
	printf("%.2f\n",resultado); //finalmente mostramos resultado
	return 0;
}