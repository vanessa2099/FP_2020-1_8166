#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argu[]){
	int numero;
	//declaramos nuestra variable de entrada
	double contador=0;
	//en contador se acumulara la suma que se realice en el proceso
	numero=atoi(argu[1]);
	//con el atoi cambiamos nuestro parametro de entrada
	//al tipo de variable que necesitemos
	while(numero>0){
		//este while sera para que repita el proceso
		//siempre y cuando el numero sea mayor a cero porque 
		//cuando eso sucede ya no tendra nada más que acumular
		contador=contador+numero%10;
		//aqui solo se fijara en el residuo de la division entre diez
		//y guardara el nuevo resultado que obtenga de la suma del contador
		//mas el residuo obtenido
		numero=numero/10;
		//asi seguira sacando mas decimales
	}
	printf("%.2lf\n",contador);
	//muestra el resultado de la suma acumulada de contador en pantalla
	return 0;
}