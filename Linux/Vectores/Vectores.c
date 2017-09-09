

/**brief Ordena un vector de menor a mayor
/*param recibe el puntero de un vector
/*param  recibe un int con  la longitud del vector.


void ordenarVecMenor (int vector[], int leng)
{
    int i, j;
    int temporal;
    for (i = 1; i < leng; i++)
    {
        temporal = vector[i];
        j = i-1;
        while(temporal < vector[j]  && j >= 0)
        {
            vector[j+1] = vector[j];
            j--;
        }
        vector[j+1] = temporal;
    }
}


-----------------------------------------------------------------------------------


/**brief Ordena un vector de mayor a menor
/*param recibe el puntero de un vector
/*param  recibe un int con  la longitud del vector.

void ordenarVecMayor (int vector[], int leng)
{
    int i, j;
    int temporal;
    for (i = 1; i < leng; i++)
    {
        temporal = vector[i];
        j = i-1;
        while(temporal > vector[j]  && j >= 0)
        {
            vector[j+1] = vector[j];
            j--;
        }
        vector[j+1] = temporal;
    }
}
