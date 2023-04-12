#include <iostream>
#include<string>
using namespace std;
int main(){
	 string dersler [2] [3];
	for(int i= 0; i<2;i++)
	for(int j =0; j<3; j++){
		cout<<"lutfen . ogrencinin"<<i+1<<". dersini giriniz = "<<j+1;
		cin>> dersler [i] [j];
	}
	for(int i= 0; i<2;i++)
	for(int j = 0; j<3; j++){
		cout<<". ogrencinin "<<i+1<<" . dersi = "<<j+1<<dersler [i] [j]<<endl;
		
	}
	
	
}


