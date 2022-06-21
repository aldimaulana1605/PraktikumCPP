#include<iostream>
using namespace std;
int main()
{
	char  kode;
	cout<<" Masukan Kode Barang [1..4]  : ";cin>>kode;
	switch(kode)
	{
		case '1' :
			cout<<"Alat Olah Raga";
			break;
		case '2' :
			cout<<"Alat Elektronik";
			break;
		case '3' :
			cout<<"Alat Masak";

			break;
		default:
			cout<<"Anda Salah Masukan Kode.......";
			break;
	} return 0;
}
