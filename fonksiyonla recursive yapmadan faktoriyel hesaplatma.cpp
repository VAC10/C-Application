//fonksiyonla faktoriyel hesaplama
#include <iostream>
using namespace std;
int f =1;
int faktoriyel (int s)
{
	for(int i=1;i<=s;i++){
	
	f=f*i;
	cout<<i<<"sayisinin faktoriyeli = "<<f<<endl;
}
return f;
}
int main (){
	int sayi;
	cout<<"lutfen klavyeden bir sayi giriniz = ";
	cin>>sayi;
	cout<<"girdiginiz sayinin faktoriyeli = "<<faktoriyel(sayi);
	
	
	
	
	
	
	
	
	
}




