#include <stdio.h>

int main (void)
{
    for (int 1 =0; i <=3; i++) #Si cambio el sihgno <= por solamente <, saldrá lo correcto porque salen 3 numeros: is0 is1 y is3. "para realizar el cambio en la terminal .\buggy.c"
    {
        printf("i is %i\n",i);
        printf("#\n");
    }
}
 
#Así obteng is0 is1 is2 is3 ("con el signo <=")


#Cambio de bucle y nos deshacemos de for


#include <cs50.h>
#include <studio.h>

void print_colmn(int height)  #Tiene que estar para que lo reconozca.
int main(void)
  
{
    int h = get_int("Height: ");
    print_colmn(h);
}

void print_colmn(int Height)

{
    for (int i = 0; i < height; i++)
    {
        prntf("#\n");
    }
}

#Si lo compilor conforme esta el compilador no sabra reconocer que es print_column porque cuando lo ve por primer vez en la columna 7, nunca lo había visto antes.
#La solución es la siguiente---> copiar y pegar la función. Línea 21.
#Finalmente en la terminal hacemos "make buggy", "./buggy" y te saldrá el resultado final con Height y las tres almuadillas:
Resultado:
#
#
#


Debug50-- #Ejecutar un programa. Automatia el proceso de inicio del depurado. Es un programa que espera sus propio argumento de línea de comando.

#include <cs50.h>
#include <studio.h>

void print_colmn(int height)  #Tiene que estar para que lo reconozca.
int main(void)
  
{
    int h = get_int("Height: ");
    print_colmn(h);
}

void print_colmn(int Height)

{
    for (int i = 0; i < height; i++)
    { 
        prntf("#\n");
    }
}