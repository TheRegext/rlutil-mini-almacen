#pragma once
struct Producto {
	int id;
	char nombre[30];
	float precio;
	int stock;
	int stock_minimo;
};


Producto crearProducto() {
	Producto p;
	int comienzo_linea = 4;

	cls();

	setColor(BROWN);

	cout << "============================================================" << endl;
	cout << "   CREAR NUEVO PRODUCTO " << endl;
	cout << "============================================================" << endl;

	setColor(LIGHTGREEN);

	gotoxy(1, comienzo_linea + 1);
	cout << "Codigo: " << endl;
	gotoxy(1, comienzo_linea + 2);
	cout << "Nombre: " << endl;
	gotoxy(1, comienzo_linea + 3);
	cout << "Precio: $" << endl;
	gotoxy(1, comienzo_linea + 4);
	cout << "Stock: " << endl;
	gotoxy(1, comienzo_linea + 5);
	cout << "Stock Minimo: " << endl;

	gotoxy(9, comienzo_linea+1);
	cin >> p.id;
	gotoxy(9, comienzo_linea+2);

	cin.ignore();
	cin.getline(p.nombre, 30);

	gotoxy(10, comienzo_linea+3);
	cin >> p.precio;
	gotoxy(8, comienzo_linea+4);
	cin >> p.stock;
	gotoxy(15, comienzo_linea+5);
	cin >> p.stock_minimo;

	return p;
}


void mostrarProducto(Producto p, int fila) {
	
	gotoxy(3, fila);
	cout << p.id;
	gotoxy(8, fila);
	cout << p.nombre;
	gotoxy(38, fila);
	cout << p.precio;
	gotoxy(50, fila);
	cout << p.stock;
	gotoxy(65, fila);
	cout << p.stock_minimo;
}