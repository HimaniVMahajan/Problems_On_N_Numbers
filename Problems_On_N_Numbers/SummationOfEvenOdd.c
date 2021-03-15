/* Accept N numbers from user and return difference between summation of even elements and summation of odd elements. */

#include<stdio.h>
#include<stdlib.h>				//for malloc

#define ERRMEMORY -1
#define ERRSIZE -2

int SummationOfEvenOdd(int *arr , int iLength)
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
		if((arr[iCnt]%2)==0)
		{
			iEven = iEven + arr[iCnt];
		}
		else
		{
			iOdd = iOdd + arr[iCnt];
		}
	}
	
	return (iDiff = iEven - iOdd);
}
	
int main()
{
	int iSize = 0 , iRet = 0;
	int *ptr = NULL;
	
	printf("\nEnter the size of array:\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int)*iSize);
	
	printf("\nEnter the elements in array:\n");
	
	for(int i=0; i<iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("\nYour entered elements are:\n");
	
	for(int j=0; j<iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	iRet = SummationOfEvenOdd(ptr,iSize);
	
	printf("\n Difference between summation of even elements and summation of odd elements:\n %d",iRet);
	
	if(iRet == -1)
	{
		printf("\nERROR: unable to allocate memory\n");
	}
	if(iRet == -2)
	{
		printf("\nERROR: Invalid input size\n");
	}
	
	free(ptr);
	
	return 0;
}
	
	
	
	
	
	