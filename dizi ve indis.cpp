#include <iostream>
using namespace std;
int main()
{
int dizi [1000];
int indis=0;
int toplam=0;
int deger=0;
cout<<"Bir deger giriniz =";
cin>>deger;
while(deger<200)
{
	dizi[indis]=deger;
	toplam+=deger;
	indis++;
	cout<<"bir deger giriniz (girdiginiz deger 200'den fazla ise donguden cikilacaktir...) =";
	cin>>deger;	
}
	float ortalama= (float)toplam / (float)indis;
	cout<<"ortalama deger ="<<ortalama<<endl;
	for(int i=0;i<indis;i++)
	{
		if(dizi[i]>ortalama){
			
			cout<<dizi[i]<<"degeri ortalamadan buyuktur."<<endl;
			
		}
	
		
		
	
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
