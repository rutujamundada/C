#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iLength)
{
	int iCnt=0;
	
	printf("Even elements are:\n");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;	
	
	printf("Enter number of elements:\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
		
	printf("Enter values:\n");

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	DisplayEven(ptr,iSize);

	free(ptr);
	
	return 0;
}



/*
Steps

	Step1:	Accept the size of array from user(main)
	Step2:	Allocate the memory dynamically for that array(main)
	Step3:	Accept the values from user and store it in array(main)
	Step4:	pass that array and size to the function(logic)(function)
	Step5:	Deallocate the memory(main)
	
*/