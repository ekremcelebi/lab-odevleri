#include <iostream>
#include <string>

using namespace std;

int main() {
    string ad;
    int yas;
    float boy;

    cout << "Adinizi girin: ";
    getline(cin, ad);

    cout << "Yasinizi girin: ";
    cin >> yas;

    cout << "Boyunuzu girin: ";
    cin >> boy;

    cout << endl;
    cout << "Isim: " << ad << endl;
    cout << "Yas: " << yas << endl;
    cout << "Boy: " << boy << endl;

    return 0;
}