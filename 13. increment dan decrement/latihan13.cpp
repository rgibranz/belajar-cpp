#include <iostream>

using namespace std;

int main(){
    
    int a = 2;

    
    cout << "nilai awal : " << a << endl;
    cout << "postincrement : " << a++ << endl;
    cout << "postincrement : " << a << endl << endl;

    
    cout << "nilai awal : " << a << endl;
    cout << "postdecrement : " << a-- << endl;
    cout << "postdecrement : " << a << endl << endl;

    
    cout << "nilai awal : " << a << endl;
    cout << "preincrement : " << ++a << endl;
    cout << "preincrement : " << a << endl << endl;

    
    cout << "nilai awal : " << a << endl;
    cout << "predecrement : " << --a << endl;
    cout << "predecrement : " << a << endl << endl;

    return 0;
}