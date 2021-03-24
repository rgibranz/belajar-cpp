#include <iostream>

using namespace std;

int main(){
    int pil;
    cout << "masukan pilihan : ";
    cin >> pil;
    switch (pil)
    {
    case 1:
        cout << " anda pilih 1 " << endl;
        break;

    case 2:
        cout << " anda pilih 2 " << endl;
        break;

    case 3:
        cout << " anda pilih 3 " << endl;
        break;

    default:
        cout << " APAAN INIH " << endl;
        break;
    }

    return 0;
}