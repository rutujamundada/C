#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(iNo)
{	
	int iCnt=0;
	
	for(iCnt=2;iCnt<=(iNo/2);iCnt++)
	{
		if(iNo%iCnt==0)
		{
			break;
		}
	}
	
	if(iCnt == (iNo/2)+1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue=0;
	bool bRet;
	
	printf("Enter the number");
	scanf("%d",&iValue);

	bRet=CheckPrime(iValue);
	
	if(bRet==true)
	{
		printf("%d is prime number",iValue);
	}
	else
	{
		printf("%d is not prime number",iValue);
	}
	return 0;
}