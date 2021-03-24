#include <iostream>

using namespace std;

int main(){
    float a,b,c;
    char arit;
    
    cout << "masukan angka pertama : ";
    cin >> a;
    cout << "(+,-,*,/) : ";
    cin >> arit;
    cout << "masukan angka kedua : ";
    cin >> b;

    switch (arit)
    {
    case '+':
        c = a + b;
        break;

    case '-':
        c = a - b;
        break;

    case '*':
        c = a * b;
        break;

    case '/':
        c = a / b;
        break;

    default:
        cout << " anda tidak bisa milih?" << endl;
        break;
    }

    cout << a << arit << b << "=" << c << endl;
    return 0;
}