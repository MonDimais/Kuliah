#include <iostream>
using namespace std;

int main() {
    int firstValue = 10;
    int secondValue = 8;
    int thirdValue;
    int firstVInput;
    int secondVInput;
// menentukan variabel

	for (int i = 0; i < 60; i++){
		cout << "-";
	}
	
	cout << "\nMenukar dengan Variabel tambahan" << "\nSebelum ditukar: firstValue = " << firstValue << ", secondValue = " << secondValue << endl << endl;
	
	thirdValue = firstValue;
	// isi first value dipindah ke third = 10
	firstValue = secondValue;
	//isi second ke first = 8
	secondValue = thirdValue;
	// isi third ke second = 10
	
   cout << "Sesudah di tukar: firstValue = " << firstValue << ", secondValue = " << secondValue << endl;

	for (int i = 0; i < 60; i++){
		cout << "-";
	}
	
	//saya pindahin ke posisi awal dulu buat yg tanpa value tambahan
	thirdValue = firstValue;
	firstValue = secondValue;
	secondValue = thirdValue;
	// firstValue = 10 , secondValue = 8
	
    cout << "Menukar tanpa Variabel tambahan" << "\nSebelum ditukar: firstValue = " << firstValue << ", secondValue = " << secondValue << endl << endl;
    
// saatnya menukar tanpa variabel tambahan
    firstValue = firstValue + secondValue;
    //variable first diupdate 10 + 8
    secondValue = firstValue - secondValue;
    // variable second di update 18 - 8
    firstValue = firstValue - secondValue;
    // yang terakhir jadi 18 - 10

    cout << "Sesudah di tukar: firstValue = " << firstValue << ", secondValue = " << secondValue << endl;
    
    	for (int i = 0; i < 60; i++){
		cout << "-";
	}
	cout << "\nCARA INI BISA DIGUNAKAN BERAPAPUN JUMLAHNYA\n(Batas 10 Digit Angka)" << endl;
	
	cout << "Masukan Angka pertama A : ";
	cin >> firstVInput;
	cout << "Masukan Angka kedua B : ";
	cin >> secondVInput;
	cout << "Angka sebelum ditukar. A = "<< firstVInput << " B = " << secondVInput << endl;
	
	/* menukar dengan cara yang sama
		a = a + b
		b = a - b
		a = a - b
					*/
	firstVInput = firstVInput + secondVInput;
	secondVInput = firstVInput - secondVInput;
	firstVInput = firstVInput - secondVInput;
	
	cout << "Angka setelah ditukar. A = " << firstVInput << " B = " << secondVInput;
	
    return 0;
}