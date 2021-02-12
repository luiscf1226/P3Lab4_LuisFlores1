#include "inventario.hpp"
inventario::inventario(){
	
}
inventario::inventario(vector<producto> p,vector<string> c){
	this->productos=p;
	this->categorias=c;
	
}
inventario::~inventario(){
	
}
vector<string> inventario::getCategorias(){
	return this->categorias;
}
void inventario::setCategorias(vector <string>c){
	this->categorias=c;
}
vector<producto> inventario::getProductos(){
	return this->productos;
}
void inventario::setProductos(vector<producto> p){
	this->productos=p;
}
