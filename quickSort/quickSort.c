#include <stdlib.h>
#include <stdio.h>
#define MAX 7
void quickSort(int *,int, int);
int partition(int *,int, int);

int main()
{
  int vet[7]= {2,1,4,3,5,7,6};
  quickSort(vet,0,6);
  for(int i=0;i<MAX;i++)
  	printf("%d ",vet[i]);
 printf("\nfine\n");
}

void quickSort(int * A ,int p, int r)
{
	int q;
	if(p < r)
	{
		q = partition(A,p,r);
		quickSort(A,p,q);
		quickSort(A,q+1,r);
	}
}

int partition (int A[], int p,int r )
{ 
	int x, i, j, temp;
	x = A[p];
	i = p-1;
	j = r+1;
	while(i<j)
	{
		while(A[--j] > x);
		while(A[++i] < x);
		if(i < j)
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		} 		
	}
   return (j);
}


