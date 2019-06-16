#include <iostream>

using namespace std;

int main()
{
    int var_x=273;
    int *ptr1;
    int **ptr2;
    ptr1=&var_x;
    ptr2=&ptr1;

    cout <<"nilai var_x= " <<*ptr1<<endl;

    cout <<"nilai var_x= " <<**ptr2;
}
