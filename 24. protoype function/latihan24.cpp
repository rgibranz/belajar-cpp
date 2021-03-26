#include <iostream>
using namespace std;

//prototype fungsi
double hit_luas(double panjang, double lebar);
double hit_keliling(double panjang, double lebar);
void tampil(double panjang, double lebar);

int main()
{
    double panjang, lebar;

    cout << "masukan panjang : ";
    cin >> panjang;

    cout << "masukan lebar : ";
    cin >> lebar;

    tampil(panjang, lebar);

    return 0;
}

double hit_luas(double panjang, double lebar){
    double hasil = panjang * lebar;
    return hasil;
}

double hit_keliling(double panjang, double lebar){
    double hasil = 2 * (panjang * lebar);
    return hasil;
}

void tampil(double panjang, double lebar){
    double keli, luas;

    luas = hit_luas(panjang, lebar);
    keli = hit_keliling(panjang, lebar);

    cout << "luasnya Adalah " << luas << endl;
    cout << "kelilingnya adalah " << keli << endl;
}