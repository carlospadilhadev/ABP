#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include "Arvores.h"

int main() {
	setlocale(LC_ALL, "Portuguese");
	TNo *raiz, *raizAVL;
	TipoAluno item;
	int op = 1;
	//criaArquivo();
	inicializa(&raiz);
	inicializa(&raizAVL);
	encheArvore(&raiz, &raizAVL);
	menu(&raiz, &raizAVL);
        system("pause");
	return 0;
}
