#include <iostream>
#include <ctime>
#include <random>
#include <string>
#include <vector>
#include "producto.hpp"
#include "inventario.hpp"
using namespace std;
int main (){
	vector<producto*> productos;
	vector<producto> productos2;
	vector<inventario*> inventarios;
	vector<string>categorias;
	int menu=0;
	while(menu!=4){
		cout<<"1. Mantenimiento de productos"<<endl;
		cout<<"2. Estadisticas Generales"<<endl;
		cout<<"3. Buscar por nombre"<<endl;
		cout<<"4. Salir"<<endl;
		cin>> menu;
		if(menu==1){
			int m2=0;
			while(m2!=4){
				cout<<"1. Agregar Producto"<<endl<<"2. Modificar Producto"<<endl<<"3. Eliminar Producto"<<endl<<"4. Regresar"<<endl;
				cin>>m2;
				
				if(m2==1){
					int id,cant;
					string n,categ;
					float precio;
					cout<<"ingrese el ID: "<<endl;
					cin>>id;
					cout<<"Ingrese Nombre: "<<endl;
					cin>>n;
					cout<<"Ingrese Cantidad: "<<endl;
					cin>>cant;
					cout<<"Ingrese Categoria: "<<endl;
					cin>>categ;
					cout<<"Ingrese Precio: "<<endl;
					cin>>precio;
					//producto p=(id,n,categ,cant,p);
					productos.push_back(new producto(id,n,categ,cant,precio));
					categorias.push_back(categ);
					inventario in;
					in.setCategorias(categorias);
					in.setProductos(productos2);
					cout<<"Creado Exitosamente"<<endl;
				}//fin agregar
				if(m2==2){
					for(int i = 0; i < productos.size(); i++){
          				producto *c = productos[i];
          				cout <<"------" << "Producto #" << i <<"------"<<endl;
          				cout << c->toString() << endl;
       				}
       				int i = -1;
       				cout << "Ingrese el indice del producto que modificar: ";
       				cin >> i;
        			producto *s = productos[i];
        			int id,cant;
					string n,categ;
					float precio;
					cout<<"ingrese el ID: "<<endl;
					cin>>id;
					cout<<"Ingrese Nombre: "<<endl;
					cin>>n;
					cout<<"Ingrese Cantidad: "<<endl;
					cin>>cant;
					cout<<"Ingrese Categoria: "<<endl;
					cin>>categ;
					cout<<"Ingrese Precio: "<<endl;
					cin>>precio;
					s->setId(id);
					s->setNombre(n);
					s->setCantidad(cant);
					s->setCategoria(categ);
					s->setPrecio(precio);
					
				}//fin modificar
				if(m2==3){
						for(int i = 0; i < productos.size(); i++){
          				producto *c = productos[i];
          				cout <<"------" << "Producto #" << i <<"------"<<endl;
          				cout << c->toString() << endl;
       				}
       				int prod = -1;
			        cout << "Ingrese el indice del producto que  eliminara: ";
			        cin >> prod;
			        delete productos[prod];
			        productos.erase(productos.begin()+prod);
			        break;
					
				}//fin Eliminar
			}
		}//fin mantenimiento
		if(menu==2){
			
		}//fin estadisticas
		if(menu==3){
			
		}//fin busqueda
	}
}
