//Input Rows 4  Col 4

/*
A 
B B 
C C C 
D D D D
*/

/*

	for(expression,expression,expression)
	{
		expression;
	}

	all expressions are optional and can be multiple
	
	for(;;)
	{
	}

	while(1)
	{}

*/
//Time Complexity = O(N/2)

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';
	
	for(i=1,ch='A';i<=iRow;i++,ch++)
	{
		for(j=1;j<=i;j++)
		{
			{
				printf("%c\t",ch);
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter number of rows");
	scanf("%d",&iValue1);
	
	printf("Enter number of Columns");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	return 0;
}
