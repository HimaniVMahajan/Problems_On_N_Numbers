/*  Accept N numbers from user and return the frequency of even numbers. */

#include<stdio.h>
#include<stdlib.h>

#define ERRMEMORY -1
#define ERRSIZE -2

int FrequencyOfEvenNos(int *ptr , int iSize)
{
	int iEven = 0 , i = 0;
	
	if(ptr == NULL)
	{
		return -1;
	}
	
	if(iSize <= 0)
	{
		return -2;
	}
	
	for(i=0; i<iSize; i++)
	{
		if((ptr[i] % 2)==0)
		{
			iEven++;
		}
	}
	return iEven;
}
			
int main()
{
	int size = 0 , iCnt = 0 , iRet = 0;
	int *ptr = NULL;
	
	printf("\n");
	
	printf("Enter the Size of array:\t");
	scanf("%d",&size);
	
	ptr = (int*)malloc(sizeof(int)*size);
	
	printf("\n");
	
	printf("Enter the elements of array:\n");
	
	for(iCnt=0; iCnt<size; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("\n");
	printf("Your entered elements of array are:\n");
	
	for(iCnt=0; iCnt<size; iCnt++)
	{
		printf("%d\t",ptr[iCnt]);
	}
	
	printf("\n\n");
	iRet = FrequencyOfEvenNos(ptr,size);
	
	if(iRet == ERRMEMORY)
	{
		printf("ERROR:Invalid Memory Address\n\n");
	}
	
	if(iRet == ERRSIZE)
	{
		printf("ERROR:Invalid Size\n\n");
	}
	
	printf("Frequency of Even Numbers are: %d\t",iRet);
	printf("\n");
	
	free(ptr);
	
	return 0;
}
	
	
	
	