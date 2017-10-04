/**
* \brief Valida el int ingresado por el usuario
* \param input Se carga el numero ingresado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/


int validaInt (int input,char eMessage[], int lowLimit, int hiLimit)
{
    int resultado = 0;
    if (input < lowLimit || input > hiLimit)
    {
        printf("%s", eMessage);
        resultado = -1;
    }
    return resultado;
}


------------------------------------------------------------------------------------

/**
* \brief Valida el float ingresado por el usuario
* \param input Se carga el numero ingresado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/


int validaInt (float input,char eMessage[], float lowLimit, float hiLimit)
{
    int resultado = 0;
    if (input < lowLimit || input > hiLimit)
    {
        printf("%s", eMessage);
        resultado = -1;
    }
    return resultado;
}

------------------------------------------------------------------------------------

/**
/*Cascara de Switch para usar como menu en parciales or whatever dude. I don't give a shit


*/
char res ='s';+
int opcion;
while (res == 's')
    {
        printf("1) ");
        printf("\n2) ");
        printf("\n3) ");
        printf("\n4) ");
        printf("\n5) ");
        printf("\n6) Salir\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
            case 1:
                
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;
            case 5:
                break;
            case 6:
                res = 'n';
                break;
        }

    }

