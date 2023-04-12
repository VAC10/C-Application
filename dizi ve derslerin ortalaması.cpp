#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int notlar[5][2];
	int toplam = 0;
	cout << "<<<Derslere ait 1. ve 2. notlarý giriniz >>>"<<endl;
	for(int i=0;i<5;i++)
		for(int j=0;j<2;j++)
		{
			cout << i + 1 << ".  dersin " << j + 1 << ". notunu giriniz= ";
			cin >> notlar[i][j];
			toplam = toplam + notlar[i][j];
		}
	cout << " <<<< Dizi içerisindeki elemanlarýn listelenmesi >>>>" << endl;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 2; j++)
		{
			cout << i + 1 << ".  dersin " << j + 1 << ". notu= "<<notlar[i][j]<<endl;
		}
	cout << "tüm notlarýn toplamý= " << toplam<<endl;
	cout << "tüm notlarýn ortalamasý= " << toplam / 10;
	return 0;
}
