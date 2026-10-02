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

//recursive Maximum annd Minimum in array
int findMax(int& a, int& b){
    return a > b ? a : b;
}
int findMin(int& a, int& b){
    return a < b ? a : b;
}
void findMaxMin(int* a, int n, int& maxVal, int& minVal){
    if (n <= 0){
        maxVal = a[0];
        minVal = a[0];
        return;
    }
    findMaxMin(a, n-1, maxVal, minVal);

    maxVal = findMax(maxVal, a[n-1]);
    minVal = findMin(minVal, a[n-1]);
}

//reverse String and Number
void printReverse(int n){
    if (n < 10) cout << n;
    else{
        cout << n%10 << " ";
        printReverse(n/10);
    }
}
void printReverseString (string s, int n){
    if (n <= 0) cout << s[0];
    else {
        cout << s[n] << " ";
        printReverseString(s, n-1);
    }
}

//palindrome string : cho cái chạy đầu cái chạy cuối
// và khi left >= right sẽ thoát giải phóng bộ nhớ về r
bool isPal(string s, int left, int right){
    if (left >= right) return true;
    if (s[left] != s[right]) return false;
    return isPal(s, left+1, right-1);

}