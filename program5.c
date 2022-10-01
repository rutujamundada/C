//write a prgram which is used to perform addition of two numbers

#include<stdio.h>

int Addition(int iValue1,int iValue2)
{
	int iAns=0;
	iAns=iValue1 + iValue2;
	return iAns;
}

int main()
{
	int iNo1=0;
	int iNo2=0;
	int iRet=0;
	
	printf("Enter First nmber\n");
	scanf("%d",&iNo1);

	printf("Enter Second nmber\n");
	scanf("%d",&iNo2);

	iRet=Addition(iNo1,iNo2);

	printf("Addition is : %d\n",iRet);	

	return 0;
}