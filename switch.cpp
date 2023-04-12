#include <iostream>
using namespace std;
int main(){
	int secim, sayi1,sayi2;
	cout<<"sayi biri giriniz:";
	cin>>sayi1;
	cout<<"sayi ikiyi giriniz:";
	cin>>sayi2;
	cout<<"[1] toplama"<<endl;
	cout<<"[2] cikarma"<<endl;
	cout<<"[3] carpma"<<endl;
	cout<<"[4] bolme"<<endl;
	cout<<"<<<<<<<<<<<<yukaridaki listeden bir islem turu seciniz: ";
	cin>>secim;
	switch(secim)
	{
		case 1: cout<<"toplam:"<<sayi1+sayi2;
		break;
		case 2: cout<<"cýkarma:"<<sayi1-sayi2;
		break;
		case 3: cout<<"carpma:"<<sayi1*sayi2;
		break;
		case 4:cout<<"bolme:"<<sayi1/sayi2;
		break;
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
