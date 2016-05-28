/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 26 de mayo de 2016, 19:07
 */

#include <stdio.h>
#include <malloc.h>

//incluye las funciones
#include "getFila.h" //cabecera de getFila
#include "getFila.c" //cuerpo de getFila

#include "getColumna.h" //cabecera de getColumna
#include "getColumna.c" //cuerpo de getColumnan

#include "getCuadrante.h" //cabecera de getCuadrante
#include "getCuadrante.c" //cuerpo de getCuadrante

#include "imprimeSudoku.h" // cabecera de imprimeSudoku
#include "imprimeSudoku.c" //cuerpo de imprimeSudoku

#include "imprimeColFil.h" //cabecera de imprimeColFil
#include "imprimeColFil.c" // cuerpo de imprimeColFil

int main() 
{
    int sudokuLeido[81]; //aca me volvi loco porque daba un core dumped hasta que puse var[81] en lugar de *var 
    int *columnaObtenida;
    int *filaObtenida;
    int *cuadranteObtenido;
    int i = 0;
    int j = 0;
    
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
    printf("columna index 3\n");
    columnaObtenida = getColumna(3, sudokuLeido);
    imprimeColFil(columnaObtenida);
   
    printf("cuadrante index 27\n");
    cuadranteObtenido = getCuadrante(27, sudokuLeido);
    imprimeColFil(cuadranteObtenido);
    
    printf("fila index 80\n");
    filaObtenida = getFila(80, sudokuLeido);
    imprimeColFil(filaObtenida);
    
    return 0;
}