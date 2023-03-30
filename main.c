#include "stdio.h"
void cargar(int[4][3],char[4][20],char[3][20]);
void totgrl(int[4][3]);
void totcat(int[4][3],char[4][20]);
void totmes(int[4][3],char[3][20]);
void mesmax(int [4][3]);

int main()
{
    int M[4][3];
    char categorias[4][20]={"ninios","adolecentes","adultos","ancianos"};
    char meses[3][20]={"mes 1","mes 2","mes 3"};
    printf("Cargar datos\n");
    cargar(M,categorias,meses);
    totgrl(M);
    totcat(M,categorias);
    totmes(M,meses);
    mesmax(M);

    return 0;
}
void cargar(int M[4][3],char c[4][20],char m[3][20])
{
    int i,j;
    for(i=0;i<4;i++)
    {
         for(j=0;j<3;j++)
         {
             printf("Ingrese enfermos en la categoria %s del  %s:\n",c[i],m[j]);
             scanf("%d",&M[i][j]);
         }
    }
}
void totgrl(int M[4][3])
{
    int i,j,suma=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            suma=suma+M[i][j];
        }
    }
}
void totcat(int M[4][3],char c[4][20])
{
    int i,j,suma;
    for(i=0;i<4;i++)
    {
        suma=0;
        for(j=0;j<3;j++)
        {
            suma=suma+M[i][j];
        }
        printf("La suma en la categoria %s es %d\n",c[i],suma);
    }

}
void totmes(int M[4][3],char m[3][20])
{
    int i,j,suma=0;
    for(j=0;j<3;j++)
    {
        suma=0;
        for (i=0;i<4;i++)
        {
            suma=suma+M[i][j];
        }
        printf("El total de enfermos en el %s es de %d\n",m[j],suma);
    }
}
void mesmax(int M[4][3])
{
    int i,j,nro,max=0;
    for(j=0;j<3;j++)
    {
        for (i=0;i<4;i++)
        {
            nro=M[i][j];
            if(nro>max)
            {
                max=nro;
            }
        }
    }
    printf("El mes con mas enfermos tuvo %d\n",max);
}