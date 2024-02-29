#include <iostream>

using namespace std;

//Fungsi untuk memunculkan garis pembatas
//Ngapain selalu bikin ulang pas butuh, ketika kita bisa bikin function
void pembatas(int n){
	//int n buat ngasih tempat data baru pas manggil
	//karena variable limit gk bisa dipake di luar int main
	
	cout << "\n";
	for(int i = 1; i <= n + 40; i++){
		cout << "=";
	}
	cout << "\n\n";
}
//jadi ntar garisnya nambah sesuai panjangnya limit yg dimasukan
	
int main() {
	int limit;
	int ttlgenap = 0;
	int ttlganjil = 0;
	int ttlprima = 0;
	// = 0 agar lebih jelas ditulis 0 dan untuk menghindari output yang tidak diinginkan
	
	cout << "Masukkan batas angka : ";
	cin >> limit;
	
	pembatas(limit);
	//data limit dimasukan disini
	
	cout << "Bilangan genap dari 0 - " << limit << " = \n";
	for(int i = 2; i <= limit; i += 2){
		cout << i << " ";
		ttlgenap += i;
	}
	//loopnya mulai dari 2 dan di tambah 2 setiap pengulangan agar genap
	//dan memasukkan data update looping terbaru di akhir ke total
	
	cout << "\nTotal penjumlahan semua bilangan genap = " << ttlgenap;
	cout << "\nFaktor total bilangan genap = 1\n1";
	
	for(int i = 2; i <= ttlgenap; i++){
		if(ttlgenap % i == 0){
		//totalnya akan di cek dengan if module kalo gk ada sisa maka pembaginya atau faktornya masuk
		//dimulai dari 2 karena 1 sudah pasti ada
			cout << ", " << i;
		}
	}
	cout << "\n";
	
	pembatas(limit);
	
	cout << "Bilangan ganjil dari 0 - " << limit << " = " << endl;
	for(int i = 1; i <= limit; i += 2){
		cout << i << " ";
		ttlganjil += i;
	}
	//dimulai dari 1 dan ditambah 2 setiap perulangan agar ganjil
	
	cout << "\nTotal penjumlahan semua bilangan ganjil = " << ttlganjil;
	
	cout << "\nFaktor total bilangan ganjil = 1\n1";
	
	for(int i = 2; i <= ttlganjil; i++){
		if(ttlganjil % i == 0){
			cout << ", " << i;
		}
	}	
	cout << "\n";
	
	pembatas(limit);
	
	cout << "Bilangan prima dari 0 - " << limit << " = " << endl;
	
	for(int i = 2; i <= limit; i++){
		//akan "limit" kali looping
		
		int prima = 1;
		//untuk statement if nanti, true
		//true berarti i = bilangan prima
		
		for(int p = 2; p * p <= i; p++){
			//false maka skip dan keluar dari loop
			//true berlanjut ke if bawah
			
			if(i % p == 0){
				prima = 0;
				break;
			//kalo true if statement ke false lalu keluar dari loop dengan break
			//code loop selesai
			
			}
		}
		
		if(prima){
			cout << i << " ";
			ttlprima += i;
		//kalo true akan output i / bil prima
		//lalu memasukkan datanya ke total
		
		}
	}
	
	cout << "\nTotal penjumlahan semua bilangan prima = "<< ttlprima;
	
	cout << "\nFaktor total bilangan prima =\n1";
	for (int i = 2; i <= ttlprima; i++)
	{
		if (ttlprima % i == 0)
		{
			cout << ", " << i;
		}
		
	}
	
	cout << endl;
	
}