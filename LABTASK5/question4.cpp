#include <iostream>
#include <limits> 

using namespace std;
int main() {
    int InputNumber;

    while (true) {
     cout << "Enter an integer value between 5 and 10: ";
        
        
        if (!(cin >> InputNumber)) {
           
         cout << "Invalid input. Please enter a valid integer." << endl;
           cin.clear();
                 cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        } else if (InputNumber < 5 || InputNumber > 10) {
           
         cout << "Sorry, you have entered an invalid number. Please try again." << endl;
        } else {
            
         cout << "Your input value (" << InputNumber << ") has been accepted." << endl;
            break;
               }
    }

    return 0;
}