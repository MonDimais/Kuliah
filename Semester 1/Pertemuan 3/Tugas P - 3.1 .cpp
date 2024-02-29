#include <iostream>

using namespace std;

int main() {
	int score;
	
	cout << "Masukan score mu : \n";
	cin >> score;
	//mendapatkan nilai score
	
	if (score > 90){
		cout << "Anda mendapat nilai A";
	}
	//cek score pertama, kalau lebih besar dari 90 output A
	else if (score > 80 and score <= 89){
		cout << "Anda mendapat nilai B";
	}
	//kalau lebih besar dari 80 dan lebih kecil atau sama dengan 89 dapet B
	else if (score > 70 and score <= 79){
		cout << "Anda mendapat nilai C";
	}
	//kalau lebih besar dari 70 dan lebih kecil atau sama dengan 79 dapet C
	else if (score > 60 and score <= 69){
		cout << "Anda mendapat nilai D";
	}
	//kalau lebih besar dari 60 dan lebih kecil atau sama dengan 69 dapet D
	else {
		cout << "Anda mendapat nilai E";
	}
	//tidak perlu menggunakan kondisi karena semua kondisi yang dibutuhkan sudah ditulis
	//di atas 90 atau sampai tak terbatas
	//karena variablenya int, jadi ketika user menginput sesuatu yang bukan angka akan di anggap nol.
	return 0;
}