#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 23, 50, 69, 35, 78, 12, 90, 7, 43}; // List Array
    int n = 10; // Jumlah elemen dalam array

    if (n > 0) {
        int maxang = arr[0]; // Ambil nilai pertama sebagai nilai maksimum awal
        int maxin = 0; // Indeks nilai maksimum awal

        // Mencari nilai maksimum dalam array
        for (int i = 1; i < n; ++i) {
            if (arr[i] > maxang) {
                maxang = arr[i];
                maxin = i;
            }
        }

        // Menampilkan hasil
        cout << "Nilai tertinggi dalam array adalah: " << maxang << endl;
        cout << "Indeks nilai tertinggi: " << maxin << endl;

    } else {

        cout << "Array kosong." << endl;
        
    }

    return 0;
}
