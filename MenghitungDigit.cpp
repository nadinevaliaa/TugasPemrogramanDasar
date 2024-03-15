#include <iostream>
using namespace std;

int main() {
    int angka, jumlah_digit = 0;
    cout << "Masukkan sebuah bilangan: ";
    cin >> angka;

    while (angka > 0) {
        angka = angka / 10;
        jumlah_digit++;
    }

    cout << "Jumlah digit dari bilangan tersebut adalah " << jumlah_digit << endl;

    return 0;
}