#include<stdio.h>

void Display(int ptr[])
{
	register int iCnt=0;
	
	printf("Elements of array are:\n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\n",*ptr);
		ptr++;
	}
}

int main()
{
	auto int Arr[5];
	register int iCnt=0;
	
	printf("Enter elements:");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	Display(Arr);	//Display(100);

	return 0;
}