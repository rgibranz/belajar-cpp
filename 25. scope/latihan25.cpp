#include <iostream>
using namespace std;

int var = 10; //scope global

int var_global(){
	return var;
}

int main(){

	cout << var << endl; //menampilkan var scope global

	var = 20;

	cout << var << endl;

	cout << var_global() <<  endl;

	cout << var << endl;



	return 0;
}
