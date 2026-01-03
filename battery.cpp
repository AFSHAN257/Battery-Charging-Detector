#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "\n\n\t\t\t\033[36m Welcome to Battery Charging Detector " ;
    cout << "\n\n\n\t\t\t\033[31mEnter the charging time in minutes:\033[0m ";
    cin >> t;

    int b = 0;

    for(int i = 2; i <= t; i += 2)
     {
        b += 1;
        if(b >= 100)
        { 
            b = 100;
        
        } ;
     }
       if(t < 2)
     {
        b = 0;
        } ;

    cout << "\n\t\t\t\033[33mBattery percentage after " << t << " minutes is: \033[0m" << b << "%\n" << endl;

    if(b < 100) {
        int p = 100 - b;   
        int r = p * 2;   
        cout << "\t\t\t\033[32mTime remaining for full charge: \033[0m" << r << " minutes" << endl;
    } else {
        cout << "\n\t\t\t\033[32mBattery is fully charged!\n\n" << endl;
    }

    return 0;
}
