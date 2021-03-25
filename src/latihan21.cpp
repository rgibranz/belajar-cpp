#include <iostream>
using namespace std;

int kuadrat(int x){
    int y = x * x;
    return y;
}

int main(){
    
    int a,b;

    cout << "masukan angka : ";
    cin >> a;

    b = kuadrat(a);
    cout << "hasil kuadrat " << a << " adalah " << b << endl;

    return 0;
}