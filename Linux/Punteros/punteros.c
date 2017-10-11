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




