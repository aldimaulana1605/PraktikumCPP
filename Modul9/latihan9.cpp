//Penggunaan Operasi Logika OR

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g;
    cout<<" Masukan Nilai A = ";cin>>a;
    cout<<" Masukan Nilai B = ";cin>>b;
    cout<<" Masukan Nilai C = ";cin>>c;
    d=a + 4 < 10;
    e=b > a + 5;
    f=c - 3 > 4;
    g=d || e || f;
    cout<<endl<<endl;
    cout<<"Program Ekspresi  OR"<<endl<<endl;
    cout<<"Hasil dari d=a+4<10 adalah : "<<d<<endl;
    cout<<"Hasil dari e=b>a+5 adalah : "<<e<<endl;
    cout<<"Hasil dari f=c-3>4 adalah : "<<f<<endl;
    cout<<"Hasil dari g=d||e||f adalah : "<<g<<endl;
    cout<<endl;
    return 0;
}
