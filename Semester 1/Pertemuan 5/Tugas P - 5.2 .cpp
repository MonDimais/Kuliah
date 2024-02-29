#include <iostream>
using namespace std;

int num;

void sgtup(int n)
{
    int k;
    
    for(int i = 1; i <= n; i++)
    {
		
		for(k = i; k < n; k++){
			cout << " ";
		}
		
		for(k = 1; k <= (2 * i - 1); k++)
        {
			cout << "*";	
		}
		
		cout << "\n";
	}
}

void sgtdown(int n)
{
    for(int i = n; i >= 1; i--)
    {

        for(int j = n; j > i; j--)
        {
            cout << " ";
        }

        for(int k = 1; k <= i; k++)
        {
            cout << "*" << " ";
        }

        cout << endl;

    }   

}

int main()
{
    char ulang;
    int bentuk;

    while(true)
    {
        cout << "Pilih bentuk Segitiga\n1. Runcing atas atau 2. Runcing bawah = ";
        cin >> bentuk;

        switch (bentuk)
        {
        case 1:
            cout << "Masukkan tinggi segitiga = ";
            cin >> num;
            sgtup(num);
            break;
        
        case 2:
            cout << "Masukkan tinggi segitiga = ";
            cin >> num;
            sgtdown(num);
            break;

        default:
            "Masukkan Angka 1 atau 2";
            break;
        }

        cout << "Apakah kamu ingin mengulang lagi?\nKetik Y/N = ";
        cin >> ulang;

        if(ulang == 'y' or ulang == 'Y')
        {
            continue;
        }
        else if(ulang == 'n' or ulang == 'N')
        {
            cout << "Selamat Tinggal...";
            break;
        }
        else
        {
            cout << "Masukkan Huruf yang Valid!\n";
            continue;
        }

    }

    return 0;

}