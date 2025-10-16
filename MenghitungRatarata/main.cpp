#include <iostream>

using namespace std;

int main()
{
	// Tipe integer
	int data[] = {4, 1, 9, 6, 2};
	int jumlah_element = 5;

	int total = 0;
	for (int i = 0; i < jumlah_element; i++) { total += data[i];
	}

	double rata_rata = static_cast<double>(total) / jumlah_element;

	cout << "Rata-rata dari barisan bilangan adalah: " << rata_rata << endl;

	return 0;
}