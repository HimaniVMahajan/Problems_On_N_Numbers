/* Accept N numbers from array and insert the element at that given position. */

#include<stdio.h>
#include<stdlib.h> //for malloc

#define ERRMEMORY -1
#define ERRSIZE -2

int InsertAtPos(int *arr , int iLen , int iLoc , int iValue)
{
	if(arr == NULL)
	{
		return ERRMEMORY;
	}
	
	if(iLen <= 0)
	{
		return ERRSIZE;
	}
	
	for(int k=iLen-1; k>=iLoc; k--)
	{
		arr[k+1] = arr[k]; 
	}
	arr[iLoc] = iValue;
}
	
int main()
{
	int iSize = 0 , iRet = 0 , iPos = 0 , iEle = 0;
	int *ptr = NULL;
	
	printf("\nEnter the size of array:\t");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int)*iSize);
	
	printf("\nEnter the elements of array:-\n");
	
	for(int i=0; i<iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("\nYour Entered elements of array are:\n");
	
	for(int j=0; j<iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	printf("\n\nEnter the position:\t");
	scanf("%d",&iPos);
	
	printf("\n\nEnter the element you want to be insert:\t");
	scanf("%d",&iEle);
	
	iRet = InsertAtPos(ptr,iSize,iPos,iEle);
	
	if(iRet == ERRMEMORY)
	{
		printf("\n\nERROR:Unable to allocate memory\n");
	}
	else if(iRet == ERRSIZE)
	{
		printf("\n\nERROR:Invalid Size\n");
	}
	else
	{
		printf("\nArray After Insertion:\n");
		for(int z=0; z<=iSize; z++)
		{
			printf("%d\t",ptr[z]);
		}
	}
	printf("\n");
	free(ptr);
	
	return 0;
}
	
	
	
	