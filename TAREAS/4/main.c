#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argu[]){
	
	int lista[argc], suma = 0;
	//con la variable de lista se guardaran los argumentos que entran
	float promedio; 
	//ponemos a promedio como un flotante 
	//para que el resultado sea con decimales
	for(int i=1; i<argc; i++){
		lista[i]=atoi(argu[i]);
	}
	//Con este for se leera la lista y la convertira a entero.
	//se empieza con 1 porque argu 0 es la funcion.
	for(int i=1; i<argc; i++){
		suma=suma+lista[i];
	}
	//ahora con este for ejecutamos la suma.
	//es un proceso que se estara repitiendo hasta que se llegue al ultimo argu.
	
	promedio=(float)suma/(argc-1);
	printf("%.2f\n", promedio);
	return 0;
}
	//en el promedio estamos diciendo que la suma la divida entre argc-1 
	//para que no cuente ./main, solo los otros numeros.