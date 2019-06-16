#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int k,b,kali;
    for (k=0;k<=4;k++)
                    {

                    for ( b=0;b<=4;b++ )
                        {
                            kali=3+(k*b);
                            cout <<setw(5)<<kali;
                        }
                        cout<<endl;

                    }
}
