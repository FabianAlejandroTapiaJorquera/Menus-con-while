#include <stdio.h>
#include <stdlib.h>

int cantidad = 0;
int edades[50] = {};
int estaturas[50] = {};


int opcion1(){
    system("cls");
    printf("Ingresar la cantidad de datos a ingresar: ");
    scanf("%d", &cantidad);
    int i=0;
    for(i; i<cantidad; i++){
        system("cls");
        printf("Ingresar la edad de la persona %i: ", i+1);
        scanf("%d", &edades[i]);
        printf("\nIngresar la estatura de la persona %i: ", i+1);
        scanf("%d", &estaturas[i]);
    }
    system("pause");
    return 0;
}
int opcion2(int total){
    system("cls");
    int contador = 0, i=0;
    for(i; i<total; i++){
        if(edades[i] > 20)
            contador++;
    }
    printf("La cantidad de personas mayores a 20 años es de %d\n", contador);
    system("pause");
    return 0;
}
int opcion3(int total){
    system("cls");
    int contador = 0, i=0;
    for(i; i<total; i++){
        if(estaturas[i] > 150 && edades[i] > 20)
            contador++;
    }
    printf("Cantidad de personas mayores a 20 años y con una estatura mayor a 150 cms es %d\n", contador);
    system("pause");
    return 0;
}
void menu(){
    int opcion = 0 ; 
    while(opcion == 0){
        system("cls");
        printf("1 Ingresar datos:\n" ); 
        printf("2 Cantidad de personas mayores a 20 anos:\n");
        printf("3 Cantidad de personas mayores a 20 anos con una estatura mayor a 150 cms:\n");
        printf("4 Salir\n");
        printf("Ingresar opcion: ");
        scanf("%d", &opcion);

        if(opcion == 1)
            opcion = opcion1();
        if(opcion == 2)
            opcion = opcion2(cantidad);
        if(opcion == 3)
            opcion = opcion3(cantidad);
    }
}


int main(){
    menu();
    return 0;
}