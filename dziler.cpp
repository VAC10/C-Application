#include <iostream>
using namespace std;
int main (){
	int sayilar [3];
	cout<<"klavyeden birinci sayiyi giriniz =";
	cin>>sayilar[0];
	cout<<"klavyeden ikinci sayiyi giriniz= ";
	cin>>sayilar[1];
	cout<<"klavyeden ucuncu sayiyi giriniz= ";
	cin>>sayilar[2];
	int toplam = sayilar[0]+sayilar[1]+sayilar[2];
	int ortalama = toplam/3;
	cout<<"sayilarin toplamý ="<<toplam<<"sayilarin ortalamasi ="<<ortalama;
	return 0;
	
	
	
	
	
	
	
}

