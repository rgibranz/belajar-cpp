#include <iostream>

using namespace std;

int main(){
    // program deret fibonacci

    unsigned long int a,a1=0,a2=1,aa=0;

    cout << "masukan jumlah deret : ";
    cin >> a;

    for(int i = 1; i <= a; ++i){
        if (i == 1)
        {
            cout << a1 << endl;
            continue;
        }
        if (i == 2)
        {
            cout << a2 << endl;
            continue;
        }
        aa = a1 + a2;
        a1 = a2;
        a2 = aa;

        cout << aa << endl;
    }

    return 0;
}