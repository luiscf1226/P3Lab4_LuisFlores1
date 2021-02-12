#ifndef INVENTARIO_HPP
#define INVENTARIO_HPP
#include<string>
#include<iostream>
#include<vector>
#include "producto.hpp"
using namespace std;
class inventario{
	private:
	vector <producto> productos;
	vector <string> categorias;
	public:
	inventario();
	//inventario(vect)
	inventario(vector<producto>,vector<string>);
	~inventario();
	vector<producto> getProductos();
	vector<string> getCategorias();
	void setProductos(vector<producto>);
	void setCategorias(vector<string>);
	string toString();	
};
#endif
