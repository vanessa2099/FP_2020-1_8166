#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argu[]){
	int resultado;
	int argui[argc];//esta sera la lista donde se guarden los valores enteros 
	//se necesitan dos for, uno para hacer uno y otro para excluir argu[i]
	for(int i=1;i<argc;i++){
		//resultado primero sera el neutro multiplicativo
		resultado=1;
		//el otro for hara la operacion sin excluir a ninguno
	for(int j=1;j<argc;j++){
		//aqui se copia la lista argu[]
		argui[j]=atoi(argu[j]);
		//se obtiene el resultado sin excluir a argu[i]
		resultado=resultado*argui[j];
		}
	//una vez que obtenemos el resultado en el segundo for se excluye a argu[i]
	//con su inverso multiplicativo
	resultado=resultado/argui[i];
	printf("%i\n",resultado);
	}
	return 0;
}	