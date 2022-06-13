#include<stdio.h>
#define MAXSIZE 100
int main()
{
	int arr[MAXSIZE];
	int i,j,n,small,GCD;
	printf("Enter how many Numbers you want to enter\n");
	scanf("%d",&n);
	// scaning the numbers 
	printf("Enter numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	small = arr[0];// assigning the first element of array as smallest numbers

	//logic for finding smallest number in the array
	for(i=1;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
		}
	}

	//logic to find the GCD 
	for(i=small;i>=0;i--)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j]%i==0)
			{
				continue;
			}
			else
			{
				break;
			}
		}
		if(j==n)
		{
			GCD=i;
			break;
		}

	}
	
	printf("GCD= %d\n",GCD);
}
