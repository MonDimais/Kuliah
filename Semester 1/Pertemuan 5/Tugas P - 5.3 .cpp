#include <iostream>
using namespace std;

int num;
long long int fst = 0;
long long int snd = 1;

void fibo(int n)
{
	
	for(int i = 1; i <= num; i++)
    {
		cout << fst << " ";
		
		long long int trd = fst + snd;
		fst = snd;
		snd = trd;

    }

}

int main()
{
    char ulang;
    while (true)
    {
        cout << "Masukkan batas angka untuk deret Fibonaccinya = ";
        cin >> num;

        cout << "Deret Fibonacci nya adalah =\n";

        fibo(num);

        cout << "\nApakah kamu ingin mencoba lagi?\nketik Y/N = ";
        cin >> ulang;

        if(ulang == 'y' || ulang == 'Y')
        {
            //Reset ulang isi variabel fst dan snd
            fst = 0;
            snd = 1;
            continue;
        }
        else if(ulang == 'n' || ulang == 'N')
        {
            cout << "Goodbye...";
            break;
        }
        else
        {
            cout << "Masukkan huruf yang valid!\n";
            break;
        }
    }
    
    return 0;

}