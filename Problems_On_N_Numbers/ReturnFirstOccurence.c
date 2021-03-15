/* Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO. */

#include<stdio.h>
#include<stdlib.h>		//for malloc

#define ERRMEMORY -1
#define ERRSIZE -2

int DisplayFirstOccurrence(int *arr, int iLength, int iFound)
{
	int iCnt = 0 , iCount = 0;
	
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
			return iCnt;
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
	
	printf("\n\nEnter the Number you want to be search:\t");
	scanf("%d",&iSearch);
	
	iRet = DisplayFirstOccurrence(ptr,iSize,iSearch);
	
	printf("\nIndex of First Occurrence of that Number is:\t %d\n",iRet);
	
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