#include <iostream>

using namespace std;

int main()
{
	int second = 3781;
	int jam = second / 3600;
	int sisa_detik = second % 3600;
	int menit = sisa_detik / 60;
	int detik = sisa_detik / 60;

	cout << "waktu: " << jam << "jam, " << menit << "menit, " << detik << "detik, " << endl;

	return 0;
}
