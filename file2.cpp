#include <iostream>
using namespace std;

int main(){ 
    string word,password = "Mohammed464734.";
    int attempts = 0;

    while(attempts < 3){
        attempts++;

        cout<<"Enter password to login: ";
        getline(cin, word);

        if(word == password){
            cout<<"Succesfully logged in."<<endl;
            break;
        }
        
        cout << "Wrong password, try again." << endl;
        cout << "Remaining attempts: "<<3-attempts << endl << endl;
    }

    return 0; 
}