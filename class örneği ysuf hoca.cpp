#include <iostream>
#include <string>
using namespace std;
class insan
{
public:// �zelliklerin oldu�u yerdir ve bu s�n�f�n �zelli�ine her yer eri�ebilir eger eri�ilmesini istemiyorsak private yap�lmal�.
	string ad ;
	int yas;
	
	void bilgi()// void tipsizdir ve return kullanmaya gerek yoktur.
	 {
		cout<<"ad�m ="+ad<<"ve yas�m =";
		cout<<yas<<endl;
}
	};
int main(){
insan erkek;
erkek.ad="ahmet";
erkek.yas=30;
insan kadin;
kadin.ad ="emine";
kadin. yas=25;

erkek.bilgi();
kadin.bilgi();
	
	
	
	
	
	
}
/*#include <iostream>
class insan
{
	private:
		int yas;
		
		public:
			void yasiduzenle ( int yasiver)
			{
				
			yas=yasiver;
	}
	int yasial(){
		if(yas>30)
		return(yas+2);
		else
		return yas;
	}
};
int main(){
	insan erkek;
	erkek.yasiduzenle(32);
	insan kadin;
	kadin.yasiduzenle(20);
	
	cout<<"erke�in yasi ="<<erkek.yasial()<<endl;
	cout<<"kadinin yasi ="<<kadin.yasial()<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}*/




		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	





