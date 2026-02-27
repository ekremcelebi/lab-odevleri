#include <iostream>
#include <string>

using namespace std;

int main() {
    string isim;

    cout << "Isminizi girin: ";
    getline(cin, isim);

    cout << "Karakter sayisi: " << isim.length() << endl;

    return 0;
}