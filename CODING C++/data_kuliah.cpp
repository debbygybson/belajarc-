#include <iostream>

using namespace std;

int main()
{
   char nama[30], nim[10];
   char makul[9][20];
   int nimak[9],n;

   cout<<"nama : ";cin>>nama;
   cout<<"nim : ";cin>>nim;
   cout<<"Masukkan Berapa Makul: ";cin >> n;
   cout<<"makul :  "<<endl;

   for(int i=0;i<n;i++)
   {
       cin>>makul[i]>>nimak[i];
   }
    cout <<endl;

    cout<<"tampil data : "<<endl;
    cout<<"nama : "<<nama<<endl;
    cout<<"nim : "<<nim<<endl;
    cout<<"makul :  "<<endl;
    int total=0,rata2=0,nimax=0,nimin=999,k,l   ;
   for(int i=0;i<n;i++)
   {
       cout<<makul[i]<<" : "<<nimak[i]<<endl;
       total = total+nimak[i];
       if (nimax<=nimak[i])
       {
           nimax =nimak[i];
           k =i;
       }
       if (nimin>=nimak[i])
       {
           nimin = nimak[i];
           l=i;
       }
   }

    rata2=total/n;
    cout<<endl;
    cout<<"nilai Tertinggi : "<<endl;
    cout<<makul[k]<<" : "<<nimak[k]<<endl;
    cout<<"nilai Terrendah : "<<endl;
    cout<<makul[l]<<" : "<<nimak[l]<<endl;
    cout<<"rata-rata : "<<rata2<<endl;
    if (rata2>=70)
    {
        cout<<"LULUS \\(^.^)/"<<endl;
    }
    else
    {
        cout<<"TIDA LULUS /(~.~)\\"<<endl;
    }



}
