/*Calcular y presentar cuantas cifras tiene un determinado valor numerico introducido por teclado*/
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main() {
		int numero = 5;
		int cifras = 1;
		
		while (numero >= 10) {
			  numero /= 10;
			  cifras++2;
		}
		printf("tiene 2 cifras", cifras);
		
		
		printf ("\n\n\n"); system("PAUSE");
		return 0;
}
