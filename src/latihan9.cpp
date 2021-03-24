#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukan nilai = ";
    cin >> a;

    if (a > 70){
        cout << "anda lulus" << endl;
    }
    else if (a < 70){
        cout << "anda tidak lulus" << endl;
    }
    else if (a <= 0){
        cout << "anda bodoh" << endl;
    }else {
        cout << "silahkan ujian" << endl;
    }

    cout << "nilai anda : " << a << endl;
}