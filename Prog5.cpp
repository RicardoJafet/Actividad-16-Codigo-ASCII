/*Autor: Ricardo Jafet Granados Chable, Realizado: 31/03/2022
    programa numero 5 parcial 2 en C: Programa que pide un caracter y se indique si es letra, numero o un caracter de puntuacion mediante codigo ASCII.
	*/
#include<stdio.h>

int main() {
	unsigned char c;
	//printf("Pa%cuelo,Canci%cn \n",164,162);
	printf("Introduce un caracter: ");
	scanf("%c",&c);
	//printf("Se introdujo el caracter <%c> y su codigo ASCII es %d \n",dato,dato);
	if(c>='A'&& c<='Z' || c>='a' && c<='z' || c>= 160 && c<=165 || c== 129 || c==130){
		printf("<%c> es una letra \n",c);
	}
	else if (c>='0' && c<='9'){
		printf("<%c> es un numero \n",c);
	}
	else {
		printf("<%c> es un caracter especial \n",c);
	}
	return 0;
}
