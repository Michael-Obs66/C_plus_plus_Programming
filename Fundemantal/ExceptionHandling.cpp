#include <iostream>
using namespace std;

int main() {
    try {
        int x = 10;
        int y = 0;
        if(y == 0) throw runtime_error("Division by zero!");
        int z = x / y;
    } catch (const exception &e) {
        cout << "Caught an exception: " << e.what() << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}
