#include <iostream>
using namespace std;


int reverseArray(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout << arr[1];
}

int main() {
    // We are changing the original array-not new reversed array

    int arr[]= {4,55,7,9,4};

     reverseArray(arr,5);
    return 0;
}