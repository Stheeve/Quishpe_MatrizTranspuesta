#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//librerias que se usaron para el codigo

int main(){
srand (time(NULL));
int n,m;
printf("Coloque los datos de n\n");
scanf("%d", &n);
printf("Coloque los datos de m\n");
scanf("%d", &m);
//tamaño de la matriz
int matrix[n][m];
//matris normal 
int matrix2[n][m];
//matris transpuesta 
for (int i = 0; i < n; i++)
{
    printf("\n");

    for (int j = 0; j < m; j++)
    {
        matrix[i][j]=rand()%101;
        //rand para que se introduzcan numeros aleatorios del 0 al 100
        printf("%d \t", matrix[i][j]);
    }
    
}
//for para la primera matris 
    printf("\n");
    printf("\n");
for (int i = 0; i < m; i++)
{
    printf("\n");

    for (int j = 0; j < n; j++)
    {
        matrix2[i][j]=matrix[j][i];
        printf("%d \t", matrix2[i][j]);
    
    }
    
}
//for para la segunda matris


}