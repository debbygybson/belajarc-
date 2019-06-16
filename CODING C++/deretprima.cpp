#include <iostream>

using namespace std;

int main()
{
    int p;
    cout << "masukkan batas nilai : ";
    cin >> p;
    for (int i=1;i<=p;i++)
    {
        int jumlah=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
                jumlah++;
        }
        if (jumlah==2)
            cout <<i<<" ";

    }

}
