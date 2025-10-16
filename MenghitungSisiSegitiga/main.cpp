#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	double a, b, c;

	cout << "menghitung sisi miring segitiga siku-siku" << endl;
	cout << "     |\\\n";
	cout << "     | \\\n";
	cout << "   a |  \\ c\n";
	cout << "     |   \\\n";
	cout << "     |____\\\n";
	cout << "       b\n\n";

	cout << "\nMasukan panjang sisi a: ";
	cin >> a;
	cout << "\nMasukan panjang sisi b: ";
	cin >> b;

	cout << fixed << setprecision(2);
	c = sqrt(a * a + b * b);
	cout << "\nPanjang sisi miring c adalan: " << c << endl;

	system("pause");
	return 0;
}