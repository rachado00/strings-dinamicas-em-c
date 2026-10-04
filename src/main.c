#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringDinamica.h"

int main() {
    //EXEMPLOS:
    String texto = criarString("amarelo ");
    colocarTextoNoFinal(&texto, "lindo, ");
    colocarTextoNoFinal(&texto, "mas muito amarelinho");

    printf("o texto e: %s\n", texto.texto);

    liberarString(&texto);
}