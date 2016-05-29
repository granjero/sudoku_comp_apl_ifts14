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
    int *valoresUnicos;
    int i = 0;
    int j = 0;
    int k;
    
    FILE *sudoku;
    
    sudoku = fopen("sudoku1.txt", "r+");
    
    while(!feof(sudoku))
    {
        fscanf(sudoku, "%i", &sudokuLeido[i]);
        //printf("%i dato leido\n", i);
        i++;
    }
    
    fclose(sudoku);
       
    imprimeSudoku(sudokuLeido);
     
    for (i = 0; i < 81; i++)
    {
        for (k = 0; k < 27; k++) //limpia el vector valoresUnicos
        {
            valoresUnicos[k] = 0;
        }
        
        if (sudokuLeido[i] == 0)
        {
            filaObtenida = getFila(i,sudokuLeido);
            columnaObtenida = getColumna(i,sudokuLeido);
            cuadranteObtenido = getCuadrante(i,sudokuLeido);
                        
            printf("indice n %i\n\n",i);
            printf("fila\n");
            imprimeColFil(filaObtenida);
            printf("columna\n");
            imprimeColFil(columnaObtenida);
            printf("cuadrante\n");
            imprimeCuadrante(cuadranteObtenido);
            
            valoresUnicos = obtieneValUnicos(filaObtenida,columnaObtenida,cuadranteObtenido);

            
            printf("valores unicos del indice\n");
            
            while (valoresUnicos[j] != 0)
            {
                printf("%i ", valoresUnicos[j]);
                j++;
            }
            printf("\n\n");
            j = 0;
        }
    }
 
    
//imprime valores de referencia para ver como viene andando    
//    filaObtenida = getFila(22,sudokuLeido);
//    columnaObtenida = getColumna(22,sudokuLeido);
//    cuadranteObtenido = getCuadrante(22,sudokuLeido);
//
//    printf("fila\n");
//    imprimeColFil(filaObtenida);
//    printf("columna\n");
//    imprimeColFil(columnaObtenida);
//    printf("cuadrante\n");
//    imprimeCuadrante(cuadranteObtenido);
//
//    valoresUnicos = obtieneValUnicos(filaObtenida,columnaObtenida,cuadranteObtenido);
//
//    while (valoresUnicos[j] != 0)
//    {
//        printf("%i ", valoresUnicos[j]);
//        if ((j+1)%9 == 0)
//        {
//            printf("\n");
//        }
//        j++;
//    }
    
    
    
    

    return 0;
}