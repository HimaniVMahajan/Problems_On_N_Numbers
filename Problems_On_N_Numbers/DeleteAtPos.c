/* Accept N numbers from array and delete the element at that given position. */

#include<stdio.h>
#include<stdlib.h> //for malloc

#define ERRMEMORY -1
#define ERRSIZE -2
#define ERRLOC -3

int DeleteAtPos(int *arr , int iLen , int iLoc)
{
	if(arr == NULL)
	{
		return ERRMEMORY;
	}
	
	if(iLen <= 0)
	{
		return ERRSIZE;
	}
	
	for(int k=iLoc; k<=iLen-1; k++)
	{
		if(iLoc>iLen || iLoc<0)
		{
			return ERRLOC;
		}
		arr[k] = arr[k+1]; 
	}
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
	
	printf("\n\nEnter the position that you want to be delete:\t");
	scanf("%d",&iPos);
	
	iRet = DeleteAtPos(ptr,iSize,iPos);
	
	if(iRet == ERRMEMORY)
	{
		printf("\n\nERROR:Unable to allocate memory\n");
	}
	else if(iRet == ERRSIZE)
	{
		printf("\n\nERROR:Invalid Size\n");
	}
	else if(iRet == ERRLOC)
	{
		printf("\n\nERROR:Invalid Position\n");
	}
	else
	{
		printf("\nArray After Deletion:\n");
		for(int z=0; z<=iSize-2; z++)
		{
			printf("%d\t",ptr[z]);
		}
	}
	printf("\n");
	
	free(ptr);
	
	return 0;
}
	
	
	
	