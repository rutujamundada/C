//accept no from user 
//input 4
//output 10(1+2+3+4)

/*
        Algoritham

        START
            Accept number from user as No
            Check whether that number is negative or  not
            If it is negative then convert it to positive

            Create one variable as Sum and set it to 0
            Create one variable as Cnt and set it to 1

            Iterate till Cnt is less than or equal to No
                Add the value of Cnt into the variable Sum
                Inrement the value of Cnt by 1
            Loop

            Display the value of Sum
        END
*/

#include<stdio.h>

int Summation(int iNo)
{
	int iSum=0;	//to store the sum
	int iCnt=0;	//counter

	if(iNo<0)	//updater
	{
		iNo = -iNo;
	}

	iCnt=1;
	while(iCnt<=iNo)
	{
		iSum=iSum+iCnt;	
		iCnt++;
	}
	/*for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iSum=iSum+iCnt;	
	}*/
	
	return  iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet=Summation(iValue);

	printf("Summationis %d\n",iRet);
	
	return 0;
}