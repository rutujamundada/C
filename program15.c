//program print  hello how many times accepts from user

#include<stdio.h>

//Demonstrate Iteration

void Display(int iNo)		//Definition
{		
	int iCnt=0;
	
	//	    1		2	   3
	for(	iCnt=0;	iCnt<iNo;iCnt++)		
	{
		printf("Hello\n");			//4
	}

}

int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);

	Display(iValue);		//Function Call

	return 0;
}

