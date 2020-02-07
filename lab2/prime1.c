#include<stdio.h>
#include<stdlib.h>
int GCD(int x,int y)
{
	int arr1[100];
	int arr2[100];
	int arr1b[100];
	int arr2b[100];
	int gcd1=1;
	int count1=0,count2=0;
	int i,j;
	int c,c2;
	for(i=2;i<x;i++)
	{
		if(isPrime(i))
			if(x%i==0)
			{
				arr1[count1]=i;
				int temp=x;
				c=0;
				while(temp%i==0)
				{
					c++;
					//printf("%d",temp);
					temp=temp/i;
				}
				arr1b[count1++]=c;

			}
	}
	for(i=2;i<y;i++)
	{
		if(isPrime(i))

			if(y%i==0)
			{
				arr2[count2]=i;
				int temp2=y;
				c2=0;
				while(temp2%i==0)
				{
					c2++;
					temp2=temp2/i;
				}
				arr2b[count2++]=c2;			}
	}

	//printf("%d",count1);
	int k;
	int min;
	for(i=0;i<count1;i++)
	{

		for(j=0;j<count2;j++)
		{
			if(arr1[i]==arr2[j])
			{
				//printf("%d",arr2[j]);
				if(arr1b[i]<arr2b[j])
					min=arr1b[i];
				else
					min=arr2b[j];

				for(k=1;k<=min;k++)
					gcd1=gcd1*arr2[j];
			}
		}
	}
	return gcd1;



}

int isPrime(int num)
{
	int i;
	int count=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			count++;

	}
	if(count==2)
		return 1;
	else
		return 0;
}

void main()
{
	int a,b;
	printf("Enter first number \n");
	scanf("%d",&a);
	printf("Enter second number \n");
	scanf("%d",&b);
	int gcd = GCD(a,b);
	printf("GCD =%d",gcd);
}

