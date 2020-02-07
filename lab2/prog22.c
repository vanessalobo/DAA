#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int gcd(int m, int n)
{
	int g=1;
	int i=2;
	int t=(n<m)?n:m;
	int count=0;
	while(t/i>0)
	{
		while(m%i==0 && n%i==0)
		{
			g=g*i;
			m=m/i;
			n=n/i;
			count++;

		}
		count++;
		i++;
	}
	printf("Opcount=%d", count);
	return g;
}
void main()
{
	int m, n;
	printf("Enter the first number");
	scanf("%d", &m);
	printf("Enter the second number");
	scanf("%d", &n);
	printf("GCD= %d", gcd(m, n));
	

}