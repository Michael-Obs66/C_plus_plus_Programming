#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    int sum = a + b;
    int diff = a - b;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;

    bool flag = (a > b);
    cout << "Is a greater than b? " << flag << endl;
    return 0;
}
