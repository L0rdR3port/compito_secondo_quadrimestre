void inverti_stringa(char *stringa, int dim){
    char scambio;
    int i, j;
    for (i = 0, j = dim - 1; i < j; i++, j--)
    {
        scambio = stringa[i];
        stringa[i] = stringa[j];
        stringa[j] = scambio;
    }
}