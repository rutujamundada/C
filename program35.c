//Accept number from user and check whether it is perfect or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
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
	
	if(iSum>iNo)
	{
		break;
	}
	}
	if(iSum==iNo)
	{
		return true;
	}
	else
	{
		return false;
	}

	return iSum;
}

int main()
{
	int iValue=0,iRet=0;
	bool bRet;
	
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
 
	bRet=CheckPerfect(iValue);

	if(bRet==true)
	{
		printf("%d is a perfect number\n",iValue);
	}
	else
	{
		printf("%d is a not  perfect number\n",iValue);
	}
	return 0;
}