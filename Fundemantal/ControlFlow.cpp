#include <iostream>
using namespace std;

int main() {
    int x = 10;

    if(x > 5) {
        cout << "x is greater than 5" << endl;
    } else {
        cout << "x is 5 or less" << endl;
    }

    // Loop example
    for(int i=0; i<5; i++){
        cout << "i = " << i << endl;
    }

    int day = 3;
    switch(day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        default: cout << "Other day" << endl;
    }

    return 0;
}
