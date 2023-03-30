#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

struct compu
{
    int velo;
    int anio;
    char *tipos;
    int cantidad;
}typedef PC;

void Mostrar (PC arreg[]);


int main(){
    srand(time(NULL));
    
    PC arre[N];
    
    char tipos_cpu[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    for (int i = 0; i < N; i++)
    {
        arre[i].velo = 1+rand()%3;
        arre[i].anio = 2015+rand()%9;
        arre[i].cantidad = 1+rand()%8;
        arre[i].tipos = &tipos_cpu[6][10];
    }

    Mostrar(arre);
    
    return 0;
}

void Mostrar (PC arreg[]){

    for (int i = 0; i < N; i++)
    {
        printf("------PC N°: %d-------", i);
        printf("\nvelocidad:%d GHz", arreg[i].velo);
        printf("\nanio:%d", arreg[i].anio);
        printf("\nnucleos:%d", arreg[i].cantidad);
        printf("\ntipo de procesador: %s", arreg[i].tipos);
        printf("\n");
    }
    
}