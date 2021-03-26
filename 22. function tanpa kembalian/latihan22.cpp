#include <iostream>
using namespace std;

void cetak(string txt){
    cout << txt;
}

int main(){
    string teks;

    cetak("masukan Nama anda : ");
    cin >> teks;

    cetak("selamat datang ");
    cetak(teks);
    cout << endl;
}