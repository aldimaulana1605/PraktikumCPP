//mencari indeks dari nilai ujian mahasiswa
	#include <iostream>
	using namespace std;
	int main()	
	{
	float nilai;
	char indeks;
	cout<<"Nilai Ujian ? ";cin>>nilai;
		if ((nilai>= 80)&&(nilai <=100))
			indeks = 'A';
		else
		if ((nilai>69)&&(nilai < 80))
			indeks = 'B';
		else
		if ((nilai > 59)&&(nilai < 70))
			indeks = 'C';
		else
		if ((nilai > 49)&&(nilai<60))
			indeks = 'D';
		else
			indeks = 'E';
		cout<<"indeks = "<<indeks<<endl;
		return 0;
	}