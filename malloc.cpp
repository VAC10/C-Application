//pointerla malloc kullanarak yer tahsisi yapma (i�inde belirtti�in alan kadar yer tahsisi yap�l�r) malloc kullanarak yer dei�tirme i�lemi yapma.
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int *s1 = (int *) malloc(sizeof(int));
	int *s2 = (int *) malloc(sizeof(int));
	int gecici;
	
	cout<<"lutfen sayi 1i giriniz = ";
 cin>>*s1;
 cout<<"lutfen sayi 2yi giriniz =" ;
 cin>>*s2;
gecici=*s1;
*s1=*s2;
*s2=gecici;
cout<<"1. sayi = "<<*s1<<endl<<"2.sayi = "<<*s2;


return 0;

	
	
	
	
	
	
	
	
	
	
	
	
	
}

