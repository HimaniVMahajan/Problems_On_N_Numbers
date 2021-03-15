/* Accept N numbers from user and return difference between frequency of even number and odd numbers. */

#include<stdio.h>
#include<stdlib.h>				//	for malloc

#define ERRMEMORY -2
#define ERRSIZE -3

int FrequencyOfEvenNum(int *arr , int iLength)
{
	int iDiff = 0 , iEven = 0 , iOdd = 0;
	
	if(arr == NULL)
	{
		return ERRMEMORY;
	}
	
	if(iLength <= 0)
	{
		return ERRSIZE;
	}
	
	for(int iCnt=0; iCnt<iLength; iCnt++)
	{
		if((arr[iCnt]%2) == 0)
		{
			iEven++;
		}
		else
		{
			iOdd++;
		}
	}
	return (iDiff = iEven - iOdd);
}
	
int main()
{
	int iSize = 0 , iRet = 0;
	int *ptr = NULL;
	
	printf("\nEnter the size of array:\t");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int)*iSize);						//Dynamic memory allocation
	
	printf("\nEnter the elements of array:\n");
	
	for(int i=0; i<iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("\nYour entered elements of array are:\n");
	
	for(int j=0; j<iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	iRet = FrequencyOfEvenNum(ptr,iSize);
	
	printf("\n\nDifference between frequency of even number and odd numbers:\t\t%d\n",iRet);
	
	if(iRet == -2)
	{
		printf("\nERROR:Unable to allocate memory");
	}
	if(iRet == -3)
	{
		printf("\nERROR:Invalid input size\n");
	}
	
	free(ptr);
	
	return 0;
}
	