int * obtieneValUnicos(int *fila, int *columna, int *cuadrante)
{
    int i;
    int j = 0;
    int k = 0;
    int l;
    int m = 0;
    int valorNumerico;
    int valorAuxiliar[27];
    int bandera;
    
    static int valores[27];
    static int valoresUnicos[9];
    
    for (i = 0; i < 27; i++) //limpia el vector valores
    {
        valores[i] = 0;
    }
    
    for (i = 0; i < 9; i++) // agrega a valores todos los valores de fila distintos de 0
    {
        if(fila[i] != 0)
        {       
            valores[j] = fila[i];
            j++;
        }
    }
    
    for (i = 0; i < 9; i++) // agrega a valores todos los valores de columna distintos de 0
    {
        if(columna[i] != 0)
        {       
            valores[j] = columna[i];
            j++;
        }
    }
    
    for (i = 0; i < 9; i++) // agrega a valores todos los valores de cuadrante distintos de 0
    {
        if(cuadrante[i] != 0)
        {       
            valores[j] = cuadrante[i];
            j++;
        }
    }
    
    while(valores[k] != 0) // limpia los valores duplicados en valores
    {
        bandera = 0;
        valorNumerico = valores[k];
        valorAuxiliar[k] = valorNumerico;
        k++;
        
        for(l = 0; l < 27; l++) // recorre el vector valorAuxiliar y si el valor se repite bandera termina mayor a 1 y no escribe luego
        {
            if (valorAuxiliar[l] == valorNumerico)
            {
                bandera++;
            }
        }
        
        if (bandera == 1) // bandera sera igual a uno si no se repite ese valor en el vector y se agrega el valor al vector final
        {
            valoresUnicos[m] = valorNumerico;
            m++;
        }
    }
    
    return valoresUnicos;
}
