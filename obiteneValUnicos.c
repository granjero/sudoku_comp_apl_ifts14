int * obtieneValUnicos(int *fila, int *columna, int *cuadrante)
{
    int h = 0;
    int i;
    int j = 0;
    static int valores[27];
    static int valoresUnicos[9];
    
  
    for (i = 0; i < 9; i++)
    {
        if(fila[i] != 0)
        {       
            valores[j] = fila[i];
            j++;
        }
    }
    
    for (i = 0; i < 9; i++)
    {
        if(columna[i] != 0)
        {       
            valores[j] = columna[i];
            j++;
        }
    }
    
    for (i = 0; i < 9; i++)
    {
        if(cuadrante[i] != 0)
        {       
            valores[j] = cuadrante[i];
            j++;
        }
    }
    
    while(valores[h] != 0)
    {
        valoresUnicos[h]=valores[h];
        h++;

    }
    
    return valoresUnicos;
}
