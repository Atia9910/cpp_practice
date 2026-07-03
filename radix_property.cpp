#include <iostream>
#include <limits>
using namespace std;

int main(){
    
    cout << "\t\t---- Radix Property ----" <<endl;
    cout << "Int radix: " << numeric_limits<int>::radix <<endl;
    cout << "Double radix: "<<numeric_limits<double>::radix<<endl;

    return 0;
}