int * obtieneValUnicos(int *fila, int *columna, int *cuadrante)
{
    int h;
    int i;
    int j = 0;
    static int valoresFila[8];
    static int valoresColumna[8];
    static int valoresCuadrante[8];
    static int *valores;
    
    
    
    for(i = 0; i < 9; i++)
    {
        if(fila[i] == 1)
        {       
            valoresFila[j] = fila[i];
            j++;
        }
        if(fila[i] == 2)
        {
            valoresFila[j] = fila[i];
            j++;
        }
        if(fila[i] == 3)
        {
            valoresFila[j] = fila[i];
            j++;
        }
        if(fila[i] == 4)
        {
            valoresFila[j] = fila[i];
            j++;
        }
        if(fila[i] == 5)
        {
            valoresFila[j] = fila[i];
            j++;
        }
        if(fila[i] == 6)
        {
            valoresFila[j] = fila[i];
            j++;
        }
        if(fila[i] == 7)
        {
            valoresFila[j] = fila[i];
            j++;
        }
        if(fila[i] == 8)
        {
            valoresFila[j] = fila[i];
            j++;
        }
        if(fila[i] == 9)
        {
            valoresFila[j] = fila[i];
            j++;
        }
    }
    
    //Columna
    for(i = 0; i < 9; i++)
    {
        if(columna[i] == 1)
        {       
            valoresColumna[j] = columna[i];
            j++;
        }
        if(columna[i] == 2)
        {
            valoresColumna[j] = columna[i];
            j++;
        }
        if(columna[i] == 3)
        {
            valoresColumna[j] = columna[i];
            j++;
        }
        if(columna[i] == 4)
        {
            valoresColumna[j] = columna[i];
            j++;
        }
        if(columna[i] == 5)
        {
            valoresColumna[j] = columna[i];
            j++;
        }
        if(columna[i] == 6)
        {
            valoresColumna[j] = columna[i];
            j++;
        }
        if(columna[i] == 7)
        {
            valoresColumna[j] = columna[i];
            j++;
        }
        if(columna[i] == 8)
        {
            valoresColumna[j] = columna[i];
            j++;
        }
        if(columna[i] == 9)
        {
            valoresColumna[j] = columna[i];
            j++;
        }
    }
    //Cuadrante
    for(i = 0; i < 9; i++)
    {
        if(cuadrante[i] == 1)
        {       
            valoresCuadrante[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 2)
        {
            valoresCuadrante[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 3)
        {
            valoresCuadrante[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 4)
        {
            valoresCuadrante[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 5)
        {
            valoresCuadrante[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 6)
        {
            valoresCuadrante[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 7)
        {
            valoresCuadrante[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 8)
        {
            valoresCuadrante[j] = cuadrante[i];
            j++;
        }
        if(cuadrante[i] == 9)
        {
            valoresCuadrante[j] = cuadrante[i];
            j++;
        }
    }

   
    //valores = valoresFila;
    valores = valoresColumna;
    return valores;
}
