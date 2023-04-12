#include <iostream>
#include <string>
using namespace std;
class insan
{
public:// özelliklerin olduğu yerdir ve bu sınıfın özelliğine her yer erişebilir eger erişilmesini istemiyorsak private yapılmalı.
	string ad ;
	int yas;
	
	void bilgi()// void tipsizdir ve return kullanmaya gerek yoktur.
	 {
		cout<<"adım ="+ad<<"ve yasım =";
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
	
	cout<<"erkeğin yasi ="<<erkek.yasial()<<endl;
	cout<<"kadinin yasi ="<<kadin.yasial()<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}*/




		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	





