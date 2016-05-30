int obtieneValFaltante (int *valores)
{
    int i;
    int valorFalta = 0;
    
    for (i = 0; i < 9; i++)
    {
        valorFalta = valorFalta + valores[i];
    }
    
    if (valorFalta == 44)
    {
        return 1;
    }
    
    if (valorFalta == 43)
    {
        return 2;
    }
    
    if (valorFalta == 42)
    {
        return 3;
    }
    
    if (valorFalta == 41)
    {
        return 4;
    }
    
    if (valorFalta == 40)
    {
        return 5;
    }
    
    if (valorFalta == 39)
    {
        return 6;
    }
    
    if (valorFalta == 38)
    {
        return 7;
    }
    
    if (valorFalta == 37)
    {
        return 8;
    }
    
    if (valorFalta == 36)
    {
        return 9;
    }
}
