#include <iostream>
#include <thread> // Required for std::this_thread::sleep_for
#include <chrono> // Required for std::chrono::seconds

using namespace std;

int main(){
    float pressure = 0.0f; 

    while(pressure < 500){
        cout << "Enter boiler pressure: ";
        cin >> pressure;
        cout << endl;

        if (pressure < 500) {
            cout << "Boiler is safe. Continue operations.\n";
            cout << "Checking again in 4 seconds...\n\n";
            
        // This pauses the execution of the program for exactly 4 seconds
            this_thread::sleep_for(chrono::seconds(4));
        }
    }
    
    cout << "Boiler pressure is critical. Abort operations!\n";
    cout << "Evacuate! I repeat, Evacuate!!!\n";

    this_thread::sleep_for(chrono::seconds(2));

    return 0;
}
