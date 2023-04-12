#include<iostream>
using namespace std;
int main()
{
	int yas =30;
	const double Pi = 3.1416;
	int* p = &yas;
	cout << "Yas degiskeninin bellekteki adresi= " << &yas << endl;
	cout << "Pi sabitinin bellekteki adresi= " << &Pi << endl;
	cout << "Yas sabitinin bellekteki adresi= " << p << endl;
	cout << "Yas sabitinin degeri= " << *p << endl;
	return 0;
}
