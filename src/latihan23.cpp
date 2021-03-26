#include <iostream>
using namespace std;

double hit_luas(double panjang, double lebar){
    double hasil = panjang * lebar;
    return hasil;
}

double hit_keliling(double panjang, double lebar){
    double hasil = 2 * (panjang * lebar);
    return hasil;
}

void tampilkan_hasil(double panjang, double lebar){
    double keli,luas;

    luas = hit_luas(panjang, lebar);
    keli = hit_keliling(panjang, lebar);

    cout << "luasnya Adalah " << luas << endl;
    cout << "kelilingnya adalah " << keli << endl;
}

int main()
{
    double panjang,lebar;

    cout << "masukan panjang : ";
    cin >> panjang;

    cout << "masukan lebar : ";
    cin >> lebar;

    tampilkan_hasil(panjang,lebar);
    
    return 0;
}