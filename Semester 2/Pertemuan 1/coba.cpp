#include <iostream>
#include <string> // Untuk menggunakan tipe data string
using namespace std;

void kompresiKarakter(const string& input) {
    // Asumsikan output maksimal tidak akan lebih dari 2 kali ukuran input
    char output[200];
    int count = 1; // Inisialisasi penghitung
    int j = 0; // Index untuk output
    int size = input.length(); // Mendapatkan ukuran string input

    for (int i = 0; i < size; i++) {
        if (i + 1 < size && input[i] == input[i + 1]) {
            count++; // Inkremen penghitung jika karakter berurutan sama
        } else {
            // Jika tidak sama atau di akhir string, tambahkan karakter dan penghitung ke output
            output[j++] = input[i];
            // Konversi count menjadi karakter dan tambahkan ke output
            output[j++] = '0' + count; // '0' + count untuk mengubah int menjadi char
            count = 1; // Reset penghitung untuk grup karakter berikutnya
        }
    }

    // Output hasil kompresi
    cout << "Output = [";
    for (int k = 0; k < j; k++) {
        cout << "'" << output[k] << "'";
        if (k + 1 != j) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    string input;
    cout << "Masukkan string: ";
    cin >> input; // Membaca input dari user

    kompresiKarakter(input);

    return 0;
}
