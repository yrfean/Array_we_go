#include <iostream>
using namespace std;

// Check if n is power of 2
void fun(int n){
    if(n>0 && (n & n-1)==0){
        cout<< "true";
    }else{
        cout << "false";
    }
}

int main() {
    fun(4);
    return 0;
}