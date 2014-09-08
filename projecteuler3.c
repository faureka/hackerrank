#include <stdio.h>
#include <stdlib.h>
unsigned long long largest_prime_factor(unsigned long long n) {
	
	unsigned long long	largest_prime = 1;
	unsigned long long	p = 3;
	unsigned long long	div = n;
	
	
	while (div % 2 == 0 ){
		largest_prime = 2;
		div = div/2;
	}
	
	while (div != 1){
		while (div % p == 0){
			largest_prime = p;
			div = div/p;
		}
		p = p + 2;
		}
	return largest_prime;
	}
	
	
int main(void) {
	int t,i;
	unsigned long long largest_factor;
	unsigned long long number;
	scanf("%d",&t);
	for (i = 0; i< t; i++){
		scanf("%llu",&number);
		largest_factor = largest_prime_factor(number);
		printf("%llu\n",largest_factor);
	}
	return 0;
}
