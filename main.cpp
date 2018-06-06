#include "genBST.h"
#include "algoritmos_ord.h"
#include <stdlib.h>

int escolha, aux;

int teste = 0, *vetor;

void menu();
void cadastrar(int num);

BST <int> arv;

int main() {
	menu();
	return 0;
}

void menu() {

	cout << "1 - Inserir Elemento" << endl;
	cout << "2 - Imprimir Arvore" << endl;
	cout << "3 - Balancear Arvore" << endl;
	cout << "Digite um numero para adicioanar na arvore: ";
	cin>>escolha;

	switch(escolha){
		case 0:
			return;
		case 1:
			cout<<"Digite o numero para inserir na arvore: ";
			cin>>aux;
			arv.insert(aux);
			cadastrar(aux);
			break;

		case 2:
			arv.displayTree();
			cin >> escolha;
			break;

		case 3:
			bubble_sort(vetor, teste);
			arv.clear();
			arv.balance(vetor, 0, teste-1);
			break;
	}

	menu();
}


void cadastrar(int num){
	if(teste == 0){
		teste++;
		vetor = (int *) malloc (teste*sizeof(int));
		vetor[teste-1] = num;
	}else{
		teste++;
		vetor = (int *)realloc(vetor, teste*sizeof(int));
		vetor[teste-1] = num;
	}

}