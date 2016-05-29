int * obtieneValUnicos(int *fila, int *columna, int *cuadrante)
{
    int i;
    int j = 0;
    int k = 0;
    int l;
    int m = 0;
    int n = 0;
    int valorNumerico;
    int valorAuxiliar[27];
    int bandera;
    
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
    
    while(valores[k] != 0)
    {
        bandera = 0;
        valorNumerico = valores[k];
        valorAuxiliar[m] = valorNumerico;
        m++;
        k++;
        
        for(l = 0; l < 27; l++)
        {
            if (valorAuxiliar[l] == valorNumerico)
            {
                bandera++;
            }
        }
        
        if (bandera == 1)
        {
            valoresUnicos[n] = valorNumerico;
            n++;
        }
    }
    
    return valoresUnicos;
}
