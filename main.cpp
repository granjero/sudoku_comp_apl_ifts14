/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 26 de mayo de 2016, 19:07
 */

#include <stdio.h>

//incluye las funciones
#include "getFila.h" //cabecera de getFila
#include "getFila.c" //cuerpo de getFila

#include "getColumna.h" //cabecera de getColumna
#include "getColumna.c" //cuerpo de getColumnan

#include "getCuadrante.h" //cabecera de getCuadrante
#include "getCuadrante.c" //cuerpo de getCuadrante

#include "obiteneValUnicos.h" //cabecera de obiteneValUnicos
#include "obiteneValUnicos.c" //cuerpo de obiteneValUnicos

#include "imprimeSudoku.h" // cabecera de imprimeSudoku
#include "imprimeSudoku.c" //cuerpo de imprimeSudoku

#include "imprimeColFil.h" //cabecera de imprimeColFil
#include "imprimeColFil.c" // cuerpo de imprimeColFil

#include "imprimeCuadrante.h" //cabecera imprimeCuadrante
#include "imprimeCuadrante.c" //cuerpo imprimeCuadrante

int main() 
{
    int sudokuLeido[81]; //aca me volvi loco porque daba un core dumped hasta que puse var[81] en lugar de *var 
    int *columnaObtenida;
    int *filaObtenida;
    int *cuadranteObtenido; 
    int *unico;
    int i = 0;
    
    FILE *sudoku;
    
    sudoku = fopen("sudoku.txt", "r+");
    
    while(!feof(sudoku))
    {
        fscanf(sudoku, "%i", &sudokuLeido[i]);
        //printf("%i dato leido\n", i);
        i++;
    }
    
    fclose(sudoku);
       
    imprimeSudoku(sudokuLeido);
    
    filaObtenida = getFila(40,sudokuLeido);
    columnaObtenida = getColumna(40,sudokuLeido);
    cuadranteObtenido = getCuadrante(40,sudokuLeido);

    imprimeColFil(filaObtenida);
    imprimeColFil(columnaObtenida);
    imprimeCuadrante(cuadranteObtenido);

    unico = obtieneValUnicos(filaObtenida,columnaObtenida,cuadranteObtenido);

    for (i=0; i < 50; i++)
    {
        printf("%i ", unico[i]);
        if ((i+1)%9 == 0)
        {
            printf("\n");
        }
    }
    printf("\n\n");  
    
    printf("%i",sizeof(unico));
    return 0;
}