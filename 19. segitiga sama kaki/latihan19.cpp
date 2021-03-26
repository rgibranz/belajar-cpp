#include <iostream>
using namespace std;

int main(){
    
    int a,i,j,k;
    
    cout << "masukan jumlah pola : ";
    cin >> a;
    
    cout << "Pola 5" << endl;
    for (i = 1; i <= a; i++)
    {
        for (j = a; j > i; j--)
        {
            cout << " ";
        }

        for (k = 1; k <= 2 * i - 1 ; k++)
        {
            cout << "$";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pola 6" << endl;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << " ";
        }

        for (k = a; k >= 2 * i - a; k--)
        {
            cout << "$";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pola 7" << endl;
    for (i = 1; i <= a; i++)
    {
        for (j = a; j > i; j--)
        {
            cout << " ";
        }

        for (k = 1; k <= 2 * i - 1; k++)
        {
            cout << "$";
        }
        cout << endl;
    }

    for (i = 2; i <= a; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << " ";
        }

        for (k = a; k >= 2 * i - a; k--)
        {
            cout << "$";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}