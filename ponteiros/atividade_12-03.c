#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	char nome[] = "Moreno", *p, **pp;
	short int idade = 45, *i, **ii;
	
	p = nome;
	pp = &p;
	i = &idade;
	ii = &i;
	
	printf("\nValor de nome: %s\n",nome);
	printf("Usando ponteiro: %s\n",p);
	printf("Usando ponteiro de ponteiro: %s\n",*pp);
	printf("\n-----------------------------------------------------------\n\n");
	
	printf("2o. caractere usando pp com []: %c\n",(*pp)[1]);
	printf("3o caractere usando aritmetica de pp: %c\n",*(*pp+2));
	printf("\n-----------------------------------------------------------\n\n");
	
	printf("\nValor de idade: %d\n",idade);
	printf("Usando ponteiro: %d\n",*i);
	printf("Usando ponteiro de ponteiro: %d\n",**ii);
	printf("\n-----------------------------------------------------------\n\n");
	
	printf("\nEnd. de nome: %p\n",nome);
	printf("End. ponteiro de nome: %p\n",&p);
	printf("End. ponteiro de ponteiro de nome: %p\n",&pp);
	printf("\n-----------------------------------------------------------\n\n");	
	
	printf("\nEnd. de idade: %p\n",idade);
	printf("End. ponteiro de idade: %p\n",&i);
	printf("End. ponteiro de ponteiro de idade: %p\n",&ii);
	printf("\n-----------------------------------------------------------\n\n");
	
	printf("End. onde ponteiro de nome aponta: %p\n",p);
	printf("End. onde ponteiro de ponteiro de nome aponta: %p\n",*pp);
	
	return 0;
}
