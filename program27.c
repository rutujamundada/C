//GOLD
//switch case
//1 gram 	4,000
//2 gram	8,000
//5 gram	20,000
//10 gram   40,000
//every switch case code can be converted into if else but every if else 
//cannot be converted to switch case its depends on condition

#include<stdio.h>

void JwelersPortal(int iWeight)
{
	switch(iWeight)
	{
		case 1:
			printf("Your bill amount is 4,000\n");
			break;
	
		case 2:
			printf("Your bill amount is 8,000\n");
			break;
	
		case 5:
			printf("Your bill amount is 20,000\n");
			break;
	
		case 10:
			printf("Your bill amount is 40,000\n");
			break;
		default:
			printf("Invalid weight\n");
	}	
	
}

int main()
{
	int iValue=0;
	
	printf("Enter the gold coin size that you want to purchase\n");
	scanf("%d",&iValue);

	JwelersPortal(iValue);
	
	return 0;
}