/* 
@autor:
 * Cesar Villalobos
 * Estudiante: Ing.Sistemas UDI

Programa que mediante registros en C realiza operaciones entre números complejos, entre las
operaciones están suma,resta y multiplicación.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct complejos{
	int real;
	int imagi;
}com;

com armarnumero(){
	com num;
	printf("Ingrese la parte real: ");
	scanf("%d",&num.real);
	printf("Ingrese la parte imaginaria: ");
	scanf("%d",&num.imagi);
	return num;
}

com sumarnumeros(com a,com b){
	com suma;
	suma.real=a.real+b.real;
	suma.imagi=a.imagi+b.imagi;
	return suma;
}

com restarnumeros(com a, com b){
	com restar;
	restar.real=a.real-b.real;
	restar.imagi=a.imagi-b.imagi;
	return restar;
}

com multinumeros(com a, com b){
	com multi;
	multi.real=(a.real*b.real)+(a.imagi*b.imagi*-1);
	multi.imagi=(a.imagi*b.real)+(a.real*b.imagi);
	return multi;
}



void imprimir(com a, com b, com c){
	printf("La suma es %d  %di \n La resta es %d %di \n La multiplicacion es %d %di",a.real,a.imagi,b.real,b.imagi,c.real,c.imagi);
}
int main(){
	com a=armarnumero();
	com b=armarnumero();
	com resul=sumarnumeros(a,b);
	com result=restarnumeros(a,b);
	com resultt=multinumeros(a,b);
	imprimir(resul,result,resultt);
}
