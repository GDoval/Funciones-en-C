/*  Cosas básicas para tener en cuenta cuando manejamos punteros. 
Habría que ir revisando cada tanto, por las dudas vistes*/


/* Imprimir usando printf() */

int x ; // esto es una variable de tipo entero (*pretends to be shocked*)
int* p; // esto es un puntero a una variable de tipo entero
p = &x // aca le pasamos al puntero la direccion de memoria donde esta guardada 'x'
x = 9 // pretty obvious
printf ("%d", *p); // aca te imprime '9' te imprime. Porque se usa el operador de indirección (o sea, '*'), entonces 
				   // imprime el valor al que apunta el puntero.

/*Eso era lo fácil, ahora lo mismo pero con arrays y estructuras*/

int vector[] = {5, 15} // array de 2 enteros hardcodeado
int* p; // puntero de enteros
p = &vector; //Se le pasa al puntero la direccion de memoria del primer elemento del array
printf("%d", *(p+1)); /*Imprime el segundo elemento del array, en este caso '15'. El '+1' se reemplaza por la variable de control 
							de un FOR. No se le suma el valor absoluto de esa variable (1, 2, and so forth) sino que se multiplica 
			 				ese valor por el tamaño, en bytes, del tipo de dato del puntero. Si el puntero es INT se le suman 4, si
						    es CHAR 2, y así. El compilador usa la funcion sizeof()  para averiguar lo que vale en bytes el tipo de dato
							y asi se puede llevar de un SO con X arquitectura a otro SO con Y arquitectura.*/

printf("Ingresate un numero, dale: ");
scanf("%d", &(*(p+1)));// Asi se leen los elementos de un vector usando scanf()
printf("%d", *(p+1)); // Ponele que antes ingresaste '65', ahora te imprime eso. De nuevo, el '+1' se reemplaza por la variable
						   // de control de un FOR. Es lo mismo que cuando se ponia vector[i] para indicar el índice del vector. Con
						   // punteros eso se hace con aritmética, esto es, 'vector+1'. 

/* Se obtiene el mismo resultado si reemplazamos el puntero 'p' por el nombre del array ('vector' en este caso). Con la misma
nomenclatura en los printf() y scanf() se mantiene la consistencia del programa, o sea, funciona igual que si le pasamos el puntero.
Cosa que es bastante obvia si consideramos que el array es en sí mismo un puntero al primer elemento del mismisimo array. ¿Qué ventajas
habria, pues, de usar punteros cuando usamos arrays? 



/*Punteros con estructuras*/

typedef struct { // Una estructura
	int edad;
	char nombre[50];
}ePersonita;

ePersonita alguno = {15, "Juan Domingo"}; // variable de tipo estructura hardcodeada
ePersonita* p; // puntero de tipo estructura
p = &alguno; // le pasamos la direccion de memoria de la variable
printf("%s", p->nombre); // te imprime el nombre te imprime. El operador flecha torna obsoleto el uso del operador de indireccion ('*')

printf("Ingresate un nombre, dale: ");
setbuf(stdin, NULL); // se limpia el bendito buffer
fgets(p->nombre, 20, stdin); // asi se lee un array de tipo estructura. De nuevo, el operador flecha reemplaza al '*'
printf("\nNOMBRE: %s     EDAD: %d", p->nombre, p->edad); // aca se imprimen los dos campos de la estructura.


ePersonita algunos[] = {{15, "Romulo"}, {15, "Remo"}, {65, "Augustus Porongus"}}; // vector de estructuras hardcodeado
ePersonita* k; // puntero del tipo estructura
k = &algunos // guardamos la direccion de memoria del _primer_ elemento del array. O sea, 'algunos[0]'
for (int i = 0; i < 3; i++)
    {
        printf("\n\nNOMBRE: %s", (k+i)->nombre);
        printf("\n\nEDAD: %d", (k+i)->edad);
    }
/*Asi se imprimen los elementos de un array del tipo estructura. De nuevo, si reemplazamos la variable puntero por la variable de 
tipo array se obtiene el mismo resultado.





