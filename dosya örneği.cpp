//dosya yazma
#include <fstream>
#include<iostream>
#include <string>
using namespace std;
int main(){
	fstream dosya("adres.txt",fstream::out);
	dosya<<"Vefa As�m"<<endl;
	dosya<<"Van"<<endl;
	dosya<<"�pekyolu"<<endl;
	
	dosya.close();
	cout<<"dosya yazma islemi tamamlandi... ";
	
	
	
	
	
}

