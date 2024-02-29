#include<iostream>

using namespace std;

int main() {
    int N, M;
    // menentukan variabel

    cout << "Masukan jumlah Bebek : ";
    cin >> N;
    // input jumlah bebek

    cout << "Masukan jumlah Teman : ";
    cin >> M;
    // input jumlah teman
    for (int i = 0; i < 40; i++){
    	cout << "-";
    }

        int bebman = N / M;
        //membuat variabel baru dengan nama bebman (bebekteman)
        // jumlah bebek dibagi jumlah teman
        int sisa = N % M;
        //membuat variabel baru dengan nama sisa
        // jumlah bebek dibagi jumlah teman tapi memberikan sisa dari pembagian tersebut

        cout << "\nPak Tatang akan memberi " << bebman << " bebek \nuntuk setiap satu orang dari " << M << " Teman." << endl;

        cout << "Sisa bebek yang dimiliki Pak Tatang " << sisa;

    return 0;
}