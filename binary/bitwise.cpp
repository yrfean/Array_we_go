#include <iostream>
using namespace std;

// Check if n is power of 2
void fun(int n){
    if(n>0 && (n & n-1)==0){
        cout<< "true";
    }else{
        cout << "false";
    }
    int arr[3] = {1,2,3};
    // for(int i =1;i<=3;i++){
    //     cout << arr[i]^arr;
    // }
    // cout << arr.size();
}

int main() {
    fun(4);
    return 0;
}