#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // bilangan bulat
    int a = 1;
    cout << "ukuran int :" << sizeof(a)<< endl; //melihat ukuran variabel
    cout << "batas maksimum int : " << numeric_limits<int>::max() << endl;
    cout << "batas minimum int : " << numeric_limits<int>::min() << endl;


    unsigned int aa = 1;
    cout << "ukuran unsigned int :" << sizeof(a) << endl; //melihat ukuran variabel
    cout << "batas maksimum unsigned int : " << numeric_limits<unsigned int>::max() << endl;
    cout << "batas minimum unsigned int : " << numeric_limits<unsigned int>::min() << endl;

    long b = 1;
    cout << "ukuran long : " << sizeof(b) << endl; //melihat ukuran variabel
    cout << "batas maksimum long : " << numeric_limits<long>::max() << endl;
    cout << "batas minimum long : " << numeric_limits<long>::min() << endl;

    short c = 1;
    cout << "ukuran short : " << sizeof(c) << endl; //melihat ukuran variabel
    cout << "batas maksimum short : " << numeric_limits<short>::max() << endl;
    cout << "batas minimum short : " << numeric_limits<short>::min() << endl;

    // bilangan desimal
    float d = 1.1;
    cout << "ukuran float :" << sizeof(d) << endl; //melihat ukuran variabel
    cout << "batas maksimum float : " << numeric_limits<float>::max() << endl;
    cout << "batas minimum float : " << numeric_limits<float>::min() << endl;

    double e = 1.11;
    cout << "ukuran double : " << sizeof(e) << endl; //melihat ukuran variabel
    cout << "batas maksimum double : " << numeric_limits<double>::max() << endl;
    cout << "batas minimum double : " << numeric_limits<double>::min() << endl;

    // boolean true/false
    bool h = true;
    cout << "ukuran bool : " << sizeof(h) << endl; //melihat ukuran variabel

    // karakter
    char f = 'f';
    cout << "ukuran char : " << sizeof(f) << endl; //melihat ukuran variabel

    string g = "Halo Gays";
    cout << "ukuran string : " << sizeof(g) << endl; //melihat ukuran variabel

    return 0;
}