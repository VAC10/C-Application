#include <iostream>
#include <string>
using namespace std;
class insan
{
public:
string ad;
int yas;		
	
	void bilgi()
	{
		
	cout<<"adim = " + ad<<" ve yasim = ";
	cout<<yas<<endl;	
		
	
			}		
			};


int main ()
{
insan erkek; //erkek isminde bir nesne türetildi.	
	erkek.ad = " ahmet";	
	erkek.yas = 30;
	insan kadin; //kadýn isminde bir nesne türetildi.
	kadin.ad = " emine";
	kadin.yas = 20;
	erkek.bilgi();
	kadin.bilgi();
	
	
	
	
	
	
	
	
}
