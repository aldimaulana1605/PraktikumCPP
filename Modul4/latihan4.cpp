//jumlah barang

#include <iostream>
using namespace std;	
int main()
{
    int a,b,c,d,e;
    a = 5000;
    b = 10;
    c = 3;
    d = b - c;
    e = a * c;
    cout<<"=====> DATA BARANG <======"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Harga Barang adalah :"<<a<<endl;
    cout<<"Jumlah Barang adalah : "<<b<<endl;
    cout<<"Barang terjual adalah : "<<c<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Sisa Barang adalah   : "<<d<<endl;
    cout<<"Jumlah bayar adalah  : "<<e<<endl;
    return 0;
}