#include <iostream>
using namespace std;
int main(){

int notlar [4] [3];
for(int i=0;i<3;i++)
for(int j=0;j<2;j++)
{
	cout<<i+1<<". dersin "<<j+1<<" . notunu giriniz:";
	cin>>notlar[i] [j];
}
for(int i=0;i<3;i++)
for(int j=0;j<2;j++)
{
	cout<<i+1<<". dersin"<<j+1<<". notu :"<<notlar [i] [j]<<endl;
	
}
}
