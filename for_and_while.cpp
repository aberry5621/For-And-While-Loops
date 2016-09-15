#include <iostream>
using namespace std;

int main() {

    cout << "For and While Loops!\n";
    
    for (int i = 0; i < 117; i = i + 9) {
        cout << i << endl;
    }
    
    int i = 0;
    
    while (i < 117) {
        cout << i << endl;
        i = i + 9;
    }
    return 0;
}
