#include <stdio.h>
#include <stdlib.h>
double raiz(double num, double tolerancia, double resultado){
	//declaramos que la funcion se llama raiz y sus variables
	double division, diferencia;
	//estas dos variables mas, nos serviran para 
	//realizar otras operaciones a continuacion
	division=num/resultado;
	//esta divison es para sacar posibles candidato
	diferencia=resultado-division;
	//a nuestra variable resultado le restaremos 
	//lo obtenido en division para saber cual es la diferencia 
	//entre los dos e ir acercandonos a la raiz que queremos
	diferencia=diferencia>0? diferencia:-diferencia;
	//aqui utilizamos un condiconal para hacer que 
	//diferencia sea un valor absoluto
	if(diferencia<=tolerancia){
	//con este if estamos indicando que si la diferencia es menor 
	//o igual a la tolerancia regresa a resultado	
		return resultado;
	}
	else{
		resultado=(resultado+division)/2;
	//buscamos un nuevo candidato
		return raiz(num, tolerancia, resultado);
	//utilizamos el nuevo candidato en la funcion raiz	
	}
}
int main(int argc, char *argu[]){
	//esta es nuestra funcion principal
	double num, tolerancia, resultado;
	//declaramos nuestros tres parametros de entrada
	num=atof(argu[1]);
	tolerancia=atof(argu[2]);
	resultado=atof(argu[3]);
	//con esto cambiamos los parametros al tipo de variable que necesitamos
	resultado=raiz(num, tolerancia,resultado);
	//en la variable resultado se guarda el resultado de las operaciones anteriores
	printf("%lf\n",resultado);
	//por ultimo mostramos el resultado
}