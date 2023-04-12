#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main (){
	string veri;
	fstream file;
	file.open("dosya.txt",ios::in);
	
	if(file.is_open()){
		while(!file.eof()){
			file>>veri;
			cout<<veri<<endl;
		}
		
		
	}
	
	file.close();
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}
