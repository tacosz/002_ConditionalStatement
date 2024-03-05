#include <iostream>
using namespace std;

int main() {
	int nilaiMTK, nilaiBHS, nilaiFisika;
	string status;
	float rerata;

	cout << "Masukkan Nilai Matematika :" << endl;
	cin >> nilaiMTK;
	cout << "Masukkan Nilai Bahasa :" << endl;
	cin >> nilaiBHS;
	cout << "Masukkan Nilai Fisika :" << endl;
	cin >> nilaiFisika;

	rerata = (nilaiMTK + nilaiBHS + nilaiFisika) / 3;

	if (nilaiMTK > 70 || rerata > 60) {
		status = "Lulus";
		if (nilaiFisika >= 90)
			status = "Lulusan Terbaik";
	}
	else {
		status = "Tidak Lulus";
	}

	cout << " Nilai Matematika : " << nilaiMTK << endl;
	cout << " Nilai Bahsa : " << nilaiBHS << endl;
	cout << " Nilai Fisika : " << nilaiFisika << endl;
	cout << " Status kelulusan : " << status;
}
