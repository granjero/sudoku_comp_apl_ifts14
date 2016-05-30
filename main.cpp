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

#include "obtieneValorFaltante.h"
#include "obtieneValorFaltante.c"

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
    int l;
    int m;
    int n = 0;
    
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
        for (k = 0; k < 9; k++) { valoresUnicos[k] = 0; } //limpia el vector valoresUnicos si no parece que queda en memoria
        
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
            
            valoresUnicos = obtieneValUnicos(filaObtenida,columnaObtenida,cuadranteObtenido); //si pongo estalinea antes de imprimir porpantlla falla COSA DE MANDINGA
            
            printf("valores unicos del indice %i\n", i);
            
            while (valoresUnicos[j] != 0)
            {
                printf("%i ", valoresUnicos[j]);
                j++;
                if (j == 8)
                {
                    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                    sudokuLeido[i] = obtieneValFaltante(valoresUnicos); 
                    imprimeSudoku(sudokuLeido);
                }
            }
            j = 0;
        }
        if (i == 80)
        {
            i = 0; 
            n++;
        }
        if (n > 4)
        {
            i = 88;
        }
    }
 imprimeSudoku(sudokuLeido);
    
//imprime valores de referencia para ver como viene andando    
//    filaObtenida = getFila(0,sudokuLeido);
//    columnaObtenida = getColumna(0,sudokuLeido);
//    cuadranteObtenido = getCuadrante(0,sudokuLeido);
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
//    
    
    
    

    return 0;
}