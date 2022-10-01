//Accept number from user and display its Non factors
#include<stdio.h>

void DisplayNonFactors(int iNo)
{
	int iCnt=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)
		{
			printf("%d\n",iCnt);
		}
	}
}

//Time complexity : O(N/2)

int main()
{
	int iValue=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
 
	DisplayNonFactors(iValue);

	return 0;
}