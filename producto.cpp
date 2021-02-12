#include "producto.hpp"
#include<string>
#include<iostream>
#include<vector>
using namespace std;
producto::producto(){
	//vacio
}
producto::producto(int i,string n,string c,int cant,float p){
	this->id = i;
	this->nombre = n;
	this->categoria = c;
	this->cantidad = cant;
	this->precio = p;
}
producto::~producto(){

}
int producto::getId(){
	return this->id;
}
void producto::setId(int i){
	this->id=i;
}
string producto::getNombre(){
	return this->nombre;
}
void producto::setNombre(string n){
	this->nombre=n;
}
string producto::getCategoria(){
	return this->categoria;
}
void producto::setCategoria(string c){
	this->categoria=c;
}
int producto::getCantidad(){
	return this->cantidad;
}
void producto::setCantidad(int cant){
	this->cantidad=cant;
}
float producto::getPrecio(){
	return this->precio;
}
void producto::setPrecio(float p){
	this->precio=p;
}
string producto::toString(){
	string cad= "" ;
	cad+= "Id: "+to_string(this->getId())+"\n";
	cad+= "Nombre: "+this->getNombre()+"\n";
	cad+= "Categoria: "+this->getCategoria()+"\n";
	cad+= "Cantidad: "+to_string(this->getCantidad())+"\n";
	cad+= "Precio: "+to_string(this->getPrecio())+"\n";
	return cad;
}
