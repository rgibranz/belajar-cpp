#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    for(int n = 0; n <= 10; n++){
        cout << 1 + (rand() % 6) << endl;
    }

    return 0;
}