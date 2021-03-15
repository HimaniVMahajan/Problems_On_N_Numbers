/* Accept N numbers from user and perform the addition of that N numbers. */

#include<stdio.h>
#include<stdlib.h>

#define ERRMEMORY -1
#define ERRSIZE -2

int Sum_oF_N_Numbers(int *ptr, int iSize)
{
	int iSum = 0;
	
	if(ptr == NULL)
	{
		return -1;
	}
	
	if(iSize <= 0)
	{
		return -2;
	}
	
	for(int i=0; i<iSize; i++)
	{
		iSum = iSum + ptr[i];
	}
	return iSum;
}
	
int main()
{
	int iN = 0 , iRet = 0 , iCnt = 0;
	int *ptr = NULL;
	
	printf("\n");
	 
	printf("How many elements you want to be in array:\t");
	scanf("%d",&iN);
	
	ptr = (int*)malloc(sizeof(int)*iN);							//dynamic memory allocation
	
	printf("\n");
	
	printf("Enter the elements in array:\n");
	
	for(iCnt=0; iCnt<iN; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("\n");
	
	printf("Your entered elements in array:\n");
	
	for(iCnt=0; iCnt<iN; iCnt++)
	{
		printf("%d\t",ptr[iCnt]);
	}
	
	printf("\n\n");
	
	iRet = Sum_oF_N_Numbers(ptr,iN);
	
	if(iRet == ERRMEMORY)
	{
		printf("ERROR:Invalid Memory Address\n\n");
	}
	if(iRet == ERRSIZE)
	{
		printf("ERROR:Invalid Size\n\n");
	}
	
	printf("Sum of all the elements in array:\t%d",iRet);
	
	printf("\n");
	
	free(ptr);														//free dynamic memory which was allocate by malloc
	
	return 0;
	
}