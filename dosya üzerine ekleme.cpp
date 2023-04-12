#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main (){
	string veri;
	fstream file;
	int i=0;
	file.open("dosya.txt",ios::out|ios::app);
	if(file.is_open()){
		while(i<5){
			file<<"amazing"<<"  ";
			i++;
		}
		file.close();
		
		return 0;
		
	}
	
	
	
	
	
	
	
}




