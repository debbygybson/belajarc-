#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    typedef struct{char no_pendaftaran[9];
                    char nama_pasien[16];
                    float biaya;
                  }data_pasien;
    data_pasien pasien;
    cout << "No Pendaftaran : ";
    cin >> pasien.no_pendaftaran;
    cout << "Nama   : ";
    cin >>pasien.nama_pasien;
    cout << "biaya    : ";
    cin >> pasien.biaya;
    cout << "\nNo Pendaftaran : " << pasien.no_pendaftaran << endl;
    cout << "\nNama   : " << pasien.nama_pasien << endl;
    cout << "\nBiaya  : " << pasien.biaya;
    getche();

}
