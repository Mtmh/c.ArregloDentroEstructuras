#include <stdio.h>

typedef struct Persona Persona;

struct Persona
{
    char *nombre;
    int edad;
    float calificaciones[5];
};


int main(void)
{
    int i;

    Persona juan;
    juan.nombre = "Juan";
    juan.edad   = 15;
    juan.calificaciones[0] = 90.0f;
    juan.calificaciones[1] = 80.0f;
    juan.calificaciones[2] = 95.0f;
    juan.calificaciones[3] = 100.0f;
    juan.calificaciones[4] = 85.0f;

    printf("Nombre: %s\n" , juan.nombre);
    printf("Edad: %d\n" , juan.edad);
    printf("Calificaciones:\n ");

    for (i = 0; i < 5; ++i)
        printf(" %f\n" , juan.calificaciones[i]);
    printf("\n");

    return 0;
}
