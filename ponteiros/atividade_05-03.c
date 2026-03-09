#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	short int x, y, z, N, i;
	short int *ptr1 = &x, *ptr2 = &y, *ptr3 = &z, *ptrN = &N;
	char tc, nome[40];
	char *ptr4 = &tc; 
	
	
	x = 10;
	y = 20;
	z = 100;
	tc = 'c';
	
	printf("\nvalor x = %d\n",x);
	printf("valor y = %d\n",y);
	printf("valor z = %d\n",z);
	printf("valor N = %d\n",N);
	printf("valor tc = %c\n",tc);
	printf("-------------------------------------------------------------------------------------------\n");
	
	printf("End. Mem. x = %p\n",&x);
	printf("End. Mem. y = %p\n",&y);
	printf("End. Mem. z = %p\n",&z);
	printf("End. Mem. N = %p\n",&N);
	printf("End. Mem. tc = %p\n",&tc);
	printf("-------------------------------------------------------------------------------------------\n");

	
	printf("End. Mem. ptr1 = %p\n",&ptr1);
	printf("End. Mem. ptr2 = %p\n",&ptr2);
	printf("End. Mem. ptr3 = %p\n",&ptr3);
	printf("End. Mem. ptr4 = %p\n",&ptr4);
	printf("End. Mem. ptrN = %p\n",&ptrN);
	printf("-------------------------------------------------------------------------------------------\n");
	
	printf("valor ptr1 = %p\n",ptr1);
	printf("valor ptr2 = %p\n",ptr2);
	printf("valor ptr3 = %p\n",ptr3);
	printf("valor ptr4 = %p\n",ptr4);
	printf("valor ptrN = %p\n",ptrN);
	printf("-------------------------------------------------------------------------------------------\n");
	
	printf("V|r onde ptr1 aponta = %d\n",*ptr1);
	printf("V|r onde ptr2 aponta = %d\n",*ptr2);
	printf("V|r onde ptr3 aponta = %d\n",*ptr3);
	printf("V|r onde ptr4 aponta = %c\n",*ptr4);
	printf("V|r onde ptrN aponta = %d\n",*ptrN);
	printf("-------------------------------------------------------------------------------------------\n");
	
	printf("End. Mem. onde ptr1 aponta = %p\n",&*ptr1);
	printf("End. Mem. onde ptr2 aponta = %p\n",&*ptr2);
	printf("End. Mem. onde ptr3 aponta = %p\n",&*ptr3);
	printf("End. Mem. onde ptr4 aponta = %p\n",&*ptr4);
	printf("End. Mem. onde ptrN aponta = %p\n",&*ptrN);
	printf("-------------------------------------------------------------------------------------------\n");	
	
	printf("Digite um nome: ");
	fflush(stdin);
	gets(nome);
	
	printf("End. Mem. string %s = %p\n",nome,&nome);
	
	for(i = 0; i < strlen(nome); i++){
		printf("End. Mem. do caractere %c = %p - indice = %d\n",nome[i],&nome[i],i);
	}
	
}
