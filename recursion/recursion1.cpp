#include <iostream>
using namespace std;

void run(){
    if(count==5)return;
    cout << "yrfan ashraf";
    count ++;
    run();
}
int count = 0;

int main() {

    run();

    cout << "end" << endl;
    return 0;
}