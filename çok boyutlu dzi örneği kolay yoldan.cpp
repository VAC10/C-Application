#include <iostream>
using namespace std;
int main(){
int notlar[5] [2];
cout<<"derslere ait 1. ve 2.notlarý giriniz..."<<endl;

for(int i=0; i<5;i++)
for(int j=0;j<2;j++)
{
	cout<<i+1<<".dersin = "<<j+1<<". notunu giriniz = ";
	cin>>notlar [i][j];	
}
	
cout<<"<<<<<<<dizi içinde elemanlarýn listelenmesi>>>>>"<<endl;
for(int i=0; i<5;i++)
for(int j=0;j<2;j++)
{
	cout<<i+1<<".dersin = "<<j+1<<". notu = "<<notlar [i] [j]<<endl;

}

	
	
	
	
	
	
	
	
}
