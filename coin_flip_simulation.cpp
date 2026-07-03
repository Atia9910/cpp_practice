#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd;
    mt19937 engine(rd());
    bernoulli_distribution coin_flip(0.7);

    //Bernoulli distribution with 70% probability of true (Heads)
    cout<<endl;
    cout << "Simulating 10 biased coin flips (70% chance of Heads): "<<endl;
    
    int heads_count = 0;

    for(int i = 0; i < 10; ++i){

        bool result = coin_flip(engine);

        if(result){
            cout<<"Flip "<< i + 1 << ": Heads" <<endl;
            heads_count++;
        }
        else{
            cout << "Flip " << i + 1 << ": Tails" <<endl;
        }
    }
    cout << "\nTotal Heads: "<< heads_count<<" out of 10"<<endl;

    return 0;
}