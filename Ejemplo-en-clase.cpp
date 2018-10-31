/*
*Programa: Ejemplñlo uso estruct
*Fecha: 30/10/2018	
*Creador: Juan Diego Rios Ballesteros
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct producto{
	int cod;
	char nom[40];
	float precio;
}prod[4];

void crear(struct producto prod[4]){
	int i ;
	for(i=0;i<4;i++){
		printf("Ingrese el codigo de producto: ");
		scanf("%d", &prod[i].cod);
		fflush(stdin);
		printf("Ingrese la descripcion: ");
		gets(prod[i].nom);
		printf("Ingrese el precio: ");
		scanf("%f", &prod[i].precio);
		getch();
	}
}

//struct producto crear(){
//	system("cls");
//	printf("Ingrese el codigo de producto: ");
//	scanf("%d", &prod.cod);
//	fflush(stdin);
//	printf("Ingrese la descripcion: ");
//	gets(prod.nom);
//	printf("Ingrese el precio: ");
//	scanf("%f", &prod.precio);
//	getch();
//	return prod;
//}

void imprimr(struct producto p[4]){
	system("cls");
	int i =0;
	for(i=0; i<4;i++){
		printf("Codigo de producto: %i\n", p[i].cod);
		printf("Descripcion: %s\n", p[i].nom);
	}	
}

int main(){
	system("color E");
	crear(prod);
	imprimr(prod);
}
