#include <iostream>
using namespace std;

int linearSearch(int arr[],int target){
    for(int i= 0;i<4;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main() {
    // ITS EASY PEASY
    // just use for-loop and if conditions for checking if a terget is in an array
    // if yes -> return its index value
    // if not -> return -1

    int arr[] = {2,4,9,44};
    int target = -4;
    cout << linearSearch(arr,target);

    // cout << "FUck" << endl;
    return 0;
}