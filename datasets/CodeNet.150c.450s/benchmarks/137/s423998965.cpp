// compile & run:     g++ main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:
//

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//Tenemos un tamaño de alfabeto
//Por ejemplo, si fueran solo las letras minúsculas de la a la z.
const int ALF = 26;

//Si tuvieramos minúsculas y mayúsculas, sería 52.
//Depende del problema


//Tenemos una estructura para representar un nodo del Trie.
struct nodo {

	//Indica el índice de la cadena que termina ahí. -1 si no termina ninguna.
	int termina;

	//Tenemos un arreglo donde podemos guardar el índice del hijo por cada letra.
	//Por lo tanto, los hijos deben enumerarse de 0 a ALF-1
	//Si fueran las letras minúsculas, a = 0 , b = 1, ... , z = 25
	//Si el valor de hijos[i] es -1, es porque no tengo un camino con la letra con valor i.
	//Por ejemplo, con las letras minúsculas, si hijos[2] = -1, entonces no tengo un camino con la letra 'b'
	int hijos[ALF];

	//Constructor de la estructura
	//Inicio indicando que en un nodo nuevo, ninguna cadena termina ahí y no tengo ningún hijo
	//Por lo tanto todo es -1
	nodo(){
		termina = -1;
		for(int i = 0; i < ALF; i ++)
			hijos[i] = -1;
	}

	//Se pueden agregar más variables dependiendo del problema.
	//Un ejemplo sería, un entero que cuente cuantas cadenas pasan por este nodo.

};

int ultimo = 1;
//La raíz es el único nodo que en un principio está.
//Por lo tanto, decimos que tenemos un único nodo
//Sin embargo, ninguna cadena termina ahí, y no tiene hijos al inicio

//Un arreglo de nodos, cada posición es un nodo, y el arreglo hijos interno
//indica como está conectados
//La longitud debe ser tan grande como la suma de las longitudes de las cadenas del diccionario
nodo Trie[500002];

//Una función que dado un caracter, le asigna un valor entre 0 y ALF-1
int valor(char c){
	return c-'a';
	//Aquí , a = 0, b = 1, ... , z = 25
	//Si fueran mayusculas:
	//return c - 'A';
	//Depende de cada problema
}

//Una función que recibe una cadena por referencia como parámetro y un índice
//La cadena es la que queremos meter al Trie
//El indice nos sirve para distinguir las cadenas entre sí
void Agregar(string &s, int idx){

	//Iniciamos en la raíz, es decir, el nodo 0
	int pos = 0;

	//Iteramos por cada caracter en la cadena.
	for(int i = 0; i < s.size(); i++){

		//Nos moveremos al hijo en la posición valor(s[i])

		//Si ese hijo no existe, lo creamos
		if(Trie[pos].hijos[valor(s[i])] == -1){
			//Decimos que el nuevo nodo, es el último nodo sin usar hasta ahora
			ultimo++;
			Trie[pos].hijos[valor(s[i])] = ultimo;
		}

		//Ahora si nos movemos
		pos = Trie[pos].hijos[valor(s[i])];
	}

	//Si ninguna cadena había terminado antes en este punto, indicamos que ahora
	//termina una con índice 'idx'
	//Si ya alguna antes había terminado aquí, significa que hay repetidas, por lo tanto,
	//podríamos ignorarla, o llevar una lista, dependiendo del problema
	if(Trie[pos].termina == -1) Trie[pos].termina = idx;
}
//Dado que por cada caracter de la cadena a insertar, en el peor de los casos,
//creamos un nuevo nodo y nos movemos, es decir, hacemos un número constante de operaciones,
//La complejidad es |s|



//Dado un string, dice si está o no en el diccionario
//Le pasamos el string por referencia
bool Busca(string &s){

	//Iniciamos en la raíz
	int pos = 0;
	for(int i = 0; i < s.size(); i++){

		//Nos movemos conforme los caracteres de la cadena
		pos = Trie[pos].hijos[valor(s[i])];

		//Si en algún momento llego a -1, es porque seguí un camino que no existe
		//Si no existe el camino, entonces la cadena no está
		if(pos == -1) return false;
	}

	//Verificamos si una cadena termina en el nodo donde acabó el camino
	if(Trie[pos].termina == -1) return false;
	return true;

}

char toLowerC(char in) {
  if(in <= 'Z' && in >= 'A')
    return in - ('Z' - 'z');
  return in;
}

int main() {
    int cases;
    cin>>cases;
    int i=0;
    while (cases--) {
        string Operation;
        string s;
        cin>>Operation;
        cin>>s;
        if(Operation == "insert") {
            string newS;
            for (int pos=0;pos<s.length();pos++) {
                newS += toLowerC(s[pos]);
            }
            Agregar(newS,newS.size());
        } else {
            string newS;
            for (int pos=0;pos<s.length();pos++) {
                newS += toLowerC(s[pos]);
            }
            if (Busca(newS)) {
                cout<<"yes\n";
            } else {
                cout<<"no\n";
            }
        }
        i++;
    }
}

