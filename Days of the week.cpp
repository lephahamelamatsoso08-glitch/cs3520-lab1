#include <iostream>
using namespace std;

int main() {
    string days[] = {
        "Mantaha", "Labobeli", "Laboraro", "Labone", 
        "Labohlano", "Moqebelo", "Sontaha"
    };
    
    int dayNumber;
    cout << "Enter a number (1-7): ";
    cin >> dayNumber;
    
    if (dayNumber < 1 || dayNumber > 7) {
        cout << "Error: Invalid input" << endl;
    } else {
        cout << days[dayNumber - 1] << endl;
    }
    
    return 0;
}
