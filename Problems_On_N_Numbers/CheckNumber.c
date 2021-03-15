/* Accept N numbers from user check whether that numbers contains 11 in it or not. */

#include<stdio.h>
#include<stdlib.h>		//for malloc

typedef int BOOL;

#define TRUE 1
#define FALSE 0
#define ERRMEMORY -1
#define ERRSIZE -2

BOOL CheckNumber(int *arr, int iLength, int iFound)
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
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(arr[iCnt] == iFound)
		{
			break;
		}
	}
	
	if(arr[iCnt] == iFound)
	{
		return TRUE;
	}
}
	
int main()
{
	int iSize = 0 , iRet = 0 , iSearch = 0;
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
	
	printf("\n\nEnter the element you want to be search:\t");
	scanf("%d",&iSearch);
	
	iRet = CheckNumber(ptr,iSize,iSearch);
	
	if(iRet == TRUE)
	{
		printf("\n Number is Present\n");
	}
	else if(iRet == ERRSIZE)
	{
		printf("\nERROR:Invalid input size\n");
	}
	else if(iRet == ERRMEMORY)
	{
		printf("\nERROR:Unable to allocate memory\n");
	}
	else
	{
		printf("\nNumber is Absent\n");
	}
	
	free(ptr);
	
	return 0;
}
	