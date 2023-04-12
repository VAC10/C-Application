 #include <iostream>
using namespace std;
int main (){
/*	 //A dan Z ye bütün harflerin yazdýrlýmasý
	for(char harf = 'A'; harf<='Z'; harf++ ){
	cout<<harf<< " ";
}
			for(char harf = 'Z'; harf>='A'; harf-- ){
			cout<<harf<<" "<<endl;
			}*/
/*	//	switch case örnekleri
		int sayi1,sayi2,
	//cout<<"lutfen klavyeden 1. sayiyi giriniz = ";
	cin>>sayi1;
	//cout<<"lutfen klavyeden 2. sayiyi giriniz = ";
	cin>>sayi2;
	cout<<"[1] toplama"<<endl;
	//cout<<"[2] cikarma"<<endl;
	//cout<<"[3]carpma"<<endl;
	//cout<<"[4] bolme"<<endl;
	cout<<"yukarýdaki islemlerden birini seciniz = ";
	cin>>secim;
        //switch(secim){
      //  case 1:cout<<"toplama = "<<sayi1+sayi2;
		//break;
		//case 2:cout<<"cikarma = "<<sayi1-sayi2;
		//break;
		//case 3:cout<<"carpma = "<<sayi1*sayi2;
		//break;
		//case 4:cout<<"bolme = "<<sayi1/sayi2;
		//break;
		//default:
		//	cout<<"lutfen menuden bir sayi giriniz...";
	}*/
	/*// faktoriyel hesaplamasý
	int sayi;
	int f=1;
	cout<<"lutfen klavyeden bir sayi giriniz = ";
	cin>>sayi;
	for(int i=1;i<=sayi; i++){
		f=f*i;
		cout<<i<<" sayisinin faktoriyeli = "<<f<<endl;
	} */
	/*//fonksiyonla faktoriyel hesaplama(recursive kullanmadan)
	#include <iostream> 
	using namespace std;
	int f =1;
	int faktoriyel (int s)
	{
	
	for(int i=1;i<=s;i++){
	f=f*i;
	cout<<i<<"sayisinin faktoriyeli ="<<f<<endl;	
}
	return f;
}
int main(){
	//int sayi;	
	cout<<"lutfen klavyeden bir sayi giriniz = ";
	cin>>sayi;
	//cout<<"girdiginiz sayinin faktoriyeli = "<<faktoriyel(sayi);
	
	
}*/
	/*//fonksiyonla faktoriyel hesaplama recursive kullanarak
	#include <iostream> 
//using namespace std;
//int f =1;
//int faktoriyel(int s)
//{

//if(s==1||s==0) return 1;
//else return s*faktoriyel(s-1);
//}

//int main (){
//	int sayi;
//	cout<<"lutfen klavyeden bir sayi giriniz = ";
//	cin>>sayi;
//	cout<<"girilen sayinin faktoriyeli= "<<faktoriyel(sayi);
	
	
	
	
	
	
}*/
/*//pointerlar

int yas =30;
const double pi= 3.14;
int*p =&yas;
cout<<"yas degiskeninin bellekteki adresi = "<<&yas<<endl;
cout<<"pi sabitinin bellekteki adresi = "<<&pi<<endl;
cout<<"yas degiskeninin bellekteki adresi = "<<p<<endl;
cout<<"yas degiskeninin bellekteki yeri = "<<*p<<endl;

*/
/*//pointerlar arasý yer deðiþtirme
int *s1 =new int, *s2= new int, gecici;
cout<<"klavyeden birinci sayiyi giriniz = ";
cin>>*s1;
cout<<"klavyeden ikinci sayiyi giriniz = ";
cin>>*s2;
gecici=*s1;
*s1=*s2;
*s2=gecici;
cout<<"1.sayi="<<*s1<<endl;
cout<<"2.sayi= "<<*s2;
*/
//pointerla malloc kullanarak yer tahsisi yapma (içinde belirttiðin alan kadar yer tahsisi yapýlýr malloc kullanarak yer deiþtirme iþlemi yapma.
/*#include <iostream>
#include <cstdlib>
using namespace std;
int main (){

int *s1=(int *) malloc(sizeof(int));
int *s2=(int *) malloc(sizeof(int));
int gecici;
cout<<"klavyeden birinci sayiyi giriniz = ";
cin>>*s1;
cout<<"klavyeden ikinci sayiyi giriniz = ";
cin>>*s2;
gecici=*s1;
*s1=*s2;
*s2=gecici;
cout<<"1.sayi="<<*s1<<endl;
cout<<"2.sayi= "<<*s2;
}*/
//fonksiyonla dairenin alanýný hesaplama
/*#include <iostream>
using namespace std;
const double pi=3.14;
double alan  (int r){
	return pi*r*r;
	cout<<"dairenin alaný= ";
		
}
double cevre  (int r){
	return 2*pi*r;
	cout<<"dairenin cevresi =";
		
}

int main(){
	int yaricap;	
cout<<"lutfen yaricap giriniz =";
	cin>>yaricap;
	cout<<"dairenin cevresi ="<<cevre(yaricap)<<endl;
	cout<<"dairenin alani ="<<alan(yaricap);
	
	
	
}*/
//uslü köklu sayýlarýn hesaplanmasý
 /*#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x;
	float y;
	cout<<"lutfen klavyeden bir sayi giriniz =";
	cin>>x; 
	y=(sqrt(pow(x,4)-6)/x-3);
	cout<<"y formulunun degeri ="<<y;
	
	
	}*/
//üslü köklü sayýlarýn fonksiyonla hesaplanmasý
/*#include <iostream>
#include <cmath>
using namespace std;
int usal (int taban, int us)
{
	return pow(taban,us);
}
double karekok (double deger)
{
 return	sqrt(deger);
}
int main(){
	cout<<"<<<<<<<<karekok ve us alma iþlemi>>>>>>>>"<<endl;
	int t,u;
	double s;
	cout<<"###### us alma islemi #####"<<endl;
	cout<<"lutfen bir taban degeri giriniz =";
	cin>>t;
		cout<<"lutfen bir us degeri giriniz =";
	cin>>u;
	cout<<"#### kok alma islemi #####"<<endl;
		cout<<"lutfen bir sayi giriniz =";
		cin>>s;
	cout<<"sayinin us degeri ="<<usal(t,u)<<endl;
	cout<<"sayinin karekoku ="<<karekok (s);
	return 0;
	
	
	
}*/
//yýldýzlardan kare yapma iþlemi
/*int sayi,i,j;;
cout<<"kenar uzunlugunu giriniz = ";
cin>>sayi;
for(i=1;i<=sayi;i++){
	for(j=1;j<=sayi;j++){
		if(i==1||i==sayi||j==1||j==sayi)
		cout<<"*";
		else cout<<" ";
		
	}
	cout<<" \n";
	
}*/
/*int notlar [4] [3];
cout<<"lutfen derslere ait birinci ve ikinci notlari giriniz...."<<endl;
for(int i=0; i<4;i++)
for(int j=0;j<3;j++)
{
	cout<<i+1<<". dersin "<< j+1 <<" .notunu giriniz =";
	cin>> notlar [i] [j];
}
cout<<"********Dersler Ve notlar listeleniyor********"<<endl/*;
for(int i=0; i<4;i++)
for(int j=0;j<3;j++){
	cout<< i+1 <<". dersin " <<j+1<< " . notu ="<< notlar [i] [j]<<endl;
	
	
	
}*/




















}
