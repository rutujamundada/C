//Accept number from user and return addition  of factors
#include<stdio.h>

int SumFactors(int iNo)
{
	int iCnt=0;
	int iSum=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
 
	iRet=SumFactors(iValue);
	
	printf("Sum of factors is:%d",iRet);
	
	return 0;
}