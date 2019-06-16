#include <iostream>
#include <stdlib.h>
#include <ctime>

 using namespace std;

int main()
{
    int n,max=0,total=0;
    cout <<"Masukkan jumlah data : ";
    cin >>n;

    int values[n],i;
    system("cls");
    cout <<"Data random yang belum urut : "<<endl;
    for(i=0;i<n;i++)
    {
      values[i]=rand()%201 + (-100);
      cout <<values[i]<<" ";
    }
    cout <<endl;

    for(i=0;i<n-4;i++)
    {
       total=values[i]+values[i+1]+values[i+2]+values[i+3];
       if(total>max)
       {
           max = total;
       }
    }
    cout <<"Max Contigous subsecuence = " <<max<<endl;
    cout <<"Waktu eksekusi = "<<(stop_s-start_s)/double(CLOCKS_PER_SEC)<<endl;
}
