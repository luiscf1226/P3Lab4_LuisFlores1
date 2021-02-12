#ifndef PRODUCTO_HPP
#define PRODUCTO_HPP
#include<string>
#include<iostream>
#include<vector>
using namespace std;
class producto{
	private:
	int id;
	string nombre;
	string categoria;
	int cantidad;
	float precio;
	public :
	producto();
	producto(int,string,string,int,float);
	~producto();
	int getId();
	string getNombre();
	string getCategoria();
	int getCantidad();
	float getPrecio();
	void setId(int);
	void setNombre(string);
	void setCategoria(string);
	void setCantidad(int);
	void setPrecio(float);
	string toString();
};
#endif
