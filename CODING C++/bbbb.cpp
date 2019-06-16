#include <iostream>
using namespace std;

int main()
{
int i=1,x=0,t,n,s ,tanda;
cout <<"Masukan nilai n :";
cin>>n;
while(i<=n)
{
	if(i%2==1)
	{
	tanda=-1;
	}
	else
	{
	cout<<"+";
	tanda=1;
	}
	x=(2*i+1)*t;
	s=s+x;
	cout<<x;
	i++;
}cout<<endl;
}
