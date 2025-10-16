#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int c, f, r;

	cout << "Menghitung konversi suhu dari Celcius ke Fahrenheit dan Reamur" << endl;
	cout << "--------------------------------------\n";
	cout << "\nMasukan suhu dalam Celcius: ";
	cin >> c;
	

	f = (9.0 / 5.0) * c + 32;
	r = (4.0 / 5.0) * c;
	cout << fixed << setprecision(2);

	cout << "\nSuhu Fahrenheit adalah: " << f << char(248) << "F: " << endl;
	cout << "Suhu Reamur adalah: " << r << char(248) << "R: " << endl;

	system("pause");
	return 0;
}