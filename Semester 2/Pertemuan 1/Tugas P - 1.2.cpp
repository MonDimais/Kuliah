#include <iostream>
#include <string>
using namespace std;

void proses(const string input)
{
    char output[1000000];
    int itung = 1;
    int j = 0;
    int panjang = input.length();

    for(int i = 0; i < panjang; i++)
    {
        if(i + 1 < panjang && input[i] == input[i + 1])
        //mengecek character dalam string apakah sama dengan yang selanjutnya atau tidak
        {
            itung++;
        } else {
            output[j++] = input[i];
            //merubah array yang selanjutnya menjadi character yang baru jika characternya tidak sama
            output[j++] = '0' + itung;
            //memberi angka di array selanjutnya untuk penghitungan

            itung = 1;
        }
    }

    cout << "===================================================================\n";
    cout << "Hasil Dekompresasi = [";
    for(int i = 0; i < j; i++)
    {
        cout << "'" << output[i] << "'";
        if(i + 1 != j)
        //kondisi ini hanya opsional saja agar output koma dibagian akhir tidak ada
        {
            cout << ", ";
        }
    }
    cout << "]";

}

int main()
{
    string input;

    cout << "Masukkan String yang mau dikompresi : ";
    cin >> input;

    proses(input);

    cout << "\n===================================================================\n";
    cout << "Program ini dibuat oleh : Dimas Agung Fitriyanto";
    cout << "\n\t\t    NPM : 2310631170075";

}