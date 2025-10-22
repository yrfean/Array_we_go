#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Please, Enter ur age bruh:";
    cin >>age;
    cout<<"Your age is->"<<age<<endl;

    return 0;
}

// NOTES:


// - Containers to store data
// Var name rules are same as js rules
// variables are identifiers


// 🚨IMPORTANT ->

//   [computer can only under binary codes (0/1)
//   --1/0 -> bit (smallest unit of data)
//   --8 bits -> byte
//   use sizeof(variable) to check how many bytes that var takes]


// DATATYPES
// (Premetive)--->

// 1. INT:
//  -can take upto 4 bytes of memory (more than that will cause overflow, so use long long or something for those)

// 2. CHAR
//   -takes upto 1 bytes

// 3. FLOAT
//   -4 bytes

// 4. BOOL
//   -1 bytes

// 5. DOUBLE
//   -8 bytes, can use more precision than float and more accurate!



// TYPECASTING
// -conversion of types one to another

// Conversion and casting

// 1.conversion:
// (implicit) compiler will do on its own, like small type to big type, easy converts like that.
            // eg: imagine we saved 3.14 as float then compiler can convert its type to double easily
            //     cause its small->big (4 bytes->8 bytes).
            // char -> int (easy)
            // but imagine we did this:
            // char grade = 'A';
            // int mark = grade ;
            //  then output will be 65!  [ASCII value of A]🚀


// 2. type casting
// (eplicit) We developers do it ourselves even if they allow it or not
//            usually use it for converting big to small types
//           we add casting to datype infront of var like this : (int)floatValue
        // eg: float bigPrice = 100.99;
        //     int smallPrice = (int)bigPrice;
        //     output will be [100] not 101 because its cpp not fcking MATH
