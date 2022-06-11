//Mencari bilangan terbesar dari 3 bilangan bulat

#include <iostream>
using namespace std;
int main ()
{
	int x,y,z;
	cout<<"Nilai   X  ?";cin>>x;
	cout<<"Nilai   Y  ?";cin>>y;
	cout<<"Nilai   Z  ?";cin>>z;
		if ((x>y) && (x>z))
	cout<<"Bilangan terbesar adalah "<<x<<endl;
		else
		if ((y>x) && (y>z))
	cout<<"Bilangan terbesar adalah"<<y<<endl;
		else
	cout<<"Bilangan terbesar adalah "<<z<<endl;
		return 0;
}