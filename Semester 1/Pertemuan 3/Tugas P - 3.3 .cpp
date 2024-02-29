#include <iostream>

using namespace std;

int main() {
    int bangun;
    int pg;
    int lb;
    int hasil;
    //variable yang digunakan
    
    cout << "Persegi (1) - Persegi Panjang (2) - Segitiga (3)\nApa yang mau kamu hitung : ";
    cin >> bangun;
    //untuk mendapatkan input case
    
    switch (bangun){
        case 1 :
        //persegi menggunakan rumus p * l
            cout << "Masukan panjang persegi : \n";
            cin >> pg;
            cout << "Masukan lebar persegi : \n";
            cin >> lb;
            //saya akan menggunakan if else disini agar case 2 jadi jelas kegunaannya
            if (pg == lb){
	            hasil = pg * lb;
	            cout << "Luas perseginya adalah " << hasil << endl;
	            break;
            }
            else {
            	cout << "Kalau mau menghitung persegi panjang masukan angka 2!";
            	//persegi setiap sisi harus sama ukurannya
            	// kalau beda namanya persegi panjang
            	break;
            }
        case 2 :
        // sama aja rumusnya seperti persegi cuma seharusnya angka panjang dan lebarnya beda p * l
            cout << "Masukan panjang persegi panjang : \n";
            cin >> pg;
            cout << "Masukan lebar persegi panjang : \n";
            cin >> lb;
            hasil = pg * lb;
            cout << "Luas persegi panjangnya adalah " << hasil << endl;
            break ;
            
        case 3 :
        // rumusnya 1/2 * alas * tinggi
            cout << "Masukan alas segitiga : \n";
            cin >> pg;
            cout << "Masukan tinggi segitiga : \n";
            cin >> lb;
            //saya tetap menggunakan variable pg sama lb agar tidak perlu membuat variable lagi
            hasil = 0.5 * pg * lb;
            //0.5 pengganti 1/2
            cout << "Luas segitiganya adalah " << hasil << endl;
            break;
            
		default :
		//case lain ketika input tidak valid
			cout << "Tolong masukan angka 1 / 2 / 3";
			break;
    }
    return 0;
}