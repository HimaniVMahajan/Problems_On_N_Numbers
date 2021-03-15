/* Accept N numbers from user and return product of all odd elements. */

#include<stdio.h>
#include<stdlib.h>		//for malloc

#define ERRMEMORY -1
#define ERRSIZE -2

int ProductOfOddNum(int *arr, int iLength)
{
	int iCnt = 0 , iProduct = 1;
	
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
		if((arr[iCnt]%2)!=0)
		{
			iProduct = iProduct * arr[iCnt];
		}
	}
	return iProduct;
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
	
	printf("\nYour entered elements of array are:\n\n");
	
	for(int j=0; j<iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	iRet = ProductOfOddNum(ptr,iSize);
	
	printf("\n\nProduct of all ODD Elements:\t%d\n",iRet);
	
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