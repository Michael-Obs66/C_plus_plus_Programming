#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Array example
    int numbers[5] = {1,2,3,4,5};
    for(int n : numbers){
        cout << "Number: " << n << endl;
    }

    // Vector example
    vector<string> users;
    users.push_back("Alice");
    users.push_back("Bob");
    for(string user : users){
        cout << "User: " << user << endl;
    }

    return 0;
}
