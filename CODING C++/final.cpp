#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main ()

{
    int x,t,p,i,k,b,kali,h;

    menu :
        cout <<"\nMENU :";
        cout <<"\n1.Lagu Anak Ayam";
        cout <<"\n2.Tabel Perkalian";
        cout <<"\n3.Exit";

        cout <<"\nMasukkan Pilihan Anda = ";
        cin >> p;

        switch (p){
            case 1:system("cls");

                cout<<"======================================================"<<endl;
                cout<<"           Anda Memasuki Menu Lagu Anak Ayam          "<<endl;
                cout<<"======================================================"<<endl;
                cout<<"Silahkan Masukkan Jumlah Anak Ayam : ";
                cin >>t;
                for ( i=t;i>=1;i--){
                    cout<<"Tek kotek kotek kotek anak ayam"<<endl;
                    cout<<"turun "<<i<<" mati 1 tinggal "<<i-1<<endl;
                    if (i==2)
                        break;}
                    cout<<"Tek kotek kotek kotek anak ayam"<<endl;
                    cout<<"turun 1 mati 1 tinggal induknya"<<endl;
                    break;
            case 2:system("cls");
                cout<<"======================================================"<<endl;
                cout<<"          Anda Memasuki Menu Tabel Perkalian          "<<endl;
                cout<<"======================================================"<<endl;
                cout<<"Silahkan Masukkan Jumlah kolom dan baris : ";
                cin >>x;
                for (k=1;k<=x;k++)
                    {

                    for ( b=1;b<=x;b++ )
                        {
                            kali=k*b;
                            cout <<setw(5)<<kali;
                        }
                        cout<<endl;

                    }
                break;
              case 3:exit(0);
                break;
              default :
                cout<<"procces terminated";



                }
goto menu;
}

