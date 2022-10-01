//Accept number from user and return number of digits in it

#include<stdio.h>

int CountDigits(int iNo)
{	
	int iCntDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo>0)
	{
		iCntDigit++;
		iNo=iNo/10;
	}
	return iCntDigit;	
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountDigits(iValue);
	
	printf("Number of Digits are:%d\n",iRet);

	return 0;
}