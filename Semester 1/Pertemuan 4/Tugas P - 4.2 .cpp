#include <iostream>
using namespace std;

int main(){
	int num;
	int i;
	int k;
	
	cout << "Masukkan tinggi segitiga : ";
	cin >> num;
	//perulangan untuk barisnya
	//"num"" kali perulangan
	
	for(i = 1; i <= num; i++){
		//dibawah ini adalah sebuah perulangan dalam perulangan
		//kondisi pertama adalah i = 1 akan digunakan untuk rotasi pertama
		//perulangan untuk space
		
		for(k = i; k < num; k++){
			cout << " ";
		}
		//perulangan untuk "*''
		
		for(k = 1; k <= (2 * i - 1); k++){
						//rumus perlipatan ganjil
						//karena ganjil punya angka tengah sebagai ujung tajam sebuah segitiga
			cout << "*";
			
		}
		
		cout << "\n";
		//disini akan balik ke awal perulangannya dan di update i = 2 dan seterusnya sampai i = num
		
	}
	
	return 0;
}