#include <iostream>
#include <string>
using namespace std;
int main(){
string dersler [2] [3];
for(int i = 0; i<2;i++)
for(int j = 0; j<3; j++){
cout<<i+1<<". ogrencinin "<<j+1<<" . dersini giriniz = ";
	cin>>dersler[i] [j];	
}
for(int i = 0; i<2 ;i++)
for(int j = 0; j<3; j++){
	cout<<i+1<<". ogrencinin"<<j+1<<". dersi = "<<dersler [i] [j]<<endl;
	
	
}




}


