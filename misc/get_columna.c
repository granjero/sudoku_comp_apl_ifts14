char * get_columna_from_index(int index);

        
char * get_columna_from_index(int index)
{
    int i;
    int j;
    char columna[9];
    char sudoku[81];
    
    if (index == 0 
        || index == 9 
        || index == 18 
        || index == 27 
        || index == 36 
        || index == 45 
        || index == 54 
        || index == 63 
        || index == 72)
    {
        for (i=0; i < 9; i++)
        {
            j=0;
            columna[i] = sudoku[j];
            j = j + 9;
        }
    }
    
    if (index == 1 
        || index == 10 
        || index == 19 
        || index == 28 
        || index == 37 
        || index == 46 
        || index == 55 
        || index == 64 
        || index == 73)
    {
        for (i=0; i < 9; i++)
        {
            j=1;
            columna[i] = sudoku[j];
            j = j + 9;
        }
    }
    
    if (index == 2 
        || index == 11 
        || index == 20 
        || index == 29 
        || index == 38 
        || index == 47 
        || index == 56 
        || index == 65 
        || index == 74)
    {
        for (i=0; i < 9; i++)
        {
            j=2;
            columna[i] = sudoku[j];
            j = j + 9;
        }
    }
    
    if (index == 3 
        || index == 12 
        || index == 21 
        || index == 30 
        || index == 39 
        || index == 48 
        || index == 57 
        || index == 66 
        || index == 75)
    {
        for (i=0; i < 9; i++)
        {
            j=3;
            columna[i] = sudoku[j];
            j = j + 9;
        }
    }
    
    if (index == 4 
        || index == 13 
        || index == 22 
        || index == 31 
        || index == 40 
        || index == 49 
        || index == 58 
        || index == 67 
        || index == 76)
    {
        for (i=0; i < 9; i++)
        {
            j=4;
            columna[i] = sudoku[j];
            j = j + 9;
        }
    }
    
    if (index == 5 
        || index == 14 
        || index == 23 
        || index == 32 
        || index == 41 
        || index == 50 
        || index == 59 
        || index == 68 
        || index == 77)
    {
        for (i=0; i < 9; i++)
        {
            j=5;
            columna[i] = sudoku[j];
            j = j + 9;
        }
    }
    
    if (index == 6 
        || index == 15 
        || index == 24 
        || index == 33 
        || index == 42 
        || index == 51 
        || index == 60 
        || index == 69 
        || index == 78)
    {
        for (i=0; i < 9; i++)
        {
            j=6;
            columna[i] = sudoku[j];
            j = j + 9;
        }
    }
    
    if (index == 7 
        || index == 16 
        || index == 25 
        || index == 34 
        || index == 43 
        || index == 52 
        || index == 61 
        || index == 70 
        || index == 79)
    {
        for (i=0; i < 9; i++)
        {
            j=7;
            columna[i] = sudoku[j];
            j = j + 9;
        }
    }
    
    if (index == 8
        || index == 17 
        || index == 26 
        || index == 35 
        || index == 44 
        || index == 52 
        || index == 62 
        || index == 71 
        || index == 80)
    {
        for (i=0; i < 9; i++)
        {
            j=8;
            columna[i] = sudoku[j];
            j = j + 9;
        }
    }
}