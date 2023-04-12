//pointerla malloc kullanarak yer tahsisi yapma (içinde belirttiðin alan kadar yer tahsisi yapýlýr) malloc kullanarak yer deiþtirme iþlemi yapma.
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

