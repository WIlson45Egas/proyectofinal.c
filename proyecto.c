#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main() {//inicialiazamos las variables
    int option, sector, problema;
    float cedula;
    Char nombre[MAX] 
    FILE *archivo;
    archivo = fopen("resultado.txt", "w+");

   //Pedimos obtener los datos personales del individuo
    printf("Ingrese su nombre completo:");
    fgets(nombre, MAX, stdin);
    getchar();
    printf("Ingrese su numero de cedula:\n");
    scanf("%f",&cedula);
    getchar();
    printf("Ingrese el sector donde vive:\n");
    scanf("%d",&sector);
     getchar();
    printf("Describa el problema que tiene:\n");
    scanf("%d",&problema);
     getchar();
    while (1) 
    {//usamos la opcion while para crear un menu de 4 opciones
    
        printf("Menu de opciones\n");
        printf("1. Optimizar el ordenador:\n");
        printf("2.Cambio de software:\n");
        printf("3.Reiniciar el ordenador:\n");
        scanf("%d", &option);

        switch (option) {//obtenemos 4 opciones para que el usuario sea capaz de escoger 
            case 1:
                printf("Ha seleccionado  optimizar del ordenador, el costo es de $45.\n");
                
                break;
            case 2:
                printf("Ha seleccionado el cambio de software, el costo es de $ 58.\n");
                // Código para la opción 2
                break;
            case 3:
                printf("Ha seleccionado el reinicio del ordenador, el costo es de  $39.\n");
                // Código para la opción 3
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
             default:
                printf("Opción inválida. Por favor, seleccione una opción válida.\n");
                break;
                

                 
        }
        if (option == 4) {
            break; // Salimos del bucle
        }
    }
    

 return 0;
}
