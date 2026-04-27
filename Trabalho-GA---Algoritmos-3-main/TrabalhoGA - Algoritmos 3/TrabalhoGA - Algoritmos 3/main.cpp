#include <iostream>
#include "ArvoreB.h"
using namespace std;

int main() {
    ArvoreB* minhaArvore = new ArvoreB(2);
    int valoresParaInserir[] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65 };

    for (int v : valoresParaInserir) {
        minhaArvore->inserir(v);
    }

    cout << "Arvore construida" << endl;
    minhaArvore->gerarArquivoDot("dotFiles/cascata.dot");

    minhaArvore->remover(5);
    minhaArvore->remover(10);

    cout << "Arvore depois da remocao feita" << endl;
    minhaArvore->gerarArquivoDot("dotFiles/cascataRemocao.dot");

    minhaArvore->imprimirEmOrdem();
    cout << endl;

    return 0;
}