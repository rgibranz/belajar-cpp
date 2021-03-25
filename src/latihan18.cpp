#include <iostream>
using namespace std;

int main(){
    
    int a,i,j,k;
    
    cout << "masukan jumlah pola : ";
    cin >> a;

    cout << "Pola 1" << endl;
    for(i = 1; i <= a; i++){
        for(j = 1; j <= i; j++){
            cout << "$";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pola 2" << endl;
    for (i = a; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout << "$";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pola 3" << endl;
    for (i = 1; i <= a; i++)
    {
        for(j = 1; j < i; j++){
            cout << " ";
        }

        for(k = a; k >= i; k--){
            cout << "$";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pola 4" << endl;
    for (i = 1; i <= a; i++)
    {
        for (j = a; j > i; j--)
        {
            cout << " ";
        }

        for (k = 1; k <= i; k++)
        {
            cout << "$";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}