#include <iostream>
using namespace std;


int sum(double a, double b){
   return a+b;
}

// CACULATE n FACTORIAL?
int findFactorial(int n){
    int fac = 1;
    for(int i=1;i<=n;i++){
    fac *=i;
    }
    return fac;
}

int main() {

   cout << findFactorial(5);


    return 0;
}