#include <iostream>
using namespace std;

int main() {
// NOTES:

// 1.while loop

// print nums till the num!

// cout << "enter a number : ";
// int num;
// int i =1 ;
// cin >>num;

// while(i<=num){
//     cout << i << "\n";
//     i++;
// }

// 2.for loop

// sum of numbers n

// int n;
// cout << "Give the n bruh: ";
// cin >> n;
// int sum= 0;
// for(int i=1;i<=n;i++){
//     sum+=i;
// }
// cout <<"sum is : "<< sum;


// Sum of odd numbers from 1 to n

// int n;
// cout << "give a number: ";
// cin >> n;
// int sum = 0;
// for(int i =0;i<=n;i++){
//     if(i%2!=0){
//         sum+=i;
//     }
// }
// cout << "Sum is = "<<sum;


// PATTERN PRINTING
int x = 10;

for(int i=x;i>=0;i--){
    for(int o=0;o<=i;o++){
        cout << "*";
    }
    cout <<"\n";
}


    return 0;
}



