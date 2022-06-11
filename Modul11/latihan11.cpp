//program IF , ELSE

#include <iostream>
using namespace std;
int main()
{
	double tot_beli, potongan=0, jum_bayar=0;
	cout<<"Total Pembelian Rp. ";cin>>tot_beli;
		if (tot_beli >= 50000)
	potongan = 0.2 * tot_beli;
		else
	potongan = 0.05 * tot_beli;
	cout<<"besarnya potongan Rp. "<<potongan<<endl;
	jum_bayar = tot_beli - potongan;
	cout<<"jumlah yang harus dibayarkan Rp. "<<jum_bayar;
		return 0;
}