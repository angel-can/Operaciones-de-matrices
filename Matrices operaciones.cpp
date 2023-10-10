#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int m,i,j,k,fa,ca,fb,cb,s=0,f,temporal;
	
	srand(time(NULL));
	printf("Este programa hace operaciones de matrices.Las ooperaciones son las siguientes \n1.Suma\n2.Resta\n3.Multiplicacion\n4.Suma triangular\n Nota:Para la suma y resta las matrices deben tener las mismas dimensiones");
	printf("\nNota 2:Las matrices son cuadradas");
	printf("\nDime el largo de la Matriz A\n");
	scanf("%d",&fa);
	ca=fa;
	int A[fa][ca];
	
	printf("\nLa Matriz A es:\n");
		for(i=0;i<fa;i++)
		{
			for(j=0;j<ca;j++)
			{
				A[i][j]=rand()%9+1;
				printf("%d ",A[i][j]);					
			}
			printf("\n");	
		}

	printf("\nDime el largo de la Matriz B\n");
	scanf("%d",&fb);
	cb=fb;
	int  B[fb][cb];
	
	printf("\nLa Matriz B es:\n");
	for(i=0;i<fb;i++)
		{
			for(j=0;j<cb;j++)
			{
				B[i][j]=rand()%9+1;
				printf("%d ",B[i][j]);					
			}
			printf("\n");				
		}
	int C[ca][fb];
	printf("Ahora elige la operacion del menu\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Suma triangular\n");
	scanf("%d",&m);
	

	switch(m)
	{
		case 1:
			printf("SUMA DE MATRICES\n");
			for(i=0;i<fa;i++)
			{
				for(j=0;j<ca;j++)
				{
					C[i][j]=A[i][j]+B[i][j];
					printf("%d ",C[i][j]);
				}
				printf("\n");
			}
			break;
			
		case 2:
			printf("RESTA DE MATRICES");
			for(i=0;i<fa;i++)
			{
				for(j=0;j<ca;j++)
				{
					C[i][j]=A[i][j]-B[i][j];
					printf("%d ",C[i][j]);
				}
				printf("\n");
			}
			break;
		
		case 3:
			printf("MULTIPLICACION DE MATRICES");
			
		/*	for(k=0;k<;k++)
			{
				for(i=0;i<fb;i++)
				{
					for(j=0;j<cb;j++)
					{
					f=A[i][j]*B[j][i];
					s+=f
					}
					C[i][]
				}
			}*/
			for (i=0; i<cb; i++)
			{
				for (j=0; j<cb; j++)
				{
					temporal=0;
					for (k=0; k<cb; k++)
					{
						temporal += A[i][k] * B[k][j];
					}
					C[i][j] = temporal;
					printf("%d ",C[i][j]);
				}
		}
			
			break;
			
		case 4:
			printf("SUMA DE LA DIAGONAL MAYOR Este apartado suma la diagonal de la Matriz A");
			for(i=0;i<fa;i++)
			{
				f=A[i][i];
				s+=f;
			}
			printf("La suma de la diagonal es %d",f);
			break;
			
		case 5:
			printf("Suma triangular superior Este apartado suma el triangulo superior de la Matriz A");
			for(i=0;i<fa;i++)
			{
				for(j=i+1;j<cb;j++)
				{
					f=A[i][j];
					s+=f;
				}
				f=A[i][i];
				s+=f;
			}
			printf("La suma del triangulo superior es %d",f);
			break;
	}
	
	return 0;
}
