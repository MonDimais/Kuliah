#include <iostream>
#include <windows.h>
using namespace std;

struct mahasiswa
{
    long long int npm;
    string nama;
    struct nilaimhs
    {
        int absen;
        int tugas;
        int uts;
        int uas;
    }nilai;
    int nilaiakhir;
    char index;
};
mahasiswa tabeldata[1000];
int num = 0;
string clear;

void input()
{

    cout << "Masukkan NPM Mahasiswa : ";
    cin >> tabeldata[num].npm;
    cin.ignore();
    cout << "Masukkan Nama Mahasiswa : ";
    getline(cin, tabeldata[num].nama); 
    cout << "Masukkan Nilai Absen : ";
    cin >> tabeldata[num].nilai.absen;
    cout << "Masukkan Nilai Tugas : ";
    cin >> tabeldata[num].nilai.tugas;
    cout << "Masukkan Nilai UTS : ";
    cin >> tabeldata[num].nilai.uts;
    cout << "Masukkan Nilai UAS : ";
    cin >> tabeldata[num].nilai.uas;

    tabeldata[num].nilaiakhir = (tabeldata[num].nilai.absen * 0.1) + (tabeldata[num].nilai.tugas * 0.2);
    tabeldata[num].nilaiakhir = (tabeldata[num].nilai.uts * 0.3) + (tabeldata[num].nilai.uas * 0.4);

    if(tabeldata[num].nilaiakhir > 80)
    {
        tabeldata[num].index = 'A';
    } else if(tabeldata[num].nilaiakhir <= 80 and tabeldata[num].nilaiakhir > 70)
    {
        tabeldata[num].index = 'B';
    } else if(tabeldata[num].nilaiakhir <= 70 and tabeldata[num].nilaiakhir > 60)
    {
        tabeldata[num].index = 'C';
    } else if(tabeldata[num].nilaiakhir <= 60)
    {
        tabeldata[num].index = 'D';
    }
    num += 1;

    cout << "Data Berhasil Di Input\n";
    cout << "Clear?...\n";
    cin >> clear;
    system("cls");
    
}

void output()
{
    if(num != 0)
    {
        for(int i = 0; i < num; i++)
        {
            cout << "NPM = " << tabeldata[i].npm;
            cout << "\nNama = " << tabeldata[i].nama;
            cout << "\nNilai Absen = " << tabeldata[i].nilai.absen;
            cout << "\nNilai Tugas = " << tabeldata[i].nilai.tugas;
            cout << "\nNilai UTS = " << tabeldata[i].nilai.uts;
            cout << "\nNilai UAS = " << tabeldata[i].nilai.uas;
            cout << "\nNilai Akhir = " << tabeldata[i].nilaiakhir;
            cout << "\nIndex = " << tabeldata[i].index;
            cout << "\n=============================================================\n";
        }  
    } else {
        cout << "Saat Ini Belum Ada Data Yang Di Input Sama Sekali";
    }
    cout << "\nClear?...\n";
    cin >> clear;
    system("cls");
}

