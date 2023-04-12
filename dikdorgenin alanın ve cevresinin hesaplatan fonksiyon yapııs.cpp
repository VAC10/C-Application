#include <iostream>
using namespace std;
int alan (int kisa,int uzun)
{
	return kisa*uzun;
	
}
int cevre(int kisa,int uzun)
{
	return (kisa+uzun)*2;
}
int main()
{
	int kk;
	int uk;
	cout<<"lutfen kisa kenar uzunlugunu giriniz =";
	cin>>kk;
	cout<<"lutfen uzun kenar uzunlugunu giriniz =";
	cin>>uk;
	cout<<"dikdortgeninin alani ="<<alan(kk,uk)<<endl;
		cout<<"dikdortgeninin cevresi ="<<cevre(kk,uk);	
	
	
	
	
	
	
	
	
	
	
	
}


