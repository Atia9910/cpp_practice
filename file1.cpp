#include <iostream>
#include <string>
using namespace std;

int main(){
    string answer, computerChoice = "rock";
    int count = 0;

    cout<<"\t\t-----ROCK, PAPER, SCISSORS-----\n";
    cout<<"";
    cout<<endl;

    while(true){
        count++;
        cout << "Enter choice (rock, paper, scissors): ";
        getline(cin, answer);

        if(answer == "quit" || answer == "q") break;

        if(answer == "scissors"){
            cout << "You lose. Better luck next time."<<endl;
        }

        if(answer == computerChoice){
            cout << "It's a tie. It's a fucking tie."<<endl;
        }

        if(answer == "paper"){
            cout<<"Congratulations, you bested the computer"<<endl;
            cout<<"Number of tries: "<<count; break;
        }
    }

    return 0;
}