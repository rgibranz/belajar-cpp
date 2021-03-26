#include <iostream>

using namespace std;

int main(){
    int a = 3;
    int b = 6;

    bool hasil;

    // satu untuk true(benar)
    // dan dua untuk false(salah)

    // == sama dengan
    hasil = a == b; 
    cout << hasil << endl;

    // != tidak sama dengan
    hasil = a != b;
    cout << hasil << endl;

    // > lebih dari
    hasil = a > b;
    cout << hasil << endl;

    // < kurang dari
    hasil = a < b;
    cout << hasil << endl;

    // > lebih dari sama dengan
    hasil = a >= b;
    cout << hasil << endl;

    // < kurang dari sama dengan
    hasil = a <= b;
    cout << hasil << endl;
    return 0;
}