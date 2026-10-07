#include "main.h"

int main(){
    int n;
    cout << "Enter the size of n: ";
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // cout << maxNum(arr, n) << "\n";
    // find3MaxEle(arr, n);
    // cout << secondLargest(arr, n);
    // cout << findKthEle(arr, n);
    // findNumberofArr(arr, n);
    // findNextGreat(arr, n);
    // wave_sort(arr, n);
    // cout << checkSomeEqualLargest(arr, n);
    countPair(arr, n , 12);
    
    return 0;
}