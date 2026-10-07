#include "main.h"
//find the largest number in arr
int maxNum(int *a, int n){
    int max = a[0];
    for (int i = 0; i < n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    return max;
}
//
void find3MaxEle(int* a, int n){
    int first = 0;
    int second = 0;
    int third = 0;
    for(int i = 0; i < n; i++){
        if( first < a[i]) {
            third = second;
            second = first;
            first = a[i];
        }
        else if (second < a[i]){
            third = second;
            second = a[i];
        }
        else if (third < a[i]){
            third = a[i];
        }
    }
    cout << "First: " << first << "\n" ;
    cout << "Second: " << second << "\n" ; 
    cout << "Third " << third << "\n" ; 
}

//second largest in array
int secondLargest(int* a, int n){
    int second = 0;
    int first = 0;
    for(int i = 0; i < n; i++){
        if (first < a[i]){
            second = first;
            first = a[i];
        }
        else if (second < a[i]){
            second = a[i];
        }
    }
    return second;
}

//find kth largest element in array
int findKthEle(int* a, int n){
    int k;
    cout << "Enter the kth largest element: ";
    cin >> k;
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return a[k-1];  
}
// find #number of largest number in array
void findNumberofArr(int* a, int n){
    int k;
    cout << "Enter the kth largest element: ";
    cin >> k;
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i = k - 1; i < n; i++){
        cout << a[i];
    }
}

//second smallest in array
int secondSmallest(int* a, int n){
    int first = a[0];
    int second = a[1]; 
    for(int i = 0; i < n; i++){
        if (first > a[i]){
            second = first;
            first = a[i];
        }
        else if (second > a[i]){
            second = a[i];
        }
    }
    return second;
}

// find elements with at least 2 significant neighbors
void findGreaterEle(int* a, int n){
    int first = a[0];
    int second = a[1];
    for (int i = 0; i < n ; i++){
        if( first < a[i]){
            second = first;
            first = a[i];
        }
        else if(second < a[i]){
            second = a[i];
        }
    }
    for (int i = 0; i < n; i++){
        if(a[i] < second){// chỉ cần bé hơn second max là được
            cout << a[i] << " ";
        }
    }
}

//find most frequent in an array
int findMostFreq(int* a, int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]= temp;
            }
        }
    }
    int max_count = 0;
    int count = 1;
    int res = a[0];
    for (int i = 0; i < n; i++){
        // set count = 1 để so sánh với giá trị trước và tăng 1 nếu có sự giống nhau
        if(a[i] == a[i-1]){ 
            count++;
        }
        else{
            count = 1;// reset lại biến count nếu có sự khác nhau
        }
        // cập nhật số count vào max_count và cập nhật giá trị của res tại vị trí i
        if(max_count < count){
            max_count = count;
            res = a[i];
        }
    }
    return res;
}

//Next greater element for every array element
void findNextGreat(int* a , int n){
    for (int i = 0; i < n; i++){
        int next = -1;
        for(int j = i+1; j < n; j++){
            if(a[j]> a[i]){
                next = a[j];
                break;
            }
        }
        cout << a[i] << ": " << next << "\n";
    }
}

//sort waveform
void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}
void wave_sort(int* a, int n){
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
    for (int i = 0; i < n-1; i += 2){
        swap(a[i], a[i+1]);
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

//find third largest string in array 
int thirdLargest(int* a, int n){
    int third = a[2];
    int second = a[1];
    int first = a[0];
    for(int i = 0 ; i < n; i++){
        if (first < a[i]) {
            third = second;
            second = first;
            first = a[i];
        }
        else if (second < a[i]) {
            third = second;
            second = a[i];
        }
        else if (third < a[i])  {
            third = a[i];
            return third;
        }
    }
    return third;
}

// find second lowest and highest number
int findSecondLowest (int*a, int n){
    int secondLowest = a[1];
    int firstLowest = a[0];
    for(int i = 0; i < n; i++){
        if ( firstLowest > a[i]){
            secondLowest = firstLowest;
            firstLowest = a[i];
        }
        else if ( secondLowest > a[i]){
            secondLowest = a[i];
            return secondLowest;
        }
    }
    return secondLowest;
}
int largest(int*a, int n){
    if ( n == 1) return a[0];
    int max = largest(a, n-1);
    return (max < a[n-1]) ? a[n-1] : max; 
}
void find2ndlowest1stLargest(int* a, int n){
    cout <<"2ndLowest is: "<<findSecondLowest(a, n) << "\n";
    cout <<"Largest is: " <<largest(a, n);
}

//Arrange the numbers so that sum of some equals to largest number
bool checkSomeEqualLargest(int* a, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if( a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    int sum = 0;
    int max = a[n-1];
    for (int i = 0; i < n-1; i++){
        sum += a[i];
    }
    if (sum == max) return true;
    return false;
}

// find the number of pairs equals specified number
void countPair(int* a, int n, int value){
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        for ( int j = i+1; j < n; j++){
            sum = a[i]+a[j];
            if(sum == value){
                cout << a[i] << ", " << a[j] << "\n";
                count++;
            }
        }
    }
    cout << "count: " << count;
}

//Distinct elements in array
void printDistinct(int* a, int n){
    for (int i = 0; i < n; i++){
        int j;
        for (j = 0; j < n; j++){
            if (a[i] == a[j]) break;
        }
        if (i == j){
            cout << a[i] << " ";
        }
    }
}