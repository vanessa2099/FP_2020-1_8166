#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argu[]){
	float n1,n2,r1,r2,r3,r4;
	n1 = atof(argu[1]);
	n2 = atof(argu[2]);
	r1 = n1+n2;
	printf("%.2f\n",r1);
	r2 = n1-n2;
	printf("%.2f\n",r2);
	r3 = n1/n2;
	printf("%.2f\n",r3);
	r4 = n1*n2;
	printf("%.2f\n",r4);
	return 0;
}