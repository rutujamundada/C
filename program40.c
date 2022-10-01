#include<stdio.h>
#include<stdbool.h>

int CountFactor(iNo)
{	
	int  iCnt=0;
	 int iFactCnt=0;

	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iFactCnt++;
		}
		
	}
	return iFactCnt;
}

int main()
{
	int iValue=0;
	int Ret=0;
	
	printf("Enter the number");
	scanf("%d",&iValue);

	Ret=CountFactor(iValue);

	printf("Number of factors are:%d\n",Ret);

	
	return 0;
}