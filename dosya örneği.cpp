//dosya yazma
#include <fstream>
#include<iostream>
#include <string>
using namespace std;
int main(){
	fstream dosya("adres.txt",fstream::out);
	dosya<<"Vefa Asým"<<endl;
	dosya<<"Van"<<endl;
	dosya<<"Ýpekyolu"<<endl;
	
	dosya.close();
	cout<<"dosya yazma islemi tamamlandi... ";
	
	
	
	
	
}

