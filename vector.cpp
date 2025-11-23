#include <iostream>
#include <vector>
using namespace std;

int main() {

//     vector<int> vec={1,2,3,4,5};
// int x =10;
// x = 20;
// cout <<x<<endl ;
//     vec.push_back(6);
//     vec.pop_back();
//     cout << vec.back()<<endl;
//     cout << vec.front()<<endl;
//     cout << vec.at(4)<<endl;
//     cout << "size - "<< vec.size()<<endl;
//     for (int i : vec){
//         cout << i;
//     }

// Strivers A2Z DSA:

vector<int> v;

// v.push_back(10);
// v.emplace_back(20);

// vector <pair <int,int>> v;

// v.push_back({1,2});
// v.emplace_back(1,2);


// cout << "vector:"<<endl;
// for(auto i:v){
//     cout << i<<" ";
// }

// iterators with vectors:

v.push_back(10);
v.push_back(20);
v.push_back(30);
vector<int> ::iterator it=v.begin();
// cout<<*it;

// for(vector<int>::iterator it= v.begin();it!=v.end();it++){
//     cout << *it<<" ";
// }
// or by just using auto
// for(auto it= v.begin();it!=v.end();it++){
//     cout << *it<<" ";
// }

// more vec functions


    return 0;
}