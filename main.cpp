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
#include "imprimeSudoku.h" // cabecera de imprimeSudoku
#include "imprimeSudoku.c" //cuerpo de imprimeSudoku
#include "imprimeColFil.h"
#include "imprimeColFil.c"

int main() 
{
    int *sudokuLeido;
    int *columnaObtenida;
    int *filaObtenida;
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
    
//    columnaObtenida = getColumna(3, sudokuLeido);
//    imprimeColFil(columnaObtenida);
//   
//    columnaObtenida = getColumna(67, sudokuLeido);
//    imprimeColFil(columnaObtenida);
    
    filaObtenida = getFila(80, sudokuLeido);
    imprimeColFil(filaObtenida);
    
    return 0;
}