#include <iostream>
#include <algorithm>
#include <cctype>
#include <windows.h>
using namespace std;

struct buku
{
    string judul;
    string pengarang;
    string jenisb;
    int stok;
};
struct node{
    string judul;
    node* next;
};
buku gudang[5][10000];
//0 = Komik, 1 = Novel, 2 = Buku Pelajaran, 3 = Buku Keagamaan, 4 = Lainnya
string clear;
int jenisb;
int numK = 0, numN = 0, numP = 0, numA = 0, numL = 0;

void preinput()
{
    string jenis;
    cout << "\t\t[KOMIK] [NOVEL] [PELAJARAN] [AGAMA] [LAINNYA]\n\n\tMasukkan Jenis Buku : ";
    cin >> jenis;
    cin.ignore();
    transform(jenis.begin(), jenis.end(), jenis.begin(), [](unsigned char c){return tolower(c); });
    if(jenis == "komik"){
        jenisb = 0;
    } else if(jenis == "novel"){
        jenisb = 1;
    } else if(jenis == "pelajaran"){
        jenisb = 2;
    } else if(jenis == "agama"){
        jenisb = 3;
    } else if(jenis == "lainnya"){
        jenisb = 4;
    } else {
        jenisb = 4;
    }
}

void input(int path, int num)
{
    cout << "\tMasukkan Judul Buku : ";
    getline(cin, gudang[path][num].judul);
    cout << "\tMasukkan Nama Pengarang : ";
    getline(cin, gudang[path][num].pengarang);
    cout << "\tMasukkan Stok Buku : ";
    cin >> gudang[path][num].stok;
    cout << "\n\n\t\tClear?...\n\t\t";
    cin >> clear;
    system("cls");
}

void output()
{
    int pilih;
    int jeanis;
    int num;
    int ulang = numK + numN + numP + numA + numL;
    string jeaniss;
    string cari;

    cout << "\n\tPilih Apa Yang Kamu Ingin Tampilkan\n";
    cout << "\t1. Tampilkan Semua Data Yang Ada\n";
    cout << "\t2. Tampilkan Semua Data Dalam Satu Jenis\n";
    cout << "\t3. Tampilkan Satu Data Buku Lengkap";
    cout << "\n\n\t\tPilih Angka : ";
    cin >> pilih;
    cin.ignore();
    switch (pilih)
    {
    case 1:
        if(ulang != 0){
            for(int i = 0; i < 5; i++)
            {
                for(int j = 0; j < ulang; j++)
                {
                    if(gudang[i][j].stok != 0){
                        cout << "\n\t[" << gudang[i][j].judul << "] - " << gudang[i][j].pengarang;
                        cout << endl;
                    }
                    
                }
            }
        } else {
            cout << "\n\tBelum Ada Data Yang Di input Sama Sekali";
            cout << "\n\n\t\tClear?...\n\t\t";
            cin >> clear;
            system("cls");
            return;
        }
        
        cout << "\n\n\t\tClear?...\n\t\t";
        cin >> clear;
        system("cls");
        break;
    
    case 2:
        if(ulang != 0){
            cout << "\tPilih Jenis Buku : ";
            cin >> jeaniss;
            transform(jeaniss.begin(), jeaniss.end(), jeaniss.begin(), [](unsigned char c){return tolower(c); });
            if(jeaniss == "komik"){
                jeanis = 0;
            } else if(jeaniss == "novel"){
                jeanis = 1;
            } else if(jeaniss == "pelajaran"){
                jeanis = 2;
            } else if(jeaniss == "agama"){
                jeanis = 3;
            } else if(jeaniss == "lainnya"){
                jeanis = 4;
            } else {
                jeanis = 4;
            }

            if(jeanis == 0){
                num = numK;
            } else if(jeanis == 1){
                num = numN;
            } else if(jeanis == 2){
                num = numP;
            } else if(jeanis == 3){
                num = numA;
            } else if(jeanis == 4){
                num = numL;
            }

            for(int i = 0; i < num; i++)
            {
                cout << "\t[" << gudang[jeanis][i].judul << "] - " << gudang[jeanis][i].pengarang;
                cout << "\n\n\t\tClear?...\n\t\t";
                cin >> clear;
                system("cls");
                break;
            }
        } else {
            cout << "\n\tBelum Ada Data Yang Di input Sama Sekali";
            cout << "\n\n\t\tClear?...\n\t\t";
            cin >> clear;
            system("cls");
            return;
        }
        
        cout << "\n\tTidak Ada Buku Dalam Kategori " << jeaniss;
        cout << "\n\n\t\tClear?...\n\t\t";
        cin >> clear;
        system("cls");
        break;

    case 3:
        if(ulang != 0){
            cout << "\tMasukkan Judul Buku : ";
            getline(cin, cari);
            for(int i = 0; i < 5; i++)
            {
                for(int j = 0; j < ulang; j++)
                {
                    if(cari == gudang[i][j].judul){
                        cout << "\tJudul : " << gudang[i][j].judul;
                        cout << "\n\tPengarang : " << gudang[i][j].pengarang;
                        cout << "\n\tJenis Buku : " << gudang[i][j].jenisb;
                        cout << "\n\tStok : " << gudang[i][j].stok;
                        cout << "\n\tAlamat Penyimpanan : " << &gudang[i][j];
                        cout << "\n\n\t\tClear?...\n\t\t";
                        cin >> clear;
                        system("cls");
                        break;
                    }
                    
                }
            }
        } else {
            cout << "\n\tBelum Ada Data Yang Di input Sama Sekali";
            cout << "\n\n\t\tClear?...\n\t\t";
            cin >> clear;
            system("cls");
            return;
        }
        
        cout << "Tidak Ada Buku Dengan Judul " << cari;
        cout << "\n\n\t\tClear?...\n\t\t";
        cin >> clear;
        system("cls");
        break;

    default:
        cout << "\n\tTolong Input Sesuai Yang Disediakan\n";
        break;
    }

}

