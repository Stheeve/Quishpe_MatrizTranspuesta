#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int n,m;
printf("Coloque los datos de n\n");
scanf("%d", &n);
printf("Coloque los datos de m\n");
scanf("%d", &m);
int matrix[n][m];
for (int i = 0; i < n; i++)
{
    printf("\n");

    for (int j = 0; j < m; j++)
    {
        matrix[i][j]=rand()%101;
        printf("%d \t", matrix[i][j]);
    }
    
}


}