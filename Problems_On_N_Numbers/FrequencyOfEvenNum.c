/* Accept N numbers from user and return frequency of even numbers. */

#include<stdio.h>
#include<stdlib.h>				//	for malloc

#define ERRMEMORY -1
#define ERRSIZE -2

int FrequencyOfEvenNum(int *arr , int iLength)
{
	int iFreq = 0;
	
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
			iFreq++;
		}
	}
	return iFreq;
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
	
	printf("\n\nFrequency of Even Numbers are:\t\t%d\n",iRet);
	
	if(iRet == -1)
	{
		printf("\nERROR:Unable to allocate memory");
	}
	if(iRet == -2)
	{
		printf("\nERROR:Invalid input size\n");
	}
	
	free(ptr);
	
	return 0;
}
	
	
	