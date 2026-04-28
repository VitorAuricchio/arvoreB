#pragma once
#include <iostream>
#include <fstream> //Necessrio para gerar o arquivo .dot do Graphviz

using namespace std;

//classe que representa uma pagina (nodo) da Árvore B
class NodoArvoreB {
public:
    int* chaves;
    int ordem;
    NodoArvoreB** filhos;
    int qtdChavesAtuais;
    bool isFolha;

    NodoArvoreB(int ordemDaArvore, bool NodoIsFolha);

    void imprimirPreOrdem(); //caminhamentos
    void imprimirEmOrdem();
    void imprimirPosOrdem();

    void gerarDotPreOrdem(ofstream& arquivoDot);

    NodoArvoreB* buscar(int chaveDesejada);

    void inserirNoNodoNaoCheio(int novaChave); //inserir na posicao correta do array quando a pagina nao estiver cheia
    void dividirFilhoCheio(int indiceDoFilho, NodoArvoreB* filhoQueSeraDividido); //pra fazer a divisao no meio quando o nodo estiver cheio

	int encontrarChave(int chaveDesejada); //busca no array o indice da chave desejada ou o indice onde ela deveria estar

    //remoção
	void remover(int chaveParaRemover); //funcao que decide qual tipo de remocao sera feita (folha ou nao folha)
    void removerDaFolha(int indice); //exclusao de uma chave na pagina folha, sem underflow
    void removerDeNaoFolha(int indice); //exclusao de uma chave nao folha, sem underflow
    int obterAntecessor(int indice); //retorna o maior dos menores
    int obterSucessor(int indice); //retorna o menor dos maiores
    void preencher(int indice); //merge
    void pegarEmprestadoAnterior(int indice); //rotação à direita
    void pegarEmprestadoProximo(int indice); //rotação à esquerda
    void fundirNodos(int indice); // Faz o merge de nodos
};