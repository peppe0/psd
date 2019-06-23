#include <stdlib.h>
#include <stdio.h>
#define MAX 7
void MergeSort(int *,int, int);
void Merge(int *,int, int ,int);

int main()
{
  int vet[7]= {2,1,4,3,5,7,6};
   MergeSort(vet,0,6);
  for(int i=0;i<MAX;i++)
  printf("%d ",vet[i]);
 printf("\nfine\n");
}

void MergeSort(int * vet ,int st, int dim)
{
 int q; 
   if(st< dim) 
  { 
    q= (st+ dim)/2; 
    MergeSort(vet, st, q); 
    MergeSort(vet, q+1, dim); 
    Merge(vet,st, q, dim); 
  }
}

void Merge (int A[], int p, int q, int r)
{ 
   int B[MAX], i, j, k;
   for(i=p, j=q+1, k=p; i<=q&& j<=r; )
    if( A[i] < A[j] ) 
             B[k++] = A[i++];
    else B[k++] = A[j++];
  for( ; i<=q; ) 
       B[k++] = A[i++];
  for( ; j<=r; ) 
       B[k++] = A[j++];
  for( k=p; k<=r; k++) 
        A[k] = B[k];
  }