void hapus()
{
    string cari;
    int ulang = numK + numN + numP + numA + numL;
    if(ulang != 0){
        cout << "\tMasukkan Judul Buku : ";
        getline(cin, cari);
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < ulang; j++)
            {
                if(cari == gudang[i][j].judul){
                    gudang[i][j].stok = 0;
                    for(int j = i; j < ulang - 1; j++){
                        gudang[i][j] = gudang[i][j + 1];
                    } if(i == 0){
                        numK -=1;
                    } else if(i == 1){
                        numN -=1;
                    } else if(i == 2){
                        numP -=1;
                    } else if(i == 3){
                        numA -=1;
                    } else if(i == 4){
                        numL -=1;
                    }
                    cout << "\tData Berhasil Dihapus";
                    cout << "\n\n\t\tClear?...\n\t\t";
                    cin >> clear;
                    system("cls");
                    return;
                }
                
            }
        }
    } else {
            cout << "\n\tBelum Ada Data Yang Di input Sama Sekali";
            cout << "\n\n\t\tClear?...\n\t\t";
            cin >> clear;
            system("cls");
            return;
    }
    
    cout << "\tBuku Dengan Judul " << cari << " Tidak Ada";
    cout << "\n\n\t\tClear?...\n\t\t";
    cin >> clear;
    system("cls");
}

void ambil(node** head, string judlnew)
{
    node* newNode = new node();
    node* last = *head;
    newNode -> judul = judlnew;
    newNode -> next = nullptr;

    if(*head == nullptr) {
        *head = newNode;
        return;
    }

    while(last -> next != nullptr){
        last = last -> next;
    }

    last -> next = newNode;
}

void outambil(node* nodes, int ambil) {
    while (nodes != nullptr) {
        cout << "\tStok Buku " << nodes -> judul << " Sudah Dikurangi " << ambil << endl;
        nodes = nodes -> next;
    }
    cout << endl;
}

int main()
{
    node* head = nullptr;
    string judl;
    int ulang;
    int hitung;
    int ambill;
    int pilih;
    int trial = 0;

    while (true)
    {
        if(trial == 0){
            cout << "\t\tMenu Pilihan\n\n";
            cout << "\t0. Keluar Dari Program\n";
            cout << "\t1. Masukkan Data Buku\n";
            cout << "\t2. Menampilkan Data Buku\n";
            cout << "\t3. Menghapus Data Buku\n";
            cout << "\t4. Mengambil Stok Buku\n";
            cout << "\n\n\t\tPilih Angka : ";
            cin >> pilih;
            cin.ignore();
            cout << endl;
        } else {
            cout << "\t\tMenu Pilihan\n\n";
            cout << "\t0. Keluar Dari Program\n";
            cout << "\t1. Masukkan Data Buku\n";
            cout << "\t2. Menampilkan Data Buku\n";
            cout << "\t3. Menghapus Data Buku\n";
            cout << "\n\n\t\tPilih Angka : ";
            cin >> pilih;
            cin.ignore();
            cout << endl;
        }
        

        if (pilih == 0){
            break;
        }
        
        switch (pilih)
        {
            case 1:
                preinput();
                if(jenisb == 0){
                    input(jenisb, numK);
                    gudang[jenisb][numK].jenisb = "KOMIK";
                    numK +=1;
                } else if(jenisb == 1){
                    input(jenisb, numN);
                    gudang[jenisb][numN].jenisb = "NOVEL";
                    numN +=1;
                } else if(jenisb == 2){
                    input(jenisb, numP);
                    gudang[jenisb][numP].jenisb = "PELAJARAN";
                    numP +=1;
                } else if(jenisb == 3){
                    input(jenisb, numA);
                    gudang[jenisb][numA].jenisb = "AGAMA";
                    numA +=1;
                } else if(jenisb == 4){
                    input(jenisb, numL);
                    gudang[jenisb][numL].jenisb = "LAINNYA";
                    numL +=1;
                }
                break;

            case 2:
                output();
                break;

            case 3:
                hapus();
                break;

            case 4:
                cout << "\tMasukkan Jumlah Buku Yang Ingin Diambil Stoknya : ";
                cin >> ulang;
                cin.ignore();
                for (int i = 0; i < ulang; i++)
                {
                    cout << "\tMasukkan Judul Buku Ke - " << i + 1 << " : ";
                    getline(cin, judl);
                    for(int i = 0; i < 5; i++)
                    {
                        for(int j = 0; j < ulang; j++)
                        {
                            if(judl == gudang[i][j].judul){
                                    cout << "\tBerapa Banyak Kamu ingin Mengambil Buku : ";
                                    cin >> ambill;
                                    gudang[i][j].stok -= ambill;
                                    ambil(&head, judl);
                                    hitung +=1;
                                    break;
                            }
                        }
                    }
                }
                cout << endl;
                outambil(head, ambill);
                if(hitung < ulang){
                    cout << "\tMaaf " << ulang - hitung << " Data Buku Tidak Ditemukan";
                }
                trial += 1;
                cout << "\n\n\t\tClear?...\n\t\t";
                cin >> clear;
                system("cls");
                break;
            
            default:
                cout << "\tTolong Input Data Dengan Benar";
                break;
        }

        continue;
    }

    return 0;

}