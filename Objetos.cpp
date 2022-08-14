//PROGRAMA CREAR 5 DIFERENTES OBJETOS

#include<iostream>
#include<stdlib.h>
using namespace std;
//---------------------------------------------------------------------------CLASES
//Clase animal
class Animal{
	private: //Atributos
		string nombre_animal;
		string clasificacion;
	public: //métodos
		Animal(string,string); //constructor
		void animal_comer();
};

//Clase objeto
class Objeto{
	private: //Atributos
		string nombre_objeto;
		string material_objeto;
        string color_objeto;
	public: //métodos
		Objeto(string,string, string); //constructor
		void funcion_objeto();
};

//Clase herramienta
class Herramienta{
	private: //Atributos
		string nombre_herramienta;
		int precio_herramienta;
	public: //métodos
		Herramienta(string,int); //constructor
		void funcion_herramienta();
};

//Clase platillo
class Platillo{
	private: //Atributos
		string nombre_paltillo;
		int precio_platillo;
	public: //métodos
		Platillo(string,int); //constructor
		void servir_platillo();
};

//Clase dispositivo
class Dispositivo{
	private: //Atributos
		string nombre_dispositivo;
		int precio_dispositivo;
	public: //métodos
		Dispositivo(string,int); //constructor
		void datos_dispositivo();
};
//---------------------------------------------------------------------------CONSTRUCTOR
//Constructor, nos sirve para inicializar los atributos
//Constructor clase animal
Animal::Animal(string _nombre_animal,string _clasificacion){
	nombre_animal = _nombre_animal;
    clasificacion = _clasificacion;
}

//Constructor clase objeto
Objeto::Objeto(string _nombre_objeto,string _material_objeto, string _color_objeto){
	nombre_objeto = _nombre_objeto;
    material_objeto = _material_objeto;
    color_objeto = _color_objeto;
}

//Constructor clase herramienta
Herramienta::Herramienta(string _nombre_herramienta,int _precio_herramienta){
	nombre_herramienta = _nombre_herramienta;
    precio_herramienta = _precio_herramienta;
}

//Constructor clase platillo
Platillo::Platillo(string _nombre_platillo,int _precio_platillo){
	nombre_paltillo = _nombre_platillo;
    precio_platillo = _precio_platillo;
}

//Constructor clase dispositivo
Dispositivo::Dispositivo(string _nombre_dispositivo,int _precio_dispositivo){
	nombre_dispositivo = _nombre_dispositivo;
    precio_dispositivo = _precio_dispositivo;
}
//---------------------------------------------------------------------------METODOS
void Animal::animal_comer(){
	cout<<"Nombre: "<<nombre_animal<<endl;
    cout<<"Clasificacion: "<<clasificacion<<endl;
    cout<<"\n Estoy hambriento, en busca de una presa que cazar "<<endl;
}

void Objeto::funcion_objeto(){
	cout<<"Nombre: "<<nombre_objeto<<endl;
    cout<<"Hecho de: "<<material_objeto<<endl;
    cout<<"Color: "<<color_objeto<<endl;
    cout<<"\n Su funcion es ayudar al usuario con sus tareas"<<endl;
}

void Herramienta::funcion_herramienta(){
	cout<<"Nombre: "<<nombre_herramienta<<endl;
    cout<<"Precio: $"<<precio_herramienta<<endl;
    cout<<"\n Su funcion es de ayudar a reparar cosas"<<endl;
}

void Platillo::servir_platillo(){
	cout<<"Nombre: "<<nombre_paltillo<<endl;
    cout<<"Precio: $"<<precio_platillo<<endl;
    cout<<"\n *Se sirve al cliente que esta esperando su pedido"<<endl;
}

void Dispositivo::datos_dispositivo(){
	cout<<"Nombre: "<<nombre_dispositivo<<endl;
    cout<<"Precio: $"<<precio_dispositivo<<endl;
    cout<<"\n Stock disponible todavia"<<endl;
}
//---------------------------------------------------------------------------PROGRAMA PRINCIPAL
//Animal, objeto, herramienta, platillo, dispositivo
int main(){
    cout<<"Objeto 1: Un animal "<<endl;
	Animal animal = Animal("Tigre", "Carnivoro");
    animal.animal_comer();

    cout<<"\n\nObjeto 2: Un objeto "<<endl;
    Objeto objeto = Objeto("Pluma", "plastico", "Negra");
    objeto.funcion_objeto();

    cout<<"\n\nObjeto 3: Una herramienta "<<endl;
    Herramienta herramientaa = Herramienta("Martillo", 175);
    herramientaa.funcion_herramienta();

    cout<<"\n\nObjeto 4: Un platillo "<<endl;
    Platillo platillo = Platillo("Spaguetti", 30);
    platillo.servir_platillo();

    cout<<"\n\nObjeto 5: Dispositivo "<<endl;
    Dispositivo dispositivo = Dispositivo("Iphone 15 pro max extra", 22000);
    dispositivo.datos_dispositivo();

	system("pause");
	return 0;
}
