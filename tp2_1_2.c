#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main(){
    int i;
    double vt[N];
    double *punt;

    punt = &vt[0];
    srand(time(NULL));
    punt = &vt[0];

    for(i = 0;i<N; i++)
    {
    vt[i]=1+rand()%100;
    printf("%f ", *punt);
    punt++;
    }
    

    return 0;
}
