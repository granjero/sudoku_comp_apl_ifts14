int * obtieneValUnicos(int *fila, int *columna, int *cuadrante)
{
    int h;
    int i;
    int j = 0;
    static int valoresFila[8];
    static int valoresColumna[8];
    static int valoresCuadrante[8];
    static int valores[27];
    
    
    
    for(i = 0; i < 9; i++)
    {
        if(fila[i] == 1)
        {       
            valores[j] = fila[i];
            j++;
        }
        if(fila[i] == 2)
        {
            valores[j] = fila[i];
            j++;
        }
        if(fila[i] == 3)
        {
            valores[j] = fila[i];
            j++;
        }
        if(fila[i] == 4)
        {
            valores[j] = fila[i];
            j++;
        }
        if(fila[i] == 5)
        {
            valores[j] = fila[i];
            j++;
        }
        if(fila[i] == 6)
        {
            valores[j] = fila[i];
            j++;
        }
        if(fila[i] == 7)
        {
            valores[j] = fila[i];
            j++;
        }
        if(fila[i] == 8)
        {
            valores[j] = fila[i];
            j++;
        }
        if(fila[i] == 9)
        {
            valores[j] = fila[i];
            j++;
        }
    }
    
    //Columna
    for(i = 0; i < 9; i++)
    {
        if(columna[i] == 1)
        {       
            valores[j] = columna[i];
            j++;
        }
        if(columna[i] == 2)
        {
            valores[j] = columna[i];
            j++;
        }
        if(columna[i] == 3)
        {
            valores[j] = columna[i];
            j++;
        }
        if(columna[i] == 4)
        {
            valores[j] = columna[i];
            j++;
        }
        if(columna[i] == 5)
        {
            valores[j] = columna[i];
            j++;
        }
        if(columna[i] == 6)
        {
            valores[j] = columna[i];
            j++;
        }
        if(columna[i] == 7)
        {
            valores[j] = columna[i];
            j++;
        }
        if(columna[i] == 8)
        {
            valores[j] = columna[i];
            j++;
        }
        if(columna[i] == 9)
        {
            valores[j] = columna[i];
            j++;
        }
    }
    //Cuadrante
    for(i = 0; i < 9; i++)
    {
        if(cuadrante[i] == 1)
        {       
            valores[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 2)
        {
            valores[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 3)
        {
            valores[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 4)
        {
            valores[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 5)
        {
            valores[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 6)
        {
            valores[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 7)
        {
            valores[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 8)
        {
            valores[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 9)
        {
            valores[j] = cuadrante[i];
            j++;
        }
    }

    return valores;
}
