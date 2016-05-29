int * getFila(int index, int *sudoku)
{
    int i;
    int j;
    static int fila[8];
    
    if (index >= 0 && index <= 8)
    {
        j = 0;
    }
    
    if (index >= 9 && index <= 17)
    {
        j = 9;
    }
    
    if (index >= 18 && index <= 26)
    {
        j = 18;
    }
    
    if (index >= 27 && index <= 35)
    {
        j = 27;
    }
    
    if (index >= 36 && index <= 44)
    {
        j = 36;
    }
    
    if (index >= 45 && index <= 53)
    {
        j = 45;
    }
    
    if (index >= 54 && index <= 62)
    {
        j = 54;
    }
    
    if (index >= 63 && index <= 71)
    {
        j = 63;
    }
    
    if (index >= 72 && index <= 80)
    {
        j = 72;
    }
    
    for (i=0; i < 9; i++)
    {
        fila[i] = sudoku[j];
        j++;       
    }
    
    return fila;
}