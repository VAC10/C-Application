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
insan erkek; //erkek isminde bir nesne t�retildi.	
	erkek.ad = " ahmet";	
	erkek.yas = 30;
	insan kadin; //kad�n isminde bir nesne t�retildi.
	kadin.ad = " emine";
	kadin.yas = 20;
	erkek.bilgi();
	kadin.bilgi();
	
	
	
	
	
	
	
	
}
