#include <iostream>
using namespace std;

int main() {
    cout << "====================================== \n" << endl;
    cout << "=         FERRY YOGA PERKASA         = \n" << endl;
    cout << "====================================== \n" << endl;

    double panjang, lebar, keliling;

    cout << "Menghitung keliling persegi pangjang" << endl;

    cout << "Panjang : " << endl;
    cin >> panjang;

    cout << "Lebar : ";
    cin >> lebar;

    keliling = 2 * (panjang + lebar);

    cout << "Keliling = " << keliling << endl;

    return 0;
}
