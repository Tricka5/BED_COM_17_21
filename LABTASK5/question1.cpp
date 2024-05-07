#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

   
    int daysBeforeExpiration = rand() % 12; 
    
    if (daysBeforeExpiration == 0) {
        cout << "Your subscription has expired."<< endl;
    } else if (daysBeforeExpiration <= 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    } else if (daysBeforeExpiration <= 5) {
        cout << "Your subscription expires in " << daysBeforeExpiration << " days." << endl;
        cout << "Renew now and save 10%!" << endl;
    } else if (daysBeforeExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
