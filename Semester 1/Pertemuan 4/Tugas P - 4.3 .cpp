#include <iostream>

using namespace std;

int main() {
	int num;
	long long int fst = 0;
	long long int snd = 1;
	//menggunakan long long int karena rumus kelipatan fibonacci akan menoutpu angka yang sangat besar
	//fst 0 snd 1 sebagai urutan yg pertam 0 dan kedua 1 dan akan ditambah oleh angka lanjutannya nanti
	
	cout << "Masukkan angka untuk deret Fibonacci : ";
	cin >> num;
	
	cout << "Deret Fibonacci nya adalah =\n";
	
	for(int i = 1; i <= num; i++){
		cout << fst << " ";
		
		long long int trd = fst + snd;
		fst = snd;
		snd = trd;
		//variable ke 3 untuk menghitung angka lanjutannya
		//dan disini di update angkanya
		//fst jadi snd / 0 jadi 1
		//snd jadi trd angka update nya / 0 + 1
	}
}