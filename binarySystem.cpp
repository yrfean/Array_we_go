#include <iostream>
using namespace std;


// Decimal to binary
int findBin(int n){
   int res =0;
   int place = 1;
   while(n>0){
    int bit = n%2 ; //mod of 2
    res += bit*place;
    place *= 10;
    n/=2;
   }
    return res;
}

// Binary -> Decimal

int findDeci(int n){
    int res=0,pow=1; //cause 2^0 = 1
    while(n>0){
        int val = n%10; //mod of 10 to get last digit
        res  += val * pow;  //saving value
        n /= 10;  //drop last dig from n
        pow *= 2;  //icrease power to next level
    }
    return res;
}


int main() {
    cout <<findDeci(101010);
    return 0;
}