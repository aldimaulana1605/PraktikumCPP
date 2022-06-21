#include <iostream>
using namespace std;
int main()
{
float  pendptan, jasa=0, komisi=0, total=0;
cout<<"Pendapatan Hari ini Rp. ";cin>>pendptan;
if (pendptan >= 0 && pendptan <= 200000)
{
	jasa=10000;
	komisi=0.1*pendptan;
}
else
{
	if (pendptan >200000 && pendptan<= 500000)
	{
		jasa=20000;
		komisi=0.15*pendptan;
	}
	else
	{
		jasa=30000;
		komisi=0.2*pendptan;
	}
	}
	total = komisi + jasa;
	cout<<"Uang Jasa            Rp. "<<jasa<<endl;
	cout<<"Uang Komisi        Rp. "<<komisi<<endl;
	cout<<"========================="<<endl;
	cout<<"Hasil Total            Rp. "<<total<<endl;
	return 0;
}