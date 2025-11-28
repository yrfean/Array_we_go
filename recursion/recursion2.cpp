#include <iostream>
using namespace std;

int sum(int i,int n){
    if(i<0)return n;
    return sum(i-1,n+i);
}

int main() {
    // SUM OF FIRST N NUMBERS:
    cout << sum(5,0);
    return 0;
}