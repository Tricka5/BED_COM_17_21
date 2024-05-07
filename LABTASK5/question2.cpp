#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   
    srand(static_cast<unsigned int>(time(0)));

    
    int daysBeforeExpiration = rand() % 12; 

    
    switch (daysBeforeExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysBeforeExpiration << " days." << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
            break;
    }

    return 0;
}
