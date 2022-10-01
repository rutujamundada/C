//program print  hello how many times accepts from user

#include<stdio.h>

//Demonstrate Iteration

void Display()		//Definition
{		
	int iCnt=0;

	//1 initialization of counter 
	//2	Condition
	//3	Displacement
	//4	Loop body
	
	//	    1		2	   3
	for(	iCnt=1;	iCnt<=5;iCnt++)		
	{
		printf("Hello\n");			//4
	}

//1
//2 4 3	
//2 4 3
//2 4 3
//2 4 3
//2 4 3
//2

}

int main()
{
	Display();		//Function Call

	return 0;
}


