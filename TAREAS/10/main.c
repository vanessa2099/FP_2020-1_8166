#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void raizReal(double a, double b, double c, double det){
//esta funcion sera para obtener los numeros reales positivos
	double r1,r2;
	double p;
	//declaramos otras variables necesarias para realizar nuestras operaciones
	p=sqrt(det);
	//sqrt es una funcion que ya esta establecida en la libreria 
	//de math.h que devuelve la raiz cuadrada de un numero
	r1=(-b/2*a)+(p/2*a);
	r2=(-b/2*a)-(p/2*a);
	//con estas operaciones obtenemos el determinante
	printf("%.2lf\n",r1);
	printf("%.2lf\n",r2);
}
void raizImaginaria(double a, double b, double c, double det){
//por su parte esta funcion dara los numeros imaginarios 
	double p;
	p=sqrt(-det);
	double r3, r4, r5, r6;
//declaramos las 4 variables que necesitamos
	r3=-b/(2*a);
	r4=p/(2*a);
	r5=-b/(2*a);
	r6=-p/(2*a);
	if(b==0){
		r3=0;
		r5=0;
	//este if nos ayudara a saltarnos los pasos del procedimiento 
	//en caso de que "b" sea cero
	}
	printf("%.2lf+%.2lfi\n", r3, r4);
	printf("%.2lf%.2lfi\n", r5, r6);
//ahora mostramos los valores imaginarios agregandoles una i
}
void raiztotal(double a, double b){
//esta funcion se ejecutara y mostrara el resultado 
//en caso de que solo haya una solucion
	double z;
	z=-b/(2*a);
	printf("%.2lf\n",z);
}
int main(int argc, char* argu[]){
//iniciamos nuestra funcion principal
	double a,b,c,det;
//contamos con las mismas variables que en funciones anteriores
	a=atof(argu[1]);
	b=atof(argu[2]);
	c=atof(argu[3]);
//aqui hacemos nuestro cambio de parametros de entrada que en este
//caso cambiaremos a flotantes, para recibir decimales
	det=pow(b,2);
//pow es una funcion exponencial que igual ya viene establecida en 
//la libreria math.h para no tener que declarar otra funcion
	det=det-(4*a*c);
//esto es para obtener nuestro determinante final
if(det==0){
	raiztotal(a,b);
}
else{
	if(det>0){
		raizReal(a,b,c,det);
	}
	else{
		raizImaginaria(a,b,c,det);
	//estos if son para separar los posibles resultados si se tiene una solucion
	//si es mayor se usan raices reales y si es menor las imaginarias
	}
}
return 0;
}