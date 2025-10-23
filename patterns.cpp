#include <iostream>
using namespace std;

int main() {

// PATTERNS:

// 1.square:

// int n = 5;

// with numbers ->
// 123
// 123
// 123

// for(int i=1;i<=n;i++){
//  for (int i=1;i<=n;i++){
//     cout <<i;
//  }
//  cout << "\n";
// }

// with chars ->

// ABC
// ABC
// ABC

// int n = 5;
// for (int i = 0;i<n;i++){
//     char cr = 'A';
//     for (int i =1;i<=n;i++){
//         cout << cr;
//         cr += 1;
//     }
//     cout << endl;
// }


// with continues number ->

// 123
// 456
// 789

// int n = 3;
// int count = 1;
// for (int r=1;r<=n;r++){

//     for(int c=1;c<=n;c++){
//         cout << count;
//         count ++;
//     }
//     cout << endl;
// }


// same in char->

// int n = 3;
// char cr = 'A';
// for (int r=1;r<=n;r++){
//     for(int c=1;c<=n;c++){
//         cout << cr;
//         cr ++;
//     }
//     cout << endl;
// }

// 2.TRAINGLE ->

// int num = 5;

// for (int i = 1;i<=num;i++){
//  for (int r = 1;r<=i;r++){
//     cout << "*";
//  }
//  cout << "\n";
// }

// printing ->
// 1
// 12
// 123
// 1234

// int num = 5;
// for (int i=1;i<=num;i++){
//     for(int r = 1;r<=i;r++){
//         cout << r;
//     }

//     cout << "\n";
// }

// now go oposite->
// 1
// 21
// 321

// int num = 4;

// for (int i=1;i<=num;i++){
//     for(int r = i;r>0;r--){
//         cout << r;
//     }
//     cout << endl;
// }


// Floyds triangle->

// int num = 4;
// int count = 1;

// for(int i= 1;i<=num;i++){
//     for (int j = 1; j <= i; j++){
//         cout <<count;
//         count ++;
//     }
//     cout <<endl;
// }

// IN chars->
// int num = 4;
// char cr = 'A';

// for(int i= 1;i<=num;i++){
//     for (int j = 1; j <= i; j++){
//         cout <<cr;
//         cr ++;
//     }
//     cout <<endl;
// }


// Inverted triangle pattern->

// int num = 4;

// for(int i =0;i<num;i++){
//     // space
//     for(int j = 0;j<i;j++){
//         cout <<" ";
//     }
//     // nums
//     for (int k= 0;k<num-i;k++){
//         cout << i+1;
//     }
//     cout << endl;
// }

//PYRAMID PATTERN ->

// int num = 4;
// int firstCol =1;
// for (int i = 0;i<num;i++){
//     // space
//     for (int s=0;s<num-i;s++){
//         cout << " ";
//     }
//     // first-number
//     for (int n=1;n<=i+1;n++){
//         cout << n;
//     }
//    //second-number
//    for (int n=i;n>0;n--){
//     cout << n;
//    }

//     cout << endl;
// }
// cout << "Hell yeah b*tchhh!";

// HOLLOW DIAMOND PATTERN ->

// int num  =4 ;

// for(int i=0;i<num;i++){
//     //space
//     for ()
// }

    return 0;
}