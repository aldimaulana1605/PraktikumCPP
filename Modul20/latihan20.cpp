//Program tekan tombol 'Y' untuk mengulang dan 't' untuk keluar
#include <iostream>
using namespace std;

int main()
{
	float  panjang, lebar, luas;
	char  pil;
	pil = 'y';
	while(pil == 'y')
	{
		cout<<"LUAS SEGI EMPAT  "<<endl;
		cout<<"==============="<<endl;
        cout<<"Panjang  ?  ";cin>>panjang;
		cout<<"Lebar       ?  ";cin>>lebar;
		luas=panjang * lebar;
		cout<<"Luas  segi  empat  =  "<<luas<<endl;
		cout<<"Hitung  lagi  ?  (y/t)  ?  ";cin>>pil;
	} return 0;
}
