#include <iostream>
#include "rlutil.h"
using namespace rlutil;
using namespace std;

#include "productos.h"

void rectangulo(int x, int y, int ancho, int alto, const char *texto) {

	//cls();

	for (int i = x; i <= x + ancho; i++) {
		gotoxy(i, y);
		cout << '*';
		gotoxy(i, y + alto);
		cout << '*';
	}

	for (int i = y; i <= y + alto; i++) {
		gotoxy(x, i);
		cout << '*';
		gotoxy(x+ancho, i);
		cout << '*';
	}

	gotoxy(x+ancho/2-strlen(texto)/2, y + alto/2);

	cout << texto;

	
	gotoxy(20, 20);

}



void menu() {
	int op, cantidad_productos = 0;

	Producto productos[10];
	
	setBackgroundColor(BLUE);


	do {
		cls();
		setColor(WHITE);
		cout << "MENÚ PRODUCTOS" << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "1 - Cargar producto" << endl;
		cout << "2 - Editar producto x ID" << endl;
		cout << "3 - Listar producto x ID" << endl;
		cout << "4 - Listar productos(ordenados por precio)" << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "0 - Salir del programa" << endl;

		cin >> op;

		switch (op)
		{
		case 1:

			if (cantidad_productos < 10) {

				productos[cantidad_productos] = crearProducto();
				cantidad_productos++;

				// cout << "Prodcuto cargado con exito!" << endl;

				rectangulo(10, 10, 70, 4, "Prodcuto cargado con exito!");
			}
			else {
				cout << "No se puede serguir cargando productos." << endl;
			}

			system("pause");
			break;
		case 3:
			rectangulo(10, 10, 60, 8, "Hola Mundo");
			system("pause");
			break;
		case 4:
			
			cls();

			gotoxy(3, 2);
			cout << "ID";
			gotoxy(8, 2);
			cout << "Nombre";
			gotoxy(38, 2);
			cout << "Precio";
			gotoxy(50, 2);
			cout << "Stock";
			gotoxy(65, 2);
			cout << "Stock Minimo";



			for (int i = 0; i < cantidad_productos; i++) {
				mostrarProducto(productos[i], 4 + i);
			}


			cout << endl;
			system("pause");
			break;

		default:
			break;
		}

	} while (op != 0);
	
}

int main() {

	setlocale(LC_ALL, "Spanish");

	menu();

	return 0;
}																		