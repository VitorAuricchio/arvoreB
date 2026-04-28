#pragma once
#include <iostream>
#include <fstream> // Necessário para gerar o arquivo .dot do Graphviz
#include "NodoArvoreB.h"
using namespace std;

//classe principal da Árvore B ela que chama as funcoes de nodo pra fazer as operacoes
class ArvoreB {
public:
	NodoArvoreB* raiz; //endereco de memoria que guarda um objeto da classe NodoArvoreB, que representa a pagina raiz da arvore
    int ordem;

    ArvoreB(int ordemDaArvore);

    //funcoes publicas que voce chamara na sua main()
    void imprimirPreOrdem();
    void imprimirEmOrdem();
    void imprimirPosOrdem();

    void gerarArquivoDot(string nomeArquivo);

    NodoArvoreB* buscar(int chaveDesejada);
    void inserir(int novaChave);
    void remover(int chaveParaRemover);
};