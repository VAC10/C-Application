#include <iostream>
using namespace std;
class ogrenci
{
	public:
		string ad;
		string soyad;
		int no;
		void ogrencibilgileri ()
		{
			cout<<"ogrenci adi ="<<ad<<endl;
			cout<<"ogrenci soyad ="<<soyad<<endl;
			cout<<"ogrenci no ="<<no<<endl;
			
		}
};
	int main(){
	ogrenci asim;
	asim.ad="asim";
	asim.soyad="cayirli";
	asim.no=216;
	
	asim.ogrencibilgileri ();
	
	
	
	
	
}
