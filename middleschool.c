#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int* sieve(int n) // finds all prime numbers
{
    int i;
    int *prime;
    prime=(int*)malloc(sizeof(int)*n);
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
    //int count=0;
    for(i=2; i<n; i++)
    {
        if(prime[i]!=0){
            printf("%d\n", prime[i]);
            //count++;
        }
    }
    //printf("count=%d", count);
    return prime;


}
int middlegcd(int a, int b)
{
    int *pa, *pb;
    pa=sieve(a);
    pb=sieve(b);
    int gcd=1;
    for(int i=2; i<a, pa[i]!=0, pb[i]!=0; i++)
    {
        if(a%pa[i]==0 && b%pb[i]==0)
        {
            gcd=gcd*pa[i];
            a=a/pa[i];
            b=b/pa[i];

        }

    }
    return gcd;

}
void main()
{
    printf("%d", middlegcd(60, 24));
}
