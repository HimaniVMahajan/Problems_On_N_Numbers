/* Accept N numbers from user and accept Range, Display all elements from that range .*/

#include<stdio.h>
#include<stdlib.h>		//for malloc

#define ERRMEMORY -1
#define ERRSIZE -2

int DisplayRange(int *arr, int iLength, int iFirst,int iLast)
{
	int iCnt = 0;
	
	if(arr == NULL)
	{
		return ERRMEMORY;
	}
	if(iLength <=0)
	{
		return ERRSIZE;
	}
	
	printf("\nAll elements from that Range\n\n");
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(arr[iCnt] > iFirst && arr[iCnt] < iLast)
		{
			printf("%d\t",arr[iCnt]);
		}
	}
	printf("\n");
}
	
int main()
{
	int iSize = 0 , iRet = 0 , iStart = 0 , iEnd = 0;
	int *ptr = NULL;
	
	printf("\nEnter the size of array:\t");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int)*iSize);
	
	printf("\nEnter the elements of array:\n");
	
	for(int i=0; i<iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("\nYour entered elements of array are:\n\n");
	
	for(int j=0; j<iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	printf("\n\nEnter the starting Range:\t");
	scanf("%d",&iStart);
	
	printf("\n\nEnter the Ending Range:\t");
	scanf("%d",&iEnd);
	
	iRet = DisplayRange(ptr,iSize,iStart,iEnd);
	
	if(iRet == ERRSIZE)
	{
		printf("\nERROR:Invalid input size\n");
	}
	else if(iRet == ERRMEMORY)
	{
		printf("\nERROR:Unable to allocate memory\n");
	}
	
	free(ptr);
	
	return 0;
}