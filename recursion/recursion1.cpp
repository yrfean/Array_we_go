#include <iostream>
using namespace std;

void prob1(int i,int n){
    if(i>n)return;
    cout << "yrfan ashraf"<<endl;
    prob1(i+1,n);
}

void prob2(int i,int m){
    if(i>m)return;
    cout <<i<<" ";
    prob2(i+1,m);
}

void prob3(int i){
    if(i<0)return;
    cout << i<<" ";
    prob3(i-1);
}



int main() {
    // prob 1
    // int n ;
    // cout << "how many times u want to out?"<< endl;
    // cin >> n;
    // prob1(1,n);


    // prob 2
    prob2(1,5);

    // prob 3
    // prob3(5);

    // Backtracking:
    // bruh backtracking is just letting it print after all functiosn are called its coming back-
    // to erase all functions


    return 0;
}