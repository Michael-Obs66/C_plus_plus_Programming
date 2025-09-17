#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Write to file
    ofstream outfile("example.txt");
    outfile << "This is a test." << endl;
    outfile.close();

    // Read from file
    ifstream infile("example.txt");
    string line;
    while(getline(infile, line)){
        cout << "Read: " << line << endl;
    }
    infile.close();

    return 0;
}
