#include <iostream>
#include <random>
#include <limits>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(1000000, 9999999);
    uniform_int_distribution<int> mtn(0, 5);
    uniform_int_distribution<int> telecel(0, 1);
    uniform_int_distribution<int> airteltigo(0, 3);

    int mtngh[] = {23353, 23359, 23355, 23324, 23354, 23325}, airtel_tigo[] = {23326, 23327, 23356, 23357}, telecelgh[] = {23320, 23350,};
    int preferred_ISP;

    cout<<"\t\t========FAKE PHONE NUMBER GENERATOR========\n"<<endl;

    while(true){
        cout<<"Enter prferred internet service provider(ISP): "<<endl;
        cout<<"1.MTN   2.Telecel   3.Airtel Tigo   4.Quit: ";
        cin>> preferred_ISP;

        if(preferred_ISP == 1){
            cout << "Generated number:  +"<<mtngh[mtn(gen)]<<distrib(gen)<<endl<<endl;
        }
        else if(preferred_ISP == 2){
            cout << "Generated number:  +"<<telecelgh[telecel(gen)]<<distrib(gen)<<endl<<endl;
        }
        else if(preferred_ISP == 3){
            cout << "Generated number:  +"<<airtel_tigo[airteltigo(gen)]<<distrib(gen)<<endl<<endl;
        }
        else if(preferred_ISP == 4){
            cout<<endl;
            cout<<"Salut mon ami(e), catch ya later.";
            break;
        }
        else{
            cout<<"Invalid input. Please enter a valid option."<<endl<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    return 0;
}

