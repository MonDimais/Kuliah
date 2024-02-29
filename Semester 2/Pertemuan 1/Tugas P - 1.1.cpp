#include <iostream>
using namespace std;

string output[10000000];

void masukkannama(int daftar)
{
    string nama;
    
    for (int i = 0; i < daftar; i++)
    {
        cout << "Masukkan nama untuk siswa ke " << i+1 << " : ";
        cin >> nama;
        cout << endl;
        output[i] = nama;
    }
}

void outputlist(int daftar)
{
    cout << "===================================================================\n";
    cout << "Nama Siswa \t\t\t Alamat pada Komputer\n";
    cout << "===================================================================\n";
    for(int i = 0; i < daftar;i++)
    {
        cout << output[i] << "\t\t\t\t" << &output[i] << endl;
    }
}

int main(){

    int daftar;

    cout << "Masukkan angka seberapa banyak siswa yang ingin di list : ";
    cin >> daftar;

    masukkannama(daftar);
    outputlist(daftar);

    cout << "\n===================================================================\n";
    cout << "Program ini dibuat oleh : Dimas Agung Fitriyanto";
    cout << "\n\t\t    NPM : 2310631170075";

}