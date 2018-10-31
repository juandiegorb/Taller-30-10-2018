/*
*Programa: ingresar las ventas de los productos de 4 tiendas diferentes
*Fecha: 30/10/2018	
*Creador: Juan Diego Rios Ballesteros
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

// struct del producto
struct producto{
	float venta;
	float total1[4];
};
// struc de la tiendas
struct tienda{
	struct producto  p;
}tien[4];

// Funcion para pedir los datos y mostrarlos
void total(struct tienda tien[4]){
	float totalfinal[4];
	int n, seleccion;	
	// For para las tiendas totales
	for(int i=0;i<4;i++){
		printf("Hay 4 productos: 1. Cilantro 2. Carne 3. Agua 4. Helado\n");		
		printf("Tienda %d\n", i+1);
		// Do while para ingresar solo hasta las tiendas que hatan
		n=0;
		do{			
			// Le doy opciones al producto
			printf("Registro de venta %d\n", n+1);
			printf("Ingrese el numero de producto vendido: ");
			scanf("%d", &seleccion);			
			//pregunta para que no escojan selecciones que no existen
			if(seleccion<=0 || seleccion >=5){
				printf("Producto no existe, intentelo de nuevo\n");
				n-=1;
			}else{
				// Pregunto las ventas del producto
				printf("Ingrese el valor de la venta: ");
				scanf("%f", &tien[i].p.venta);
				// Preguntas para ir sumando el total en la tienda por si es el mismo producto
				if(seleccion == 1){
					// Acumulo en la posicion de la seleccion - 1 cuando sean el mismo producto las ventas realizadas				
					tien[i].p.total1[seleccion-1] = tien[i].p.total1[seleccion-1] + tien[i].p.venta;				
				}else if(seleccion == 2){
					// Acumulo en la posicion de la seleccion - 1 cuando sean el mismo producto las ventas realizadas
					tien[i].p.total1[seleccion-1] = tien[i].p.total1[seleccion-1] + tien[i].p.venta;
				}else if(seleccion == 3){
					// Acumulo en la posicion de la seleccion - 1 cuando sean el mismo producto las ventas realizadas
					tien[i].p.total1[seleccion-1] = tien[i].p.total1[seleccion-1] + tien[i].p.venta;
				}else if(seleccion == 4){
					// Acumulo en la posicion de la seleccion - 1 cuando sean el mismo producto las ventas realizadas
					tien[i].p.total1[seleccion-1] = tien[i].p.total1[seleccion-1] + tien[i].p.venta;
				}				
			}							
			n++;
		} while(n<4);			
		getch();
		system("cls");
	};	
	//Total de cada tienda
	printf("TOTAL DE CADA TIENDA\n");
	for(int j=0;j<4;j++){		
		printf("Tienda %d\n", j+1);
		for(int n=0; n<4;n++){
			// Muestro el total obtenido en cada tienda
			printf("Producto %d: %.2f\n", n+1, tien[j].p.total1[n]);				
		}			
	};	
	//TOTAL FINAL
	printf("SUMA TOTAL DE LAS 4 TIENDAS\n");
	for(int j=0;j<4;j++){
		totalfinal[j]=0;		
		for(int n=0; n<4;n++){		
			// Muestro la sumatoria de las tiendas
			totalfinal[j] = totalfinal[j] + tien[n].p.total1[j];			
		}	
		printf("Producto %d total vendido  es: %.2f\n", j+1, totalfinal[j]);			
	};		
	getch();
}

main(){
	printf("Programa: Calcular la suma total de ventas totales de 4  productos de 4 tiendas\nIngrese cualquier tecla para continuar");
	getch();
	system("cls");
	total(tien);	
}
