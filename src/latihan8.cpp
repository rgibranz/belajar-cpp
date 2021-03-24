#include <iostream>

using namespace std;

int main(){
    int a;
    
    cout << "masukan nilai = ";
    cin >> a;

    if(a > 70){
        cout << "anda lulus" << endl;
    }

    if (a < 70)
    {
        cout << "anda tidak lulus" << endl;
    }

    cout << "nilai anda : " << a << endl;
}