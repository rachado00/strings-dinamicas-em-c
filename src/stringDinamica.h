#ifndef STRING_DINAMICA_H
#define STRING_DINAMICA_H

#include <stdlib.h>

typedef struct {
    char *texto;
    size_t tamanho;
} String;

String criarString(const char *texto);
void colocarTextoNoFinal(String *string, const char *texto);
void liberarString(String *string);

#endif