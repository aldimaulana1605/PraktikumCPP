// Mencari nilai terbesar dari terbesar dari tiga buah bilangan bulat menggunakan if tersarang
#include <iostream>
using namespace std;

int main()
{
	int A,B,C;
	
	cout<<"Masukan nilai A : ";cin>>A;
	cout<<"Masukan nilai B : ";cin>>B;
	cout<<"Masukan nilai C : ";cin>>C;
	cout<<"-------------------------------------"<<endl;
		if (A>B)
		if(A>C)
			cout<<"Bilangan terbesar adalah : "<<A<<endl;
	else	//(C>=A)
		cout<<"Bialngan terbesar adalah : "<<C<<endl;
	else	//(B>=A)
	if (B>C)
		cout<<"Bilangan terbesar adalah : "<<B<<endl;
	else
		cout<<"Bilangan terbesar adalah : "<<C<<endl;
	return 0;
}
