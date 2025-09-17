#include <iostream>
#include <openssl/sha.h>  // Requires OpenSSL library
#include <iomanip>
using namespace std;

int main() {
    string text = "password123";
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)text.c_str(), text.size(), hash);

    cout << "SHA-256 hash: ";
    for(int i=0; i<SHA256_DIGEST_LENGTH; i++)
        cout << hex << setw(2) << setfill('0') << (int)hash[i];
    cout << endl;

    return 0;
}
