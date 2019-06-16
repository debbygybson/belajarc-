#include <iostream>

using namespace std;
void terkecil(float *psementara,float *pnilai, int *pi, int *pp);
void terbesar(float *psementara,float *pnilai, int *pi, int *pp);


int main()
{
int p=0,b,nim[20];
float nilai[20],sementara[2];
string nama[20];

cout<<"Masukkan Jumlah Siswa : ";
cin >>b;
cout <<endl;
cout<<"========================================================================="<<endl;
cout<<"Masukkan data siswa : "<<endl;
for(int i=1;i<=b;i++)
{
    cout<<"Name : ";
    cin>>nama[i];
    cout<<"NIM : ";
    cin>>nim[i];
    cout<<"Nilai : ";
    cin>>nilai[i];
    cout <<endl;
}
cout<<"========================================================================"<<endl;
cout <<endl;

cout <<"Data Mahasiswa : "<<endl;
for(int i=1;i<=b;i++)
{
    cout<<"Name : "<<nama[i]<<endl;
    cout<<"NIM : "<<nim[i]<<endl;
    cout<<"Nilai : "<<nilai[i]<<endl;
    cout <<endl;
}
cout<<"======================================================================="<<endl;
cout <<"Nilai Terbesar : "<<endl;
for(int i=1;i<=b;i++)
{

    terbesar(&sementara[1],&nilai[i], &i, &p);
}
    cout<<"Name : "<<nama[p]<<endl;
    cout<<"NIM : "<<nim[p]<<endl;
    cout<<"Nilai : "<<nilai[p]<<endl;
cout<<"========================================================================="<<endl;
   cout <<"Nilai Terkecil : "<<endl;
   sementara[1]=5;
for(int i=1;i<=b;i++)
{

    terkecil(&sementara[1],&nilai[i], &i, &p);
}
    cout<<"Name : "<<nama[p]<<endl;
    cout<<"NIM : "<<nim[p]<<endl;
    cout<<"Nilai : "<<nilai[p]<<endl;
    cout <<endl;

}

void terbesar(float *psementara,float *pnilai, int *pi, int *pp)
{
    if(*psementara<*pnilai)
    {
        *psementara=*pnilai;
        *pp=*pi;
    }
}

void terkecil(float *psementara,float *pnilai, int *pi, int *pp)
{
    if(*psementara>*pnilai)
    {
        *psementara=*pnilai;
        *pp=*pi;
    }
}
