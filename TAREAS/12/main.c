#include <stdio.h>
#include <stdlib.h>
//esta funcion es la que hara todo el trabajo
int saludo(int personas){
	int total,saludos;
	//declaramos variables y saludo sera el numero
	//obtenido despues de realizar la suma total
	saludos=personas-1;
	//el saludo es menos uno porque no se cuenta a la persona
	//que esta dando el saludo
	if(saludos==0){
	//si hay una solo persona no habra saludos, por tanto
	//este sera nuestro caso base	
		return saludos;
	}
	total=saludos+saludo(personas-1);
	//en este total se acumulara la suma de todos los saludos
	return total;
}
int main(int argc, char* argu[]){
//ahora iniciamos nuestra funcion principal	
	int resultado, personas; 
	personas=atoi(argu[1]);
	//con esto cambiamos el parametro que entra
	//al tipo de variable que necesitamos y es argu[1]
	//porque solo entrara un parametro
	resultado=saludo(personas);
	//se ejecuta la funcion con todos los datos ingresados
	printf("%i\n",resultado);
	//muestra el resultado en pantalla
	return 0;
}