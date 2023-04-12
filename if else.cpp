#include <iostream>
using namespace std;
int main(){
	int ogrencinotu;
	cout<<"lutfen notunuzu giriniz=";
	cin>>ogrencinotu;
	if(ogrencinotu<0 || ogrencinotu>100){
		cout<<"gecerli araliklarda sayi giriniz =";
	}	
	
	else if( ogrencinotu>=70){
		cout<<"gectiniz...";
	}
	
	else if(ogrencinotu>=55){
		cout<<"bute kaldiniz...";
	}
	
	else{
		cout<<"kaldiniz";
	
	}
	
}
