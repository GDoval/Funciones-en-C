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


