#include <iostream>
using namespace std;

void para(int i,int n){
    if(i==0){
        cout << n;
        return;
    }
    para(i-1,n+i);
}

int fun(int n){
    if(n==0){
        return n;
    }
    return n+ fun(n-1);
}

void paraf(int i,int n){
    if(i==0){
        cout << n;
        return;
    }
    paraf(i-1,n*i);
}

int funf(int n){
    if(n==1){
        return n;
    }
    return n* funf(n-1);
}

int main() {
    // SUM OF FIRST N NUMBERS:
    // para way:
    // para(5,0);

    // fuinctional way:

    // cout << fun(5);

    // Factorial :
    // para way:
    // paraf(5,1);

    // fun way:
    cout << funf(5);
    return 0;
}