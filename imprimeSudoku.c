void imprimeSudoku(int *sudoku)
{
    int i;
    
    for (i=0; i < 81; i++)
    {
        printf("%i ", sudoku[i]);
        if ((i+1)%9 == 0)
        {
            printf("\n");
        }
    }
    printf("\n\n");
}