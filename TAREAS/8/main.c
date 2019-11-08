#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argu[]){
	//Programa conversion de grados
	float n1,n2,resultado;
	//declaramos nuestras variables como float 
	//para obtener decimales
	n1 = atof(argu[1]);
	n2 = atof(argu[2]);
	//aqui convertirmos los parametros a flotantes.
if(n1==0){
	resultado = (n2*1.8)+32;
	printf("%.2f\n",resultado);
	//este if es para que cuando ingrese un 0 con la funcion se covierta 
	//el segundo parametro de grados celsius a fahrenheit
}
if(n1!=0){
	resultado=(n2-32)/1.8;
	//este por el contrario es por si ingresa uno parametro diferente de 0
	//convertira de grados fahrenheit a celsius
	printf("%.2f\n",resultado);//muestra el resultado
}
return 0;
}
