#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct {
	int idade;
	int qtd_filhos;
	char nome[16]
}registro1;

typedef struct {
	float salario;
	char turno;
	char nome[32]
}registro2;

typedef struct {
	char sexo;
	int codigo;
	char nome[32];
}registro3;

typedef struct {
	char sexo;
	int codigo;
	char estcivil;
}registro4;
int main(){
	
	printf("REGISTRO -> 1\n");
	printf("Tamanho struct: %d\n",sizeof(registro1));
	printf("idade inicia em: %d\n",offsetof(registro1,idade));
	printf("qtd_filhos inicia em: %d\n",offsetof(registro1,qtd_filhos));
	printf("nome inicia em: %d\n",offsetof(registro1,nome));
	printf("--------------------------------------------------------------------\n\n");
	printf("REGISTRO -> 2\n");
	printf("Tamanho struct: %d\n",sizeof(registro2));
	printf("salario inicia em: %d\n",offsetof(registro2,salario));
	printf("turno inicia em: %d\n",offsetof(registro2,turno));
	printf("nome inicia em: %d\n",offsetof(registro2,nome));
	printf("--------------------------------------------------------------------\n\n");
	
	printf("REGISTRO -> 3\n");
	printf("Tamanho struct: %d\n",sizeof(registro3));
	printf("sexo inicia em: %d\n",offsetof(registro3,sexo));
	printf("codigo inicia em: %d\n",offsetof(registro3,codigo));
	printf("nome inicia em: %d\n",offsetof(registro3,nome));
	printf("--------------------------------------------------------------------\n\n");
	
	printf("REGISTRO -> 4\n");
	printf("Tamanho struct: %d\n",sizeof(registro4));
	printf("sexo inicia em: %d\n",offsetof(registro4,sexo));
	printf("codigo inicia em: %d\n",offsetof(registro4,codigo));
	printf("estcivil inicia em: %d\n",offsetof(registro4,estcivil));
	
}
