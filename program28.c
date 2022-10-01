//Accept number from user and display its factors
#include<stdio.h>

void DisplayFactors(int iNo)
{
	int iCnt=0;


	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d\n",iCnt);
		}
	}
}

//time complexity : O(N)

int main()
{
	int iValue=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
 
	DisplayFactors(iValue);

	return 0;
}
