#include <iostream>
#include <string>
using namespace std;

int main(){
    string studentname[10], indexnumber[10];
    int count = 0;

    while (count < 10){
        cout<<"Enter student name: ";
        getline(cin, studentname[count]);

        if(studentname[count]=="stop"){break;}

        cout<<"Enter index No.: ";
        getline(cin, indexnumber[count]);
        cout<<endl;

        count++;
    }

    cout<<endl;
    cout<<endl;

    for(int i = 0; i < count; i++){
        cout<<"Student Name: "<<studentname[i]<<endl;
        cout<<"Index N0.: "<<indexnumber[i]<<endl;
    }

    return 0;
}