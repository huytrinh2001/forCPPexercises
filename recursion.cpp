#include "main.h"

// sum of array
int sumArray(int*a, int n){
    if (n <= 0) return 0;
    return a[n-1] + sumArray(a, n - 1 );
}

//cal factorial
int factorial(int k){
    if(k <= 0) return 1;
    return k * factorial(k-1);
}

//fibonacci 
int fibo(int k){
    if (k == 0) return 0;
    else if (k == 1) return 1;
    else 
        return fibo(k-1) + fibo(k-2);
}

//sum of digits
int sumDigit(int n){
    if (n/10 == 0) return n;
    return n%10 + sumDigit(n/10);
}