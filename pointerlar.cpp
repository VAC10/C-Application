// pointerlar arasýnda yer deðiþtirme iþlemi yapma  
#include <iostream>
using namespace std;
int main() {
int*s1 =new int, *s2 = new int, gecici;
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
