#include <iostream>
#include <ctime>
#include <random>
#include <string>
#include <vector>
#include "producto.hpp"
#include "inventario.hpp"
using namespace std;
int main (){
	int total;
	
	float pp=0;
	vector<producto*> productos;
	vector<producto*> productos3;
	vector<producto> productos2;
	vector<inventario*> inventarios;
	vector<string>categorias;
	vector<string>unicos;
	vector<string>categ2;
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
				//	m2==4;
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
					pp+=precio;
					unicos.push_back(n);
					//producto p=(id,n,categ,cant,p);
					productos.push_back(new producto(id,n,categ,cant,precio));
					categorias.push_back(categ);
					inventario in;
					in.setCategorias(categorias);
					in.setProductos(productos2);
					total++;
					cout<<"Creado Exitosamente"<<endl;
					m2==4;
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
					cout<<"Modificado Exitosamente"<<endl;
					m2==4;
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
					cout<<"modificado exitosamente"<<endl;
					m2==4;
				}//fin Eliminar
			}
		}//fin mantenimiento
		if(menu==2){
			cout<<"Estadisticas Generales..."<<endl;
			cout<<"Productos: "<<endl;
			for(int i = 0; i < productos.size(); i++){
          		producto *c = productos[i];
          		cout <<"------" << "Producto #" << i <<"------"<<endl;
          		cout << c->toString() << endl;
       		}
       		string ver="";
       		int tt=0,ll=0;
       		float p2=0;
       		//verifico si son las mismas categorias con mi vector de categorias
       		for(int j=0;j<unicos.size();j++){
       			for(int k=1;k<unicos.size();k++){
       				if(unicos[j]!=unicos[k]){
       					categ2.push_back(unicos[j]);
       					tt++;
       					producto *p1;
       					p2+=p1->getPrecio();
					   }else{
					   	ll++;
					   }
				   }
			   }
       		cout<<"Total Unidades: "<<total<<endl;
       		cout<<"Total Productos Unicos: "<<tt<<endl;
       		cout<<"Precio Total del Inventario: "<<pp<<endl;
       		cout<<"Total de Productos Por Categoria: "<<ll<<endl;
			cout<<"Precio Total Por Categoria: "<<ll<<endl;
		}//fin estadisticas
		if(menu==3){
			string bus;
			cout<<"Busqueda en Producto: "<<endl;
			cout<<"Ingrese Palabra a Buscar: "<<endl;
			cin>>bus;
			for(int i=0;i<productos.size();i++) {
				producto *c = productos[i];
				if(c->getNombre()==bus){
					//cout<<"si";
					cout<<"PALABRA ENCONTRADA: "<<endl;
					//productos.push_back(new producto(id,n,categ,cant,precio));
					productos3.push_back(new producto(c->getId(),c->getNombre(),c->getCategoria(),c->getCantidad(),c->getPrecio()));
					cout<<"El Subinventario es: "<<endl;
					for(int i = 0; i < productos.size(); i++){
          				producto *c = productos3[i];
          				cout <<"------" << "Producto #" << i <<"------"<<endl;
          				cout << c->toString() << endl;
       				}	
		     	}
		   }
		}//fin busqueda

	}//fin while
	for(int i = 0; i < productos.size(); i++){
    	delete productos[i];
  	}
  	for(int i = 0; i < inventarios.size(); i++){
    	delete inventarios[i];
  	}
  	for(int i = 0; i < productos3.size(); i++){
    	delete productos3[i];
  	}
	
	
}
