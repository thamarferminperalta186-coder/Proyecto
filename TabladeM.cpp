#include<stdio.h>
//inicio
int main (){
	//declarar variable 
	//Entrada
	int vt, i;
	printf ("Entre el valor a Multiplicar");
	scanf("%d", &vt);
	//Proceso y Salida
	
	for (i = 1; i<= 12; ){
	    printf("%d * %d = %d", vt, i, vt * i );
    }
    
    return 0; 
    
	//fin del algoritmo
}
