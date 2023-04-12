// FONKSÝYONLA FAKTORÝYEL HESAPLAMA buradaki recursive yapýsýyla hesaplanmýþ

#include <iostream>
using namespace std;
int f =1;
int faktoriyel (int a)
{
if (a==1||a==0) return 1;
else return a*faktoriyel(a-1);

}
int main(){
	int N;
	cout<<"lutfen klavyeden bir sayi giriniz  = ";
	cin>>N;
	cout<<"girdiginiz sayinin faktoriyeli = "<<faktoriyel(N);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}
