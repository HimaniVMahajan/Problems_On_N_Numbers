/* Accept N numbers from user and display all such elements which are divisible by 5. */

#include<stdio.h>
#include<stdlib.h>		//for malloc

void DivisibleByFive(int *arr, int iLength)
{
	printf("\n\nElements which are divisible by five:\n");
	for(int iCnt=0; iCnt<iLength; iCnt++)
	{
		if((arr[iCnt]%5)==0)
		{
			printf("\n%d\t",arr[iCnt]);
		}
	}
}
	
int main()
{
	int iSize = 0;
	int *ptr = NULL;
	
	printf("\nEnter the size of array:\t");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int)*iSize);
	
	printf("\nEnter the elements of array:\n");
	
	for(int i=0; i<iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("\n Your entered elements of array are:\n");
	
	for(int j=0; j<iSize; j++)
	{
		printf("%d\t",ptr[j]);
	}
	
	DivisibleByFive(ptr,iSize);
	
	free(ptr);
	
	return 0;
}