// program for finding the GCD and LCM of 2 no
#include<stdio.h>
int main()
{
	int num1,num2,i;
	int GCD, LCM;
	printf("Enter two no\n");
	scanf("%d %d",&num1,&num2);
	// checking which number is smaller
	if(num1 <= num2)
	{
		i = num1;
	}
	else if(num2 <= num1)
	{
		i=num2;
	}
	// intializing the loop variable by small no and checking both no are devisible or not
	for( ; i >= 0 ; i--)
	{
		if(num1 % i==0 && num2 % i==0 )
		{	
			GCD=i;
			printf("GCD= %d\n", i);
			break;
		}
	}
	// logic for calculating LCM of 2 numbers
	LCM = (num1 / GCD) * num2;
	printf("LCM= %d\n",LCM);
}
