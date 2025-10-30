#include <iostream>
using namespace std;

int main() {

    char letter;
    cout <<"enter a letter : ";
    cin >> letter;
    if(letter>='a'&&letter<='z'){
        cout<<"its smalls";
    }else{
        cout<< "its capitals";
    }

    return 0;
}