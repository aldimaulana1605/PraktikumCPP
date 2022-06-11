//Melihat relasi dan logik

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i;
    cout<<" Masukan Nilai a = ";cin>>a;
    cout<<" Masukan Nilai b = ";cin>>b;
    cout<<" Masukan Nilai c = ";cin>>c;
    d=a == b;
    e=a != b;
    f=c >= a;
    g=c > b;
    h=a < c;
    i=c >= b;
    cout<<"Hasil dari : "<<a<<" == "<<b<<" = "<<d<<endl;
    cout<<"Hasil dari : "<<a<<" != "<<b<<" = "<<e<<endl;
    cout<<"Hasil dari : "<<c<<" >= "<<a<<" = "<<f<<endl;
    cout<<"Hasil dari : "<<c<<" > "<<b<<" = "<<g<<endl;
    cout<<"Hasil dari : "<<a<<" < "<<c<<" = "<<h<<endl;
    cout<<"Hasil dari : "<<c<<" >= "<<b<<" = "<<i<<endl;
    return 0;
}	
