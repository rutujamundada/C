//Program to display 1 to 5  on screen using whilw loop
//output 1	2	3	4 	5

#include<stdio.h>	

void Display(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;	 //updater
	}		
	
	iCnt=1;			//1
	while(iCnt<=iNo)	//2
	{
		printf("%d\n",iCnt);//4
		iCnt++;			//3
	}
	
	/*	1		2		3
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\n",iCnt);//4
	}
	*/
}

int main()
{
	int iValue=0;

	printf("please enter number\n");
	scanf("%d",&iValue);

	Display(iValue);	
		
	return 0;
}