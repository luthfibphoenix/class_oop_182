#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "\nNama " << nama;
	}
};

class Matakuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMK() {

		cout << "\nMasukan jumlah SKS= ";
		cin >> sks;
		cout << "\nMasukan kode MK= ";
		cin >> kode;
		cout << "\nMasukan nama MK= ";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "\nJumlah sks= " << sks;
		cout << "\nKode Mk= " << kode;
		cout << "\nNama Mk= " << namaMK << endl;
	}
};

int main() {
	Mahasiswa mhs;
	Matakuliah MK;

	cout << "Masukan Nama= ";
	cin >> mhs.nama;
	cout << "Masukan NIM= ";
	cin >> mhs.nim;

	MK.inputMK();
	mhs.tampil();
	MK.tampilMK();
}