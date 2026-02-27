#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string fStr, aStr;
    float fiyat;
    int adet;

    cout << "Fiyat girin: ";
    getline(cin, fStr);

    cout << "Adet girin: ";
    getline(cin, aStr);

    stringstream ss1(fStr);
    ss1 >> fiyat;

    stringstream ss2(aStr);
    ss2 >> adet;

    float sonuc = fiyat * adet;

    cout << "Toplam: " << sonuc << endl;

    return 0;
}