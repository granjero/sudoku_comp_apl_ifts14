int * getCuadrante(int index, int *sudoku)
{
    int i;
    int j;
    static int columna[8];
    
    if (index == 0 
        || index == 1
        || index == 2 
        || index == 9 
        || index == 10 
        || index == 11 
        || index == 18 
        || index == 19
        || index == 20)
    {
        j = 0;
    }
    
    if (index == 3 
        || index == 4 
        || index == 5
        || index == 12 
        || index == 13 
        || index == 14 
        || index == 21 
        || index == 22 
        || index == 23)
    {
        j = 3;
    }
    
    if (index == 6 
        || index == 7
        || index == 8
        || index == 15 
        || index == 16 
        || index == 17 
        || index == 24 
        || index == 25 
        || index == 26)
    {
        j = 6;
    }
    
    if (index == 27
        || index == 28
        || index == 29 
        || index == 36 
        || index == 37 
        || index == 38 
        || index == 45 
        || index == 46 
        || index == 47)
    {
        j = 27;
    }
    
    if (index == 30
        || index == 31 
        || index == 32 
        || index == 39 
        || index == 40 
        || index == 41 
        || index == 48 
        || index == 49 
        || index == 50)
    {
        j = 30;
    }
    
    if (index == 33
        || index == 34 
        || index == 35 
        || index == 42 
        || index == 43 
        || index == 44 
        || index == 51 
        || index == 52 
        || index == 53)
    {
        j = 33;
    }
    
    if (index == 54
        || index == 55 
        || index == 56
        || index == 63 
        || index == 64 
        || index == 65 
        || index == 72 
        || index == 73 
        || index == 74)
    {
        j = 54;
    }
    
    if (index == 57
        || index == 58
        || index == 59 
        || index == 66 
        || index == 67 
        || index == 68 
        || index == 75 
        || index == 76 
        || index == 77)
    {
        j = 57;
    }
    
    if (index == 60
        || index == 61
        || index == 62
        || index == 69
        || index == 70 
        || index == 71 
        || index == 78 
        || index == 79 
        || index == 80)
    {
        j = 60;
    }
    
    for (i=0; i < 9; i++)
    {
        columna[i] = sudoku[j];
        j++;
        if ((i+1)%3 == 0)
        {
            j = j + 6;
        }
    }
    
    return columna;
}