#include <iostream>

using namespace std;

int main() {
	int A;
	int B;
	int C;
	
	cout << "Masukan tiga angka berbeda \n";
	cin >> A;
	cin >> B;
	cin >> C;
	//disini saya menggunakan cara yang di ajarkan pak oman pas pertemuan ke 2
	int mac = A;
	//membuat variable baru sebagai tempat angka terbesar
	if (B > mac){
		mac = B;
	}
	//lalu di cek satu satu dengan angka lain apakah lebih besar atau tidak
	if (C > mac){
		mac = C;
	}
	//kalau lebih besar maka variable mac di isi dengan angka yang lebih besar
	cout << "Angka terbesar dari ketiga angka tersebut adalah " << mac;
	
	return 0;
}