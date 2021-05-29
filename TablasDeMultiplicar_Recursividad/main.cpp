#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int sucesion(int x, int g ) {
	/*
	Estas son conocidas como variables locales, son 
	aquellas que ayudan para una sola parte de codigo
	*/
	int b=g;
	int detener;//Esta variable nos va devolver el valor para que la funcion devuelva algo, tambien almacenamos en una variable local g en b
	
	if (x>10) {//Este if nos ayuda a detener el codigo , cuando sea mayor de diez pasa a la variable que tenemos abajo y la carga
	//En programacion siempre debemos tener una salida por ende no se recomienda poner return
		detener = 1;//Aqui nos devuelve un uno para que termine la funcion y devuelva algo
		//Este uno jamas lo va a mostrar en pantalla solo va a cargar la variable local
	
	}
	else {//En caso de que x no sea mayor a diez lo que va ejecutar son las siguientes instrucciones
		
		
	
		detener = x * sucesion(x+1,b);//Aqui aplicamos la recursividad, como es parametrizado colocamos un contador, despues el valor del usuario
		//La variable detener es un acumulador , esto nos sirve para cuando se resuelva se acumule los datos anteriores que se han acumulado
		cout << b<<"  X  "<<x <<"  =  "<<x*b<< endl;/*Como vemos en esta parte nos muestra los resultados de la operacion que se realiza*/
		return detener;//Como habiamos dicho devuelve el valor y lo vuelve a cargar en los parametros

		/*
		
		Ejemplo :
		los parametros que usaremos son x y g
		int sucesion(int x, int g )
		1起 Cargamos la funcion con parametros en este ejemplo uno y dos
		
		sucesion (1,2);
		2起Verifica el if si cumple la primera condicion
		si x es mayor a diez;
		
		3起entonces el programa ve que no es mayor a diez
		por lo tanto pasa a lo siguiente
		
		4起Entonces la variable x tomara todos los datos de 
		la funcion en la cual la variable x es un contador y 
		la variable g llevara dos y lo acumula para detener
		detener = x * sucesion(0+1,2);

		5起Mostrara los primeros datos y luego los multiplicara
		2 X 1 = 2*1 
		2 X 1 = 2
		6起Usara el return para devolver 
		el valor pero ahora cargado nuevos 
		valores
		sucesion(1,2);
		Y volvera a repetir todo los pasos y se detendra hasta que sea mayor a diez.

		
		*/
	}

}

/* La gran diferencia es que puedes seleccionar la tabla que vas a multiplicar*/
//Utilizando un metodo para captura de datos
//Este nos va a servir para solo mandar a llamar un metodo y no programar en el main

void capturaDatos() {
/*Como tiene un menu de opciones tuve que usar dos variables*/
	int datos,opc;//La variable local datos 
	//la usaremos para almacenar datos del usuario o capturar los datos del usuario
	//Mostrara un mensaje diciendo que tabla vas a calcular
	cout << "Que tabla vas a calcular" << endl;
//Almacenara la tabla
	cin >> datos;
	//Ahora lo mas interesante, aqui aplicamos recursividad indirecta y lo cargamos con los datos de usuario
	sucesion(1,datos);//Recursividad indirecta
	//Termina las operaciones y nos mostrara un menu sencillo uno para si dos para no 
	cout << "Deseas continuar ?" << endl;
	cout << "1.- SI" << endl;
	cout << "2.-NO" << endl;
	//almacena los datos en la variable local y los coteja con switch y los case
	cin >> opc;
	switch (opc) {
	//Volvemos a usar recursividad directa para el menu
	case 1:

		system("cls");//Limpia pantalla
		capturaDatos();//se llama al mismo metodo , recursividad directa
		break;
		//Se acaba el programa y sale un gracias 
	case 2:
		system("cls");//Limpia pantalla
		cout << "GRACIAS POR USAR EL PROGRAMA" << endl;
		system("pause");//Pausar el programa
		break;


		//En caso de que marque otro valor va iniciar otra vez pero primero con 
		//un mensaje y despues manda a llamar con recursividad directa a captura de datos 
	default:
		system("cls");//Limpia pantalla
		cout << "ERROR VALOR NO VALIDO, FAVOR DE TOMAR VALORES ENTEROS" << endl;
		system("pause");//Pausar el programa
		system("cls");//Limpia pantalla
		capturaDatos();//llamada de metodo, recursividad directa
		break;







	}
	
	//Hay varias formas de recursividad, esta con operaciones y esta con llamada de metodo o funcion como lo que mostre
}


int main(int argc, char *argv[]) {
capturaDatos();
	return 0;
}
