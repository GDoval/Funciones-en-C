
*Incluir siempre las librerias:  <string.h>  y  <ctype.h>


void todoMayus(char * temp) // Recibe un string y lo pasa _todo_ a mayuscula.
{
  char *s = temp;
  while (*s) {
    *s = toupper((unsigned char) *s);
    s++;
  }

}


-------------------------------------------------------------------------------------------------------------------------------



void todoMinus(char * temp) // Recibe un string y lo pasa _todo_ a minuscula.
{
    char *s = temp;
    while (*s)
    {
        *s = tolower((unsigned char) *s);
        s++;
    }
}


-------------------------------------------------------------------------------------------------------------------------------

void mayusPrimera (char * temp)  //Pasa a mayuscula el primer caracter del string. Poner adentro de un for cuando se pasan matrizes.
{
    char *s = temp;
    *s = toupper((unsigned char) *s);
}



---------------------------------------------------------------------------------------------------------------------------------

void sacarEnter(char vec[]) // borra el enter que queda en la ultima posicion del string cuando se usa fgets().
{
    int cant;
    cant = strlen(vec);
    vec[cant-1] = '\0';
}


---------------------------------------------------------------------------------------------------------------------------------


void ordenarStrings(char nombre[][50], int filas) // ordena matrizes de strings alfabeticamente. El '50' se cambia por la cantidad de columnas de la matriz
{
    char temporal[TAM];
    int j;
    for (int i = 1; i < filas; i++)
    {
        strcpy(temporal, nombre[i]);
        j = i -1;
        while ((strcmp(temporal, nombre[j]) < 0) && j >=0)
        {
            strcpy(nombre[j+1], nombre[j]);
            j--;
        }
        strcpy(nombre[j+1], temporal);
    }
}


---------------------------------------------------------------------------------------------------------------------------------

int validaString (char cadena[]) //Recibe una cadena, y valida que no se hayan ingresado otra cosa que no sean letras. 
{                                // Devuelve un 0 si la cadena no fue validada, un -1 si es una cadena valida.
    char letra;
    int respuesta, len;
    letra = cadena[0];
    len = strlen(cadena);
    for (int i = 0; i < len; i++)
    {
        letra = cadena[i];
        if (!isalpha(letra))
        {
            respuesta = 0;
            break;
        }else
            {
                respuesta = -1;
            }
    }

    return respuesta;
}