#include<stdio.h>
#include<math.h>

int main (){
    int i, j, num;

 int A[3][2];
 int B[3][2];
 int C[3][2];

printf("Vamos a sumar dos matrices\n");

//Valores matriz A
 for ( i = 0; i < 3; i++)
 {
    for ( j = 0; j < 2; j++)
    {
        printf("Ingrese el numero del espacio %d%d de la matriz A:\n", i+1, j+1);
        scanf("%d", &num);
        A[i][j]=num;
    }
    
 }

//valores matriz B
  for ( i = 0; i < 3; i++)
 {
    for ( j = 0; j < 2; j++)
    {
        printf("Ingrese el numero del espacio %d%d de la matriz B:\n", i+1, j+1);
        scanf("%d", &num);
        B[i][j]=num;
    }
    
 }

//matriz final C
 for ( i = 0; i < 3; i++)
 { 
    for ( j = 0; j < 2; j++)
    {
        C[i][j]=A[i][j]+B[i][j];
         printf("El espacio %d%d es =%d\n",i+1,j+1, C[i][j]);
    }
 }
 

    return 0;
}