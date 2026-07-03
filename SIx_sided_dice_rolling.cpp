#include <iostream>
#include <random>
#include <map>
using namespace std;

int mian(){
    //seeding engine using a non-determinant source
    random_device rd;
    mt19937 engine(rd());
    uniform_int_distribution<int> distrib(1, 6);

    map<int, int> counts;

    for(int i = 0; i < 10000; ++i){
        counts[distrib(engine)]++;
    }

    cout<<"Simulating 10,000 die rolls (1-6): "<<endl;

    for(auto const& [roll, count] : counts){
        cout<<"Roll "<<roll<<": "<<count<<" times"<<endl;
    }

    int singleRoll = distrib(engine);

    cout << "\nAnother single roll: " << singleRoll <<endl;

    return 0;
}