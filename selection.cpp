#include<stdio.h>
int main()
{
	int T[100];
	int temp,i,j,min,debut,N;
    printf("entrer la taille  de  votre tableau:");
    scanf("%d",&N);
    printf("entrer les elements de  votre tableau:\n");
    for(i=0;i<N;i++)
     {	
  	   printf("T[%d]=",i);
  	   scanf("%d",&T[i]);
     }
   printf("affichage du tableau avant le tri :\n");
   for(i=0;i<N;i++)
    {
   	  printf("%d ",T[i]);
    }
   for(i=0;i<N;i++)
   	{
   		min=i;
    
       for(j=i+1;j<N;j++)
   		{
   			if(T[j]<T[min])
   			{
   				min=j;
			}
		}
       if(i!=min)
		{
		
		 temp=T[i];
		 T[i]=T[min];
		 T[min]=temp;	
     	}
    } 
	printf("\n affichage apres le tri:\n");
	for(i=0;i<N;i++)
   {
   	printf("%d ",T[i]);
   }

}
