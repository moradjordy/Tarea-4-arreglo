#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void comprar();
void estadisticas();
void consultar();




int numerofactura = 0;
int matrixconsulta[7][60];


	int cedula, tipo, opcion, opcionmenu;
	char nombre[50];
	char apellido[50];
	int cantidadentradas;
		
	int solnortesur = 10500;
	int sombraesteoeste = 20500;
	int proferencial = 25500;
	int cargoservicio = 1000;
	
	int subtotal;
	int totalapagar;
	
	
	int cantidad[3]={0};
	int acumuladodinero[3]={0};
	
	

void menu(){
	printf("*********Bienvenidos***********\n");
	printf("*****Costa Rica vrs Mexico*****\n");
	printf("Menu.\n");
	printf("1 Compar entradas\n");
	printf("2 Estadisticas\n");
	printf("3 Consultar\n");
	printf("\n");
	printf("Salir\n");
	scanf("%d", &opcionmenu);
	
	switch(opcionmenu)
	{
		case 1: comprar(); 
		break;
	 
		case 2: estadisticas();
		break;
		
		case 3: consultar();
		break;
		
		default:
        printf("Opcion invalida.\n");
        break;
}
}
	
void comprar()
{	do{

	printf("Digite numero de cedula:  \n");
	scanf("%d", &cedula);
	printf("Digite nombre:  \n");
	scanf("%s", &nombre);
	printf("Digite Apellido:  \n");
	scanf("%s", &apellido);
	printf("Digite cantidad de entradas:  \n");
	scanf("%i", &cantidadentradas);
	printf("Seleccione el tipo de localidad: \n 1- Sol Norte/Sur\n 2-Sombra Este/Oeste\n 3-Preferencial. \n");
	scanf("%i", &tipo);
	
	
	switch (tipo){
	
	numerofactura++;
	
	
	case 1: // Sol Norte/Sur
	
	numerofactura++;


    totalapagar = 10500 * cantidadentradas + 1000;
   	subtotal = 10500 * cantidadentradas;
	printf("Numero de Factura: %d\n", numerofactura);
	printf("Cedula: %i\n", cedula);
	printf("Nombre comprador: %s %s\n", nombre, apellido);
	printf("Localidad: Sol Norte/Sur\n");
	printf("Cantidad de Entradas: %d\n", cantidadentradas);
	printf("Subtotal = %d\n", subtotal);
	printf("Cargos por Servicios: %d\n", cargoservicio);
	printf("Total a pagar: %d\n", totalapagar);
	
	cantidad[0] += cantidadentradas;
	acumuladodinero[0] += totalapagar;
	
	
	matrixconsulta[numerofactura][0] = numerofactura;
    matrixconsulta[numerofactura][1] = cedula;
    matrixconsulta[numerofactura][2] = tipo;
    matrixconsulta[numerofactura][3] = cantidadentradas;
    matrixconsulta[numerofactura][4] = subtotal;
    matrixconsulta[numerofactura][5] = cargoservicio;
    matrixconsulta[numerofactura][6] = totalapagar;
    break;

    
   case 2: // Sombra Este/Oeste
   numerofactura++;
	totalapagar = 20500 * cantidadentradas + 1000;
	subtotal = 20500 * cantidadentradas;
	printf("Numero de Factura: %d\n", numerofactura);
	printf("Cedula: %i\n", cedula);
	printf("Nombre comprador: %s %s\n", nombre, apellido);
	printf("Localidad: Sombra Este/Oeste\n");
	printf("Cantidad de Entradas: %d\n", cantidadentradas);
	printf("Subtotal = %d\n", subtotal);
	printf("Cargos por Servicios: %d\n", cargoservicio);
	printf("Total a pagar: %d\n", totalapagar);
	cantidad[1] += cantidadentradas;
	acumuladodinero[1] += totalapagar;


	matrixconsulta[numerofactura][0] = numerofactura;
    matrixconsulta[numerofactura][1] = cedula;
    matrixconsulta[numerofactura][2] = tipo;
    matrixconsulta[numerofactura][3] = cantidadentradas;
    matrixconsulta[numerofactura][4] = subtotal;
    matrixconsulta[numerofactura][5] = cargoservicio;
    matrixconsulta[numerofactura][6] = totalapagar;
    break;
   

		
	
    case 3:
    numerofactura++;
	totalapagar = 25500 * cantidadentradas + 1000;
	subtotal = 25500 * cantidadentradas;
	printf("Numero de Factura: %d\n", numerofactura);
	printf("Cedula: %i\n", cedula);
	printf("Nombre comprador: %s %s\n", nombre, apellido);
	printf("Localidad: Preferencial\n");
	printf("Cantidad de Entradas: %d\n", cantidadentradas);
	printf("Subtotal = %d\n", subtotal);
	printf("Cargos por Servicios: %d\n", cargoservicio);
	printf("Total a pagar: %d\n", totalapagar);
	
	cantidad[2] += cantidadentradas;
	acumuladodinero[2] += totalapagar;
	
	
	matrixconsulta[numerofactura - 1][0] = numerofactura;
    matrixconsulta[numerofactura - 1][1] = cedula;
    matrixconsulta[numerofactura - 1][2] = tipo;
    matrixconsulta[numerofactura - 1][3] = cantidadentradas;
    matrixconsulta[numerofactura - 1][4] = subtotal;
    matrixconsulta[numerofactura - 1][5] = cargoservicio;
    matrixconsulta[numerofactura - 1][6] = totalapagar;
    break;	
    	    	   	
	}
	
	}while (opcion=='s'|opcion=='S'); 
	
	menu();
}
void estadisticas(){
	printf("Cantidad Entradas Localidad Sol Norte/Sur: %d\n", cantidad[0]);
	printf("Acumulado Dinero Localidad Sol Norte/Sur: %d\n", acumuladodinero[0]);
	printf("Cantidad Entradas Localidad Sombra Este/Oeste: %d\n", cantidad[1]);
	printf("Acumulado Dinero Localidad Sombra Este/Oeste: %d\n", acumuladodinero[1]);
	printf("Cantidad Entradas Localidad Preferencial: %d\n", cantidad[2]);
	printf("Acumulado Dinero Localidad Preferencial: %d\n", acumuladodinero[2]);
	
	menu();
}


void consultar() {
for (int fila = 0; fila < 7; fila++)
{
    if (matrixconsulta[fila][0] != 0) {
        cout << "Factura #" << matrixconsulta[fila][0] << endl;
        cout << "Cedula: " << matrixconsulta[fila][1] << endl;
        cout << "Tipo: " << matrixconsulta[fila][2] << endl;
        cout << "cantidad: " << matrixconsulta[fila][3] << endl;
        cout << "Total a pagar: " << matrixconsulta[fila][6] << endl;
        
        cout << endl;
    }
}
menu();

}


int main() {
	
menu();

	


		
	return 0;
}
