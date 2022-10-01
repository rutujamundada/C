//Input  Rows=4  Columns=4
/*

a b c d
a b c d
a b c d
a b c d


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
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='a';j<=iCol;j++,ch++)
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
