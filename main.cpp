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


//funciones
//int * getFila(int index, int *sudoku);
//int * getColumna(int index, int *sudoku);
//void imprimeSudoku(int *sudoku);
//void imprimeColFil(int *columna);

/*
 * 
 */
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


//FUNCIONES
//void imprimeSudoku(int *sudoku)
//{
//    int i;
//    
//    for (i=0; i < 81; i++)
//    {
//        printf("%i ", sudoku[i]);
//        if ((i+1)%9 == 0)
//        {
//            printf("\n");
//        }
//    }
//    printf("\n\n");
//}

//void imprimeColFil(int *columnaOfila)
//{
//    int i;
//    
//    for (i=0; i < 9; i++)
//    {
//        printf("%i ", columnaOfila[i]);
//    }
//    printf("\n\n");
//}

//int * getFila(int index, int *sudoku)
//{
//    int i;
//    int j;
//    static int fila[9];
//    
//    if (index >= 0 && index <= 8)
//    {
//        j = 0;
//    }
//    
//    if (index >= 9 && index <= 17)
//    {
//        j = 9;
//    }
//    
//    if (index >= 18 && index <= 26)
//    {
//        j = 18;
//    }
//    
//    if (index >= 27 && index <= 35)
//    {
//        j = 27;
//    }
//    
//    if (index >= 36 && index <= 44)
//    {
//        j = 36;
//    }
//    
//    if (index >= 45 && index <= 53)
//    {
//        j = 45;
//    }
//    
//    if (index >= 54 && index <= 62)
//    {
//        j = 54;
//    }
//    
//    if (index >= 63 && index <= 71)
//    {
//        j = 63;
//    }
//    
//    if (index >= 72 && index <= 80)
//    {
//        j = 72;
//    }
//    
//    for (i=0; i < 9; i++)
//    {
//        fila[i] = sudoku[j];
//        j++;       
//    }
//    
//    return fila;
//}


//int * getColumna(int index, int *sudoku)
//{
//    int i;
//    int j;
//    static int columna[9];
//    //char sudoku[81];
//    
//    if (index == 0 
//        || index == 9 
//        || index == 18 
//        || index == 27 
//        || index == 36 
//        || index == 45 
//        || index == 54 
//        || index == 63 
//        || index == 72)
//    {
//        j = 0;
//    }
//    
//    if (index == 1 
//        || index == 10 
//        || index == 19 
//        || index == 28 
//        || index == 37 
//        || index == 46 
//        || index == 55 
//        || index == 64 
//        || index == 73)
//    {
//        j = 1;
//    }
//    
//    if (index == 2 
//        || index == 11 
//        || index == 20 
//        || index == 29 
//        || index == 38 
//        || index == 47 
//        || index == 56 
//        || index == 65 
//        || index == 74)
//    {
//        j = 2;
//    }
//    
//    if (index == 3 
//        || index == 12 
//        || index == 21 
//        || index == 30 
//        || index == 39 
//        || index == 48 
//        || index == 57 
//        || index == 66 
//        || index == 75)
//    {
//        j = 3;
//    }
//    
//    if (index == 4 
//        || index == 13 
//        || index == 22 
//        || index == 31 
//        || index == 40 
//        || index == 49 
//        || index == 58 
//        || index == 67 
//        || index == 76)
//    {
//        j = 4;
//    }
//    
//    if (index == 5 
//        || index == 14 
//        || index == 23 
//        || index == 32 
//        || index == 41 
//        || index == 50 
//        || index == 59 
//        || index == 68 
//        || index == 77)
//    {
//        j = 5;
//    }
//    
//    if (index == 6 
//        || index == 15 
//        || index == 24 
//        || index == 33 
//        || index == 42 
//        || index == 51 
//        || index == 60 
//        || index == 69 
//        || index == 78)
//    {
//        j = 6;
//    }
//    
//    if (index == 7 
//        || index == 16 
//        || index == 25 
//        || index == 34 
//        || index == 43 
//        || index == 52 
//        || index == 61 
//        || index == 70 
//        || index == 79)
//    {
//        j = 7;
//    }
//    
//    if (index == 8
//        || index == 17 
//        || index == 26 
//        || index == 35 
//        || index == 44 
//        || index == 52 
//        || index == 62 
//        || index == 71 
//        || index == 80)
//    {
//        j = 8;
//    }
//    
//    for (i=0; i < 9; i++)
//    {
//        columna[i] = sudoku[j];
//        j = j + 9;
//    }
//    
//    return columna;
//}