/* Accept N numbers from user and return the largest number. */

#include<stdio.h>
#include<stdlib.h>		//for malloc

#define ERRMEMORY -1
#define ERRSIZE -2

int CheckLargestNum(int *arr, int iLength)
{
	int iCnt = 0, iLargest = 0 , iTemp = 0;
	
	if(arr == NULL)
	{
		return ERRMEMORY;
	}
	
	if(iLength <=0)
	{
		return ERRSIZE;
	}
	
	iTemp = arr[0];
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(iTemp > arr[iCnt])
		{
			iLargest = iTemp;
		}
		else
		{
			iTemp = arr[iCnt];
			iLargest = iTemp;
		}
	}
	return iLargest;
}
	
int main()
{
	int iSize , iRet = 0;
	int *ptr = NULL;
	
	printf("\nEnter the size of array:\t");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int)*iSize);
	
	printf("\nEnter the Elements of array:\n");
	
	for(int i=0; i<iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("\nYour entered elements of array are:\n\n");
	
	for(int j=0; j<iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	iRet = CheckLargestNum(ptr,iSize);
	
	printf("\n\nLargest Number of array are: \t %d\n",iRet);
	
	if(iRet == -1)
	{
		printf("\nERROR:Unable to allocate memory\n");
	}
	
	if(iRet == -2)
	{
		printf("\nERROR:Invalid Input Size\n");
	}
	
	free(ptr);
	
	return 0;
}
	
	