void ubah()
{
    long long int cek;
    char pilih;

    cout << "Untuk Mencari Data Mahasiswa Masukkan NPM : ";
    cin >> cek;
    if(num != 0)
    {
        for(int i = 0; i < num; i++)
        {
            if(tabeldata[i].npm == cek)
            {
                cout << "Apa Kamu Yakin Ingin Mengubah Data Mahasiswa Dengan NPM " << cek;
                cout << " ?\n\t\tYa(Y)\t\tTidak(N)\n\t\t\t";
                cin >> pilih;

                if(pilih == 'Y' or pilih == 'y')
                {
                    cout << "Masukkan NPM Mahasiswa : ";
                    cin >> tabeldata[i].npm;
                    cin.ignore();
                    cout << "Masukkan Nama Mahasiswa : ";
                    getline(cin, tabeldata[i].nama); 
                    cout << "Masukkan Nilai Absen : ";
                    cin >> tabeldata[i].nilai.absen;
                    cout << "Masukkan Nilai Tugas : ";
                    cin >> tabeldata[i].nilai.tugas;
                    cout << "Masukkan Nilai UTS : ";
                    cin >> tabeldata[i].nilai.uts;
                    cout << "Masukkan Nilai UAS : ";
                    cin >> tabeldata[i].nilai.uas;

                    tabeldata[i].nilaiakhir = (tabeldata[i].nilai.absen * 0.1) + (tabeldata[i].nilai.tugas * 0.2);
                    tabeldata[i].nilaiakhir = (tabeldata[i].nilai.uts * 0.3) + (tabeldata[i].nilai.uas * 0.4);

                    if(tabeldata[i].nilaiakhir > 80)
                    {
                        tabeldata[i].index = 'A';
                    } else if(tabeldata[i].nilaiakhir <= 80 and tabeldata[i].nilaiakhir > 70)
                    {
                        tabeldata[i].index = 'B';
                    } else if(tabeldata[i].nilaiakhir <= 70 and tabeldata[i].nilaiakhir > 60)
                    {
                        tabeldata[i].index = 'C';
                    } else if(tabeldata[i].nilaiakhir <= 60)
                    {
                        tabeldata[i].index = 'D';
                    }

                    cout << "Data Berhasil Di Input\n";
                    cout << "Clear?...\n";
                    cin >> clear;
                    system("cls");
                    return;
                } else if(pilih == 'N' or pilih == 'n')
                {
                    cout << "Anda Akan Di Kembalikan Ke Menu Utama";
                    cout << "\nClear?...\n";
                    cin >> clear;
                    system("cls");
                    return;
                } else {
                    cout << "Anda Akan Di Kembalikan Ke Menu Utama";
                    cout << "\nClear?...\n";
                    cin >> clear;
                    system("cls");
                    return;
                }
            } 
        }
    } else {
        cout << "Saat Ini Belum Ada Data Yang Di Input Sama Sekali";
        cout << "\nClear?...\n";
        cin >> clear;
        system("cls");
        return;
    }
    cout << "Data Mahasiswa Tidak Ditemukan...";
    cout << "\nClear?...\n";
    cin >> clear;
    system("cls");
}

void hapus()
{
    long long int cek;
    char pilih;

    cout << "Untuk Mencari Data Mahasiswa Masukkan NPM : ";
    cin >> cek;
    if(num != 0)
    {
        for(int i = 0; i < num; i++)
        {
            if(tabeldata[i].npm == cek)
            {
                cout << "Apa Kamu Yakin Ingin Mengubah Data Mahasiswa Dengan NPM " << cek;
                cout << " ?\n\t\tYa(Y)\t\tTidak(N)\n\t\t\t";
                cin >> pilih;

                if(pilih == 'Y' or pilih == 'y')
                {
                    
                    for(int j = i; j < num - 1; j++)
                    {
                        tabeldata[j] = tabeldata[j + 1];
                    }
                    num--;
                    cout << "Data Berhasil Di Hapus\n";
                    cout << "Clear?...\n";
                    cin >> clear;
                    system("cls");
                    return;
                } else if(pilih == 'N' or pilih == 'n')
                {
                        cout << "Anda Akan Di Kembalikan Ke Menu Utama";
                        cout << "\nClear?...\n";
                        cin >> clear;
                        system("cls");
                        return;
                } else {
                        cout << "Anda Akan Di Kembalikan Ke Menu Utama";
                        cout << "\nClear?...\n";
                        cin >> clear;
                        system("cls");
                        return;
                    }
                } 
            }
    } else {
        cout << "Saat Ini Belum Ada Data Yang Di Input Sama Sekali";
        cout << "\nClear?...\n";
        cin >> clear;
        system("cls");
        return;
    }
    cout << "Data Mahasiswa Tidak Ditemukan...";
    cout << "\nClear?...\n";
    cin >> clear;
    system("cls");
}


int main()
{
    char pilih;

    while (true)
    {
        cout << "Program ini dibuat oleh :\n";
        cout << "Dimas Agung Fitriyanto\nNPM : 2310631170075\n===================\n";
        cout << "\tMenu CRUD \n";
        cout << "C = Input data mahasiswa\nR = Tampilkan data Mahasiswa\n";
        cout << "U = Ubah data mahasiswa\nD = Hapus data mahasiswa\nK = Keluar dari program\n  = ";
        cin >> pilih;

        if(pilih == 'C' or pilih == 'c')
        {
            input();
            continue;
        } else if(pilih == 'R' or pilih == 'r')
        {
            output();
            continue;
        } else if(pilih == 'U' or pilih == 'u')
        {
            ubah();
            continue;
        } else if(pilih == 'D' or pilih == 'd')
        {
            hapus();
            continue;
        } else if(pilih == 'K' or pilih == 'k')
        {
            cout << "Selamat Tinggal...\n";
            break;
        } else {
            cout << "Coba lagi\n";
            continue;
        }
    }
    
}