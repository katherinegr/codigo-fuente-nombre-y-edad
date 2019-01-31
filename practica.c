#include <cs50.h>
#include <stdio.h>

int main()
{
    string nombre = get_string("introduzca su nombre:");
    int edad = get_int("cuantos años tienes:");
       printf("\n hola %s, ", nombre);
       printf("\n tu edad es %d años", edad);

}
