#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int A[3][4], B[3][4],X[3][4],Y[3][4],C[3][4],i,j;
    system("cls");

    for (i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<"input data matrik A["<<i+1<<"]["<<j+1<<"] : ";
            fflush(stdin);cin >> A[i][j];
        }
    }

     for (i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<"input data matrik B["<<i+1<<"]["<<j+1<<"] : ";
            fflush(stdin);cin >> B[i][j];
        }
    }

     for (i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
           X[i][j]=A[i][j]+B[i][j];
        }
    }

    cout <<"\n matriks A\n";
     for (i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            cout<< "   "<< A[i][j];
            cout <<"\n";
    }
    cout<< "\n";

    cout <<"\n matriks B\n";
     for (i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            cout<< "   "<< B[i][j];
            cout <<"\n";
    }
    cout<< "\n";

    cout << "\n Matriks penjumlahan A+B\n";
for (i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            cout<< "   "<< X[i][j];
            cout <<"\n";
    }
    cout<< "\n";

getch();

}
