//Input :2	4
//Output:16	(2*2*2*2)

/*
	Start
		Accept one number as no1 
		Accept another number as no2
		
		Create one variable as mult
		set the value 1 in the variable mult
	
		Create one counter as cnt
		set the counter to 1
 
		LOOP:
		iterate till the counter is
		less than or equal to no2
		 mult=mult*no1;
		Increment the counter by 1
		Goto LOOP

		Display the value of mult

		END

		no1=2;
		no2=4;
		mult=1;

		mult =mult*no1
		mult =mult*no1
		mult =mult*no1
		mult =mult*no1

		for(cnt=1;cnt<=no2;cnt++)
		{
			mult =mult*no1
		}
*/

#include<stdio.h>

unsigned long int Power(int iNo1,int iNo2)
{
	 register int iCnt=0;
	 unsigned long int lMult=1;
	
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		lMult=lMult*iNo1;
	}
	
	return lMult;
}

int main()
{
	auto int iValue1=0;
	auto int iValue2=0;
	auto unsigned long int lRet=0;	

	printf("Enter base:\n");
	scanf("%d",&iValue1);

	printf("Enter power:\n");
	scanf("%d",&iValue2);
	
	lRet=Power(iValue1,iValue2);

	printf("Result is : %ld\n",lRet);

	return 0;
}