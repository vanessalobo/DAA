#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void sieve(int n) // finds all prime numbers
{
    int i;
    int prime[n];
    for(i=2; i<n; i++)
        prime[i]=i;

    int p=2;
    for(i=2; i<n; i++)
    {
        for(int p=2; p<=sqrt(i); p++){
        if(prime[i]%p==0)
        {
            prime[i]=0;

        }

        }
    }
    int count=0;
    for(i=2; i<n; i++)
    {
        if(prime[i]!=0){
            printf("%d\n", prime[i]);
            count++;
        }
    }
    printf("count=%d", count);


}
void main()
{
    sieve(10);
    sieve(100);
}
