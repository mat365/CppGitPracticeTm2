#include "pch.h"
#include "FindFibonacciGcd.h"

/* ‚±‚±‚ÉFindFibonacciGcd.h‚Å’è‹`‚µ‚½ŠÖ”‚ğÀ‘•‚·‚é@*/

uint32_t gcd(uint32_t a, uint32_t b) {

	if(b == 0)
		return a;
	else
		return gcd(b,a % b);
}

uint32_t fibonacci(uint32_t n) {

	if(n <= 1) {
		return n;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
}

uint32_t findFibonacciGcd(uint32_t n, uint32_t m) {

	uint32_t gcdResult = gcd(fibonacci(n),fibonacci(m));

	if(gcdResult == 1) {
        return 1;
    }

	uint32_t i = 0;
	while(fibonacci(i) != gcdResult) {
		i++;
	}

	return i;
}