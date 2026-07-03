#include <iostream>
using namespace std;

int main(){
    string food[8];
    string temp;

    int size = sizeof(food)/sizeof(food[0]);

    for(int i = 0; i < size; i++){
        cout<< "Enter food item #"<< i+1 << "(Enetr 'q' to quit): ";
        getline(cin, temp);

        if(temp == "q"){
            break;
        }
        food[i] = temp;
    }

    cout<< "\nYou have entered the following food items: \n";
    for(int i = 0; i < size && !food[i].empty(); i++){
        cout<< food[i] << endl;
    }

    return 0;
}