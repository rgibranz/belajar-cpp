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

    if(arit == '+'){
        c = a + b;
    }else if(arit == '-'){
        c = a - b;
    }else if(arit == '*'){
        c = a * b;
    }else if(arit == '/'){
        c = a / b;
    }else{
        cout<< "anda tidak bisa milih ya" << endl;
    }

    cout << a << arit << b << "=" << c << endl;
    return 0;
}