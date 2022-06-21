//Menghitung Rata-rata nilai
#include <iostream>
using namespace std;

int main()
{
	int  k ;
	float N, jumlah, x, rata2;
	cout<<"Jumlah data : ";cin>>N;
	jumlah=0;
	k=1;
	while(k < N)
	{
		cout<<"Nilai "<<k<<" : ";cin>>x;
		k++;
		jumlah= jumlah + x;
	}
		rata2= jumlah/N;
		cout<<"Rata-rata Nilai = "<<rata2<<endl;
		return 0;
	}