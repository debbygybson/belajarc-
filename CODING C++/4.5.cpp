#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int kode_hari;
    cout << "menentukan hari";
    cout << "\n1 = SENIN  3 = RABU  5 = JUMAT 7 = MINGGU";
    cout << "\n2 = SELASA 4 = KAMIS 6 = SABTU";
    cout << "\n Masukkan kode hari (1..7) : ";
    cin >> kode_hari;
    switch (kode_hari)
    {
        case 1 :
        cout << "Hari SENIN";
        break;

        case 2 :
        cout << "Hari SELASA";
        break;

        case 3 :
        cout << "Hari RABU";
        break;

        case 4 :
        cout << "Hari KAMIS";
        break;

        case 5 :
        cout << "Hari JUMAT";
        break;

        case 6 :
        cout << "Hari SABTU";
        break;

        case 7 :
        cout << "Hari MINGGU";
        break;

        default :
            cout  << "kode yang anda masukkan salah !";
    }
    return 0;
}
