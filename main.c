#include <stdio.h>
#include <stdlib.h>
#include "tab_hash.h"

int main(int argc, char *argv[]) {
    tipo_tab_hash minha_tab_hash; 
    tipo_no_hash *aux; 
    inicializarTabHash(&minha_tab_hash);

    insereTabHash(&minha_tab_hash, 77, 'a');
    insereTabHash(&minha_tab_hash, 111, 'b');
    insereTabHash(&minha_tab_hash, 9999, 'c');
    insereTabHash(&minha_tab_hash, 22, 'd');
    insereTabHash(&minha_tab_hash, 9, 'e');
    insereTabHash(&minha_tab_hash, 1007, 'f');

    imprimeTabHash(&minha_tab_hash);

    int ch;
    ch = 7000;
    aux = buscaTabHash(&minha_tab_hash, 1007);

    if (aux != NULL) {
        printf("chave 1007 encontrada; dado = %c\n", aux->valor); 
    } else {
        printf("chave nao encontrada\n");
    }

    printf("removido: %c\n", removeTabHash(&minha_tab_hash, 1007)); 

    return 0; 
}
