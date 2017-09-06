
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

void mayusPrimera (char * temp)  //Pasa a mayuscula el primer caracter del string
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

