/* Accept N numbers from user and display summation of digits of each number. */

#include<stdio.h>
#include<stdlib.h>	//for malloc

#define ERRMEMORY -1
#define ERRSIZE -2

int DisplaySumOfDigits(int *arr , int iLength)
{
	int iDigits = 0, iTemp = 0 , iSum = 0;
	
	if(arr == NULL)
	{
		return ERRMEMORY;
	}
	
	if(iLength <= 0)
	{
		return ERRSIZE;
	}
	
	printf("\n\nThree Digits Numbers are:\n");
	
	for(int iCnt=0; iCnt<iLength; iCnt++)
	{
		iTemp = arr[iCnt];
		while(iTemp!=0)
		{
			iDigits = iTemp %10;
			iSum = iSum + iDigits;
			iTemp = iTemp/10;
		}
		
		printf("%d\t",iSum);
		iSum = 0;
	}
	printf("\n");
}
		
int main()
{
	int iSize = 0 , iRet = 0;
	int *ptr = NULL;
	
	printf("\nEnter the size of array:\t");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int)*iSize);
	
	printf("\nEnter the elements of array:\n");
	
	for(int i=0; i<iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("\nYour entered elements are:\n\n");
	
	for(int j=0; j<iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	DisplaySumOfDigits(ptr,iSize);
	
	if(iRet == ERRMEMORY)
	{
		printf("\nERROR:Unable to allocate memory\n");
	}
	
	if(iRet == ERRSIZE)
	{
		printf("\nERROR:Invalid Input Size\n");
	}
	
	free(ptr);
	
	return 0;
}
	
