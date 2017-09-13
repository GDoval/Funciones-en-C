

/**brief Ordena un vector de menor a mayor
/*param recibe el puntero de un vector
/*param  recibe un int con  la longitud del vector.
*/
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
*/
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


--------------------------------------------------------------------------------------

/**brief devuelve el mayor numero dentro de un vector.
/*param recibe un vector
/*recibe la longitud del vector.
/* return devuelve un int
/**
*/
int buscarMayor (int vector[], int leng)
{
    int mayor = vector[0];
    for(int i = 0; i < leng; i++)
    {
        if (vector[i] > mayor)
        {
            mayor = vector[i];
        }
    }
    return mayor;
}


---------------------------------------------------------------------------------------
/**
/*brief devuelve el menor numero dentro de un vector
/*param recibe un vector
/*recibe  la longitud del vector
/*devuelve un int 
*/
int buscarMenor (int vector[], int leng)
{
    int menor = vector[0];
    for(int i = 0; i < leng; i++)
    {
        if (vector[i] > menor)
        {
            menor = vector[i];
        }
    }
    return menor;
}

-----------------------------------------------------------------------------------------

/**
/*brief  busca un numero en el vector
/*param recibe un vector
/*param recibe la longitud del vector
/*param recibe el numero a buscar
/*return devuelve un char 'n' si el numero no se encuentra en el vector, y un char 's' en caso contrario.
*/

char buscarNumero (int vector[], int leng, int numero)
{
    char resultado = 'n';
    for (int i = 0; i < leng; i++)
    {
        if (vector[i] == numero)
        {
            resultado = 's';
            return resultado;
        }
    }
    return resultado;
}

