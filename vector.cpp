#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec={1,2,3,4,5};
int x =10;
x = 20;
cout <<x<<endl ;
    vec.push_back(6);
    vec.pop_back();
    cout << vec.back()<<endl;
    cout << vec.front()<<endl;
    cout << vec.at(4)<<endl;
    cout << "size - "<< vec.size()<<endl;
    for (int i : vec){
        cout << i;
    }


    return 0;
}