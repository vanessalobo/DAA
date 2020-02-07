#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sieveOf(int n, int* prime){
	for(int p = 2; p*p <= n; p++){
		if(prime[p] == 1){
			for(int i = p*p; i <= n; i += p){
				prime[i] = 0;
			}
		}
	}
}

int gcd(int x, int y){
	int n = x >= y ? x : y;
	int prime[10000];
	for(int i = 0 ; i < 10000;i++)
		prime[i] = 1;
	sieveOf(n, prime);
	int ans = 1;

	int xfac[x+1];
	for(int i = 0 ; i < x+1;i++)
		xfac[i] = 0;

	int yfac[y+1];
	for(int i = 0 ; i < y+1;i++)
		yfac[i] = 0;

	for(int i = 2; i <= x; i++){
		if(prime[i] == 1){
			while(x > 0){
				if(x % i == 0){
					x = x / i;
					xfac[i]++;
				} else {
					break;
				}
			}
		}
	}



	for(int i = 2; i <= y; i++){
		if(prime[i] == 1){
			while(y > 0){
				if(y % i == 0){
					y = y / i;
					yfac[i]++;
				} else {
					break;
				}
			}
		}
	}

	for(int i = 2; i <= n; i++){
		if(xfac[i] > 0 && yfac[i] > 0){
			if(xfac[i] <= yfac[i])
				ans *= (int)pow(i, xfac[i]);
			else
				ans *= (int)pow(i, yfac[i]);
		}
	}
	return ans;
}

int main() {
	printf("%d\n", gcd(60,24));
	return 0;
}
