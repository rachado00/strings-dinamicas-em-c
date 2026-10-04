#include <stdio.h>
#include <string.h>
#include "stringDinamica.h"

String criarString(const char *texto) {
    size_t tamanho = strlen(texto);

    char *ponteiro = malloc((tamanho + 1) * sizeof(char));

    if (ponteiro == NULL) {
        printf("nao foi possivel alocar\n");
        exit(1);
    }

    printf("memoria alocada com sucesso!\n");
    
    strcpy(ponteiro, texto);

    String string = {
        .texto = ponteiro,
        .tamanho = tamanho
    };

    return string;
}

void colocarTextoNoFinal(String *string, const char *texto) {
    size_t tamanho = strlen(texto);

    char *temporario = realloc(string->texto, (string->tamanho + tamanho + 1) * sizeof(char));

    if (temporario != NULL) {
        string->texto = temporario;
        printf("memoria realocada com sucesso!\n");

        string->tamanho += tamanho;
        strcat(string->texto, texto);
    }
}

void liberarString(String *string) {
    free(string->texto);
    printf("Memoria liberada com sucesso!\n");
}