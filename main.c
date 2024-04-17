#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Hello manejo de \"strings\"!\n");

    char palabra1[10]={"auto"};
    char palabra2[10]={"barco"};

    printf("\n\npalabra1: %s", palabra1);
    printf("\n\npalabra2: %s", palabra2);

// strcmp ();
// esta funcion SI hace distincion entre MAYUSCULAS y minusculas
// si queremos evitar eso... utilizaremos strcmpi();
    int respuesta= strcmp(palabra2, palabra1);

    printf("\n\n%d", respuesta);
    if(respuesta<0)
    {
        printf("\n\npalabra 1 esta antes que palabra 2");
    }
    else if(respuesta>0)
    {
        printf("\n\npalabra 2 esta antes que palabra 1");
    }
    else
    {
        printf("\n\npalabra 1 y palabra 2 son iguales");
    }

// strlen()
    int longitud=strlen(palabra1);

    printf("\n\nla longitud de la palabra1 es: %d... %s", longitud, palabra1);

// strcpy(destino, origen);
    char palabraCopiada[10];

    strcpy(palabraCopiada, palabra2);

    printf("\n\npalabra2: %s",palabra2);
    printf("\n\npalabraCopiada: %s",palabraCopiada);



// vamos a leer del teclado, utilizando las funciones scanf() y gets()

    char nombre[20];
    char nombreYapellido[30];

    printf("\n\nIngrese un nombre (sin espacios en blanco): ");
    fflush(stdin);
    scanf("%s", nombre);

    printf("\n\nAhora ingrese un nombre y apellido (con espacios en blanco): ");
    fflush(stdin);
    gets(nombreYapellido);

    printf("\n\nEl nombre es %s", nombre);
    printf("\n\nEl nombre y apellido es %s", nombreYapellido);


    printf("\n\n");
    return 0;
}
