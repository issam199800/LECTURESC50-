ARRAYS

#include <stdio.h>

int main(void)

{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    // Print average
    printf("Average: %\n", (score1 + score2 + score3) / 3); #En esta parte hay algo que esta mal.
}

#solución--- El formato es incorrecto porque estoy utilizando el procentaje %f que técnicamente significa decimal y no quiero que sea un número entero, por lo que quiero redondear hacia arriba.
#Para redondear corectamente hay que truncar todo lo que esté después del punto decimal.
#Vamos a dividir el número por 3.0 como denominador.

#include <stdio.h>

int main(void)

{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    // Print average
    printf("Average: %\n", (score1 + score2 + score3) / 3.0);
}

#Hacemos el make score y el ./score y nos saldrá el resultado. (Terminal)

#Rango de puntuaciones

#include <stdio.h>

int main (void)

{
    int scores[3];
    scores [0] = 72;
    scores [1] = 73;
    scores [2] = 33;

    //Print average
    printf("Averge : %f\n", (scores [0] + scores [1] + scores [2]) / 3.0);
}

#Abro la terminal y limpio y hago puntuajes con make scores y seguidamente con ./scores. Para obtener el reusltado.

#Para mejoralo y dejarlo definitivo. En lugar de codificar mis tres puntuaciones y luego tener que actualizar este código en otro momento.
#Técnica de programción correcta para que me lo solicite.


//Averages three numbers using an array, a constant, and a helper function
#include <cs50.h>
#include <stdio.h>

//Constant
const int N = 3;

//Ptotype
float average(int length, int array []);

int main (void)

{   
    //Get scores
    int N = 3;    #Const N igual a 3 significa que esta variable siempre tendrá el valor 3. Es una manera de proteger el 'código' de algiuien que quira retocarlo y la pueda liar.
    int scores[N]
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    //Print average
    printf("Averge : %f\n", average(N, scores));
}

float average(int lenght, int array [])
{
    //Calculate average
    int sum = 0;   #Creamos una variable llamada suma 
    for (int i = 0; i < length; i++)  #Luego iteremos sobre la longtud de esa matriz 
    {
        sum += array [i];   #Utilizamos la sitaxis para agrerar a esa suma
    }
    return sum / (float) length;   #Cómo se calcula el promedio. Cualquiera que sea suma se divide por la longitud de la matriz conviertendolo en un valor de punto flotante.
}