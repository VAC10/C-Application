#include <iostream>
using namespace std;
int main()
{
	int sayi, i, j;;
	cout << "kenar uzunlugunu giriniz = ";
	cin >> sayi;
	for (i =1; i<= sayi; i++)
	{

		for (j =1; j<= sayi; j++) {
			if (i == 1 || i == sayi || j == sayi || j == 1)
				cout <<"*";
			else
				cout <<" ";
		}
		cout << "\n";
	}


return 0;

	}





