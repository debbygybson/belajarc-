#include <iostream>
#include <conio.h>
using namespace;


void calc();
float a,b,c,hsl;
char opt,ulg;
int main()
{
     calc();     //memanggil fungsi calc()
     return 0;
}
void calc()
{
     mulai:
     clrscr(); //membersihkan layar
     cout<<"|---------------------------------------------|"<<endl;
     cout<<"|                 KALKUALTOR                           |"<<endl;
     cout<<"|            by Juned al~Bughisy              |"<<endl;
     cout<<"|Operator yang digunakan adalah +, -, x, dan /|"<<endl;
     cout<<"|---------------------------------------------|"<<endl;
     cout<<"|nb:contoh penggunaan 2+2 <enter>             |"<<endl;
     cout<<"|---------------------------------------------|\n"<<endl;
     cin>>a>>opt>>b;  //input bilangan,operator dan bilangan
     switch (opt)
     {
          case '+':
          hsl=a+b;
          cout<<hsl<<endl;
          goto ulang;
          case '-':
          hsl=a-b;
          cout<<hsl<<endl;
          goto ulang;
          case 'x':
          hsl=a*b;
          cout<<hsl<<endl;
          goto ulang;
        case '/':
        hsl=a/b;
        cout<<hsl<<endl;
        goto ulang;
        default:
        cout<<"out Of OperatioNs"<<endl; //hasil yang terjadi jika pada opt dimasukkan selain +,-,x,/
        ulang:
        cout<<"ulang ? (y/n)"<<endl; //mengulang
        cin>>ulg;
        if (ulg=='y')
            goto mulai;
            else{
            cout<<"terima kasih sudah menggunakan program ini"<<endl;
            }
    }
}
