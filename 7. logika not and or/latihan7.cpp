#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 6;

    bool hasil;

    //not artinya tidak
    hasil = !(a == 3);
    cout << hasil << endl;
    hasil = !(a == 2);
    cout << hasil << endl;

    //and
    cout << "ini untuk and" << endl;
    // kedua nilai harus berhasil true
    hasil = (a == 3) and (b == 6); //true dan true
    cout << hasil << endl;
    hasil = (a == 3) and (b == 5); //true dan false
    cout << hasil << endl;
    hasil = (a == 2) && (b == 6); //false dan true
    cout << hasil << endl;
    hasil = (a == 1) && (b == 1); // false dan fales
    cout << hasil << endl;

    //or
    cout << "ini untuk or" << endl;
    // harus ada satu yang true
    hasil = (a == 3) or (b == 6); //true dan true
    cout << hasil << endl;
    hasil = (a == 3) or (b == 5); //true dan false
    cout << hasil << endl;
    hasil = (a == 2) ||  (b == 6); //false dan true
    cout << hasil << endl;
    hasil = (a == 1) ||  (b == 1); // false dan fales
    cout << hasil << endl;

    return 0;
}