#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(10000, 99999);
    uniform_int_distribution<int> distribute(0, 17);

    int choice = distribute(gen);
    string username;

    string password[] = {"Hollowknight", "Hornet","Belleater",
                         "Bellbeast", "Merchantshakra",
                         "Silksong", "Pharloom", "Grindle",
                         "Blastedsteps","Mothersilk","Ozarks",
                         "HighHalls","TheMarrow","HuntingGrounds",
                         "GrandJudge","Needolin","Swiftsteps",
                         "LegEater",};
    
    cout << "       ========PASSWORD GENERATOR========"<<endl<<endl;
    
    cout << "Enter prefered username (only letters, numbers & '_'): ";
    cin >> username;

    cout <<"Chosen Username:  "<<username<<endl;
    cout << "Generated password: "<< password[choice]<<"-"<<distrib(gen)<<endl<<endl;
    cout<<"(Please keep the user info private and safe)"<<endl;

    return 0;
}



// #include <iostream>
// #include <random>
// using namespace std;

// int main(){
//     int choice;

//     random_device rd;
//     mt19937 gen(rd());
//     uniform_int_distribution<int> distrib(1000, 9999);

//     string password[] = {"Hollowknight", "Hornet","Belleater",
//                          "Bellbeast", "Merchantshakra",
//                          "Silksong", "Pharloom", "Grindle",
//                          "Blastedsteps","Mothersilk","Ozarks",
//                          "HighHalls","TheMarrow","HuntingGrounds",
//                          "GrandJudge","Needolin","Swiftsteps",
//                          "LegEater",};
    
//     cout << "        --------PASSWORD GENERATOR--------"<<endl<<endl;
//     cout << "Enter a number (0 - 17): ";
//     cin >> choice;

//     if(choice < 0 || choice > 17){
//         cout << "Invalid input";
//         return 1;
//     }

//     cout << "Generated password: "
//          << password[choice]<<"-"<<distrib(gen)<<endl<<endl;

//     return 0;
// }
