#include <iostream>
using namespace std;

int main() {
    int litres;
    cout << "Enter quantity of grains in litres: ";
    cin >> litres;
    
    int makokopo = litres / 20;
    int remainder = litres % 20;
    
    cout << "Number of makokopo (20L): " << makokopo << endl;
    cout << "Remaining litres: " << remainder << endl;
    
    return 0;
}
