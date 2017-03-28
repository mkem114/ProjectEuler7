#include <stdio.h>

int main() {
    int numPrimes = 10001;
    int primes[10001] = {2};
    int countPrimes = 1;

    for (int candidate = 3; countPrimes < numPrimes; candidate += 2) {
        int candidateIsPrime = 1;

        for (int i = 0; i < countPrimes; i++) {
            if (candidate % primes[i] == 0) {
                candidateIsPrime = 0;
            }
        }

        if (candidateIsPrime){
            primes[countPrimes++] = candidate;
        }
    }

    printf("%d", primes[numPrimes - 1 ]);
    return 0;
}