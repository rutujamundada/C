//Program to display 1 to 5  on screen
//output 1	2	3	4 	5

#include<stdio.h>	

void Display(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;	 //updater
	}		

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	int iValue=0;

	printf("please enter number\n");
	scanf("%d",&iValue);

	Display(iValue);	
		
	return 0;
}