#include <iostream>
#include <string>
using namespace std;

int main(){
    string test = "abcdefghi";

    cout<< "size: "<< test.size() << endl;

    cout<< "length: "<< test.length() << endl;
    cout<< "test[1]: "<< test[1]<< endl;

    cout<< "test[4]: "<< test.at(4)<< endl;

    test = test + "jklmnop";
    test.append("qrstuv");
    cout<< "length: "<< test.length() << endl;
    return 0;
}