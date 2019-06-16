#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x;
    cout << "Masukkan bilangan bulat : ";
    cin >> x;

    if ( x > 0 )
        cout << "Bilangan yang anda masukkan adalah bilangan positif";
    else if ( x < 0 )
        cout << "Bilanggan yang anda masukkan adalah bilangan negatif";
    else
        cout << "Bilangan yang anda masukkan adalah bilangan nol";

    return 0;
}
