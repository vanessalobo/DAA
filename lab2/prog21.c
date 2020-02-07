#include<stdio.h>
#include<stdlib.h>
int gcd(int m, int n)
{
	int t;
	int count=0;
	t=(m>n)?n:m;
	if(m==0){
		count++;
		printf("Opcount=%d", count);
		return n;
	}
	if(n==0){
		count++;
		printf("Opcount=%d", count);
		return m;
	}
while(t>1)
{

	count++;
	if(m%t==0 && n%t==0)
        break;
    t--;

}
printf("opcount %d", count);
return t;


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
