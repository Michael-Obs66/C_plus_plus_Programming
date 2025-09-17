#include <iostream>
using namespace std;

int add(int x, int y){
    return x + y;
}

int main() {
    int result = add(7, 3);
    cout << "7 + 3 = " << result << endl;
    return 0;
}
