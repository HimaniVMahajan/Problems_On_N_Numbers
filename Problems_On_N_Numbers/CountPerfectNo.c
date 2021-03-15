/* Accept N numbers from user and return count of all perfect numbers from that N numbers. */

#include<stdio.h>
#include<stdlib.h>			//for malloc

#define ERRMEMORY -1
#define ERRSIZE -2

int CountPerfectNum(int *arr , int iLength)
{
	int iSum = 0 , iResult = 0;
	
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
		for(int iCount=1; iCount<arr[iCnt]; iCount++)
		{
			if((arr[iCnt]%iCount)==0)
			{
				iSum = iSum + iCount;
			}
			if(iSum > arr[iCnt])
			{
				break;
			}
		}
		
		if(iSum == arr[iCnt])
		{
			iResult++;
		}
		iSum = 0;
	}
	return iResult;
}

int main()
{
	int iSize = 0 , iRet = 0;
	int *ptr = NULL;
	
	printf("\n Enter the size of array:\t");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int)*iSize);
	
	printf("\n Enter the elements of array:\n");
	
	for(int i=0; i<iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Your entered elements of array:\n");
	
	for(int j=0; j<iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	iRet = CountPerfectNum(ptr,iSize);
	
	printf("\n Total numbers of perfect number:\n %d",iRet);
	
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
	
	
	