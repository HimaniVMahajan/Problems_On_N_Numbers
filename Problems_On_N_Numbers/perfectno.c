/* Accept N numbers from user and display all perfect numbers from that N numbers. */

#include<stdio.h>
#include<stdlib.h>				//for malloc

#define ERRMEMORY -1
#define ERRSIZE -2


int DisplayPerfectNum(int *arr , int size)
{
	int iSum = 0 , iC = 0 , iCnt = 0;
	
	if(arr == NULL)
	{
		return ERRMEMORY;
	}
	if(size <= 0)
	{
		return ERRSIZE;
	}

	printf("\n\nperfect numbers are");
	
	for(int iCnt=0; iCnt<size; iCnt++)
	{
		for(int iC=1; iC< arr[iCnt]; iC++)
		{
			if((arr[iCnt]%iC) == 0)
			{
				iSum = iSum + iC;
			}
			if(iSum > arr[iCnt])
			{
				break;
			}
		}
		
		printf("\n");
		
		if(iSum == arr[iCnt])
		{
			printf("%d\t",arr[iCnt]);
		}
		iSum = 0;
	}
}

int main()
{
	int *ptr = NULL;
	int iSize = 0 , iRet = 0;
	
	printf("\n");
	
	printf("Enter the size of array:\t");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int)*iSize);
	
	printf("\n");
	
	printf("Enter the Numbers:\n");
	
	for(int i=0; i<iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
		
	printf("\n");
	
	printf("Your Entered elements are:\n\n");
	
	for(int j=0; j<iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	iRet = DisplayPerfectNum(ptr,iSize);
	
	if(iRet == ERRMEMORY)
	{
		printf("\nERROR: Unable to allocate memory\n");
	}
	if(iRet == ERRSIZE)
	{
		printf("\nERROR: Invalid input size\n");
	}
	
	free(ptr);
	
	return 0;
}
		
