#include<stdio.h>
#define MAXSIZE 1000
void GCD_2_no(int* , int *);// function declaration for GCD of 2 no
int main()
{
	int arr[MAXSIZE];
	int n,i,LCM;
	printf("how many no you want to enter\n ");
	scanf("%d",&n);
	printf("Enter elements\n");
	// scaning numbers from user
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	LCM = arr[0];// assiging the first element of array to one variable LCM

	for(i=1;i<n;i++)
	{
		GCD_2_no(&LCM,&arr[i]);
	}
	printf("LCM= %d\n",LCM);
}

void GCD_2_no(int* p1, int* p2)// funtion for calculating GCD of 2 numbers
{
	int i, GCD;
	if(*p1 <= *p2)
	{
		i = *p1;
	}
	else if(*p1 >= *p2)
	{
		i = *p2;
	}
	for(;i>=0;i--)
	{
		if((*p1 % i)==0 && (*p2 % i)==0)
		{
			GCD=i;
			break;
		}
	}
	*p1 = (*p2 / GCD) * *p1;
}
