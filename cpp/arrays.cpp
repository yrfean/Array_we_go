#include <iostream>
using namespace std;

void doubleArr(int arr[]){
    for(int i =0;i<3;i++){
        arr[i]=  arr[i]*2;
    }
}

int main() {
    // int arr[5] = {10,2,23,43,34};
    // int size = 5;

    // for(int i=0;i<size;i++){
    //     cin >> arr[i];
    // }
    // for(int i=0;i<size;i++){
    //     cout << arr[i]<<endl;
    // }

    // FIND SMALLEST IN ARRAY:
    // int smallest = INT16_MAX;
    // int largest = INT16_MIN;
    // for (int i=0;i<size;i++){
    //     // if(arr[i]<smallest){
    //     //     smallest =arr[i];
    //     // }
    //     smallest = min(arr[i],smallest);
    //     largest = max(arr[i],largest);    }
    // cout << "Smallest: " << smallest ;
    // cout <<endl;
    // cout << "Largest: " << largest;

    // PASS BY REFERNCE:
    // ~it means passing address instead of value into the passing function as args,
    // ~~so they pass address of real value,not just value...so when they change-
    // value in that address--our original val also gets changed

    int arr[] = {1,2,3};
    // doubleArr(arr);
    cout << arr[1];



    return 0;
}