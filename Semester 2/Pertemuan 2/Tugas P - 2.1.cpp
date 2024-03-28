#include <iostream>
#include <windows.h>
using namespace std;

struct datas
    {
        string nama;
        int jumlah;
    };
datas tabel[1000][1000];
string namabara[1000];
string clear;

void input(int listbar, int jumhari)
{
    string namabar;
    int jumbara;
    for(int k = 0; k < listbar; k++)
    {
        cout << "Masukkan nama barang yang ingin dimasukkan " << k+1 << ". ";
        k-1;
        cin >> namabara[k];
    }

    for(int i = 0; i < jumhari; i++)
    {
        cout << "\nHari ke - " << i+1 << endl;
        i-1;    
        
        for(int k = 0; k < listbar; k++)
        {
            cout << "Masukkan jumlah barang untuk " << namabara[k] << " : ";
            cin >> tabel[i][k].jumlah;
            tabel[i][k].nama = namabara[k];
        }
    }
    cout << "\nClear?\n";
    cin >> clear;
    system("cls");
}

void output(int listbar, int jumhari)
{
    for(int i = 0; i < jumhari; i++)
    {
        cout << "\nList data hari ke - " << i+1 << endl;
        i-1;

        for(int k = 0; k < listbar; k++)
        {
            cout << "=> " << tabel[i][k].nama << endl;
            cout << "Jumlah barang : " << tabel[i][k].jumlah << endl;
            cout << "Alamat barang pada komputer : " << &tabel[i][k] << endl << endl;
        }
    }
    cout << "\nClear?\n";
    cin >> clear;
    system("cls");
}

void outputsatu(int hari, int kobar)
{
    hari -= 1;
    kobar -= 1;
    cout << "=> " << tabel[hari][kobar].nama << endl;
    cout << "Jumlah barang : " << tabel[hari][kobar].jumlah << endl;
    cout << "Alamat barang pada komputer : " << &tabel[hari][kobar] << endl << endl;
    cout << "\nClear?\n";
    cin >> clear;
    system("cls");
}

int main()
{
    int listbar;
    int jumhari;
    int hari;
    int kobar;
    char pilihan;

    cout << "\nMasukkan seberapa banyak jumlah barang yang ingin di input : ";
    cin >> listbar;
    cout << "Masukkan rentang hari data yang ingin di masukkan : ";
    cin >> jumhari;
    cout << endl;

    input(listbar, jumhari);

    while(true)
    {
        cout << "\t\t\tApa yang ingin kamu lakukan?";
        cout << "\nOuput semua data yang ada(O) Output salah satu data(S) Keluar(K)\n\t\t\t";
        cin >> pilihan;
        
        if (pilihan == 'O' or pilihan == 'o')
        {
            output(listbar, jumhari);
        } else if (pilihan == 'S' or pilihan == 's')
        {
            cout << "\nMasukkan angka untuk harinya : ";
            cin >> hari;
            cout << "Masukkan kode barang yang ingin dicari : ";
            cin >> kobar;
            outputsatu(hari, kobar);
        } else if (pilihan == 'K' or pilihan == 'k')
        {
            cout << "\n\t\t\tSelamat Tinggal....";
            break;
        } else {
            cout << "\n\t\t\tInput Salah! Coba Lagi\n";
            continue;
        }
        
    }
    
    

}