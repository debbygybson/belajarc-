#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
    typedef struct {char nomhs[12];
                    char nama[20];
                    float nilai;
                    }data_nilai
    data_nilai nilaimhs[10];

    int i;

    for(i=1;i<=2;i++)
    {

    }
    system("cls");
    for (i=1;i<=2;i++)
    {
        cout << "Nama : "<< nilaimhs[i].nama;
        cout << "NoMhs : "<< nilaimhs[i].nomhs;
        cout << "Nilai : "<< nilaimhs[i].nilai;
        cout << "\n";
    }
    getche();

}
