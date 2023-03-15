#include<stdio.h>
#define MAX 500
int main()
{
  int i,N,temp,j;
  int T[100];
  printf("entrer la taille  de  votre tableau:");
  scanf("%d",&N);
  printf("entrer les elements de  votre tableau:\n");
  for(i=0;i<N;i++)
  {	
  	printf("T[%d]=",i);
  	scanf("%d",&T[i]);
  }
   printf("affichage du tableau avant le tri:\n");
   for(i=0;i<N;i++)
   {
   	printf("%d ",T[i]);
   }
   for(i=0;i<N;i++)
   {
   	temp=T[i];
   	j=i-1;
   		while((j>=0)&&(temp<T[j]))
   		{
   			T[j+1]=T[j];
   			j--;
   		  	
		}
		T[j+1]=temp;	
   } 
   	printf("\n affichage du tableau apres le tri:\n");
   	for(i=0;i<N;i++)
   	{
   		printf(" %d ",T[i]);
	}
   
}
