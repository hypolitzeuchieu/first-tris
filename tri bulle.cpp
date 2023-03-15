#include<stdio.h>
int main()
{
	int T[100];
	int i,N,temp,j;
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
        for(j=0;j<N;j++)
        {
      	if(T[j]>T[j+1])
      	 {
      		temp=T[j];
      		T[j]=T[j+1];
      		T[j+1]=temp;
	     }
	    }
	  printf("\n affichage du tableau apres le tri:\n");
	  for(i=0;i<N;i++)
	  {
	  	printf(" %d ",T[i]);
	  }
	
}
