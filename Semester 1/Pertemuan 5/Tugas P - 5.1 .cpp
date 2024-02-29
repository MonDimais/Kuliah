#include <iostream>
using namespace std;

int ttlgenap = 0;
int ttlganjil = 0;
int ttlprima = 0;

/*Gunanya fungsi itu bukan hanya agar sebuah kode lebih rapih, 
tapi juga agar sebuah kode itu bisa digunakan berkali kali*/

void pembatas(int n)
{
    for(int i = 1; i < n + 40; i ++)
    {
        cout << "=";
    }
}

void gnporgnj(int g, int l)
{
    if(g == 0)
    {
        cout << "Bilangan Genap dari 0 - " << l << " = \n";

        for(int i = 0; i <= l; i += 2)
        {
            cout << i << " ";
            ttlgenap += i;
        }

        cout << endl << "Total dari semua bilangan genap yang ada = ";
        cout << ttlgenap;
    }

    else if(g == 1)
    {
        cout << "Bilangan Ganjil dari 0 - " << l << " = \n";

        for(int i = 1; i <= l; i += 2)
        {
	        cout << i << " ";
	        ttlganjil += i;
	    }

        cout << endl << "Total dari semua bilangan ganjil yang ada = ";
        cout << ttlganjil;
    }
}

void fkrgnporgnj(int g, int l)
{
    if(g == 0)
    {
        cout << "Faktor Total Bilangan Genap = \n1";
        for(int i = 2; i <= l; i++)
        {
		    if(l % i == 0)
            {
			cout << ", " << i;
		    }
	    }	
    }

    else if(g == 1)
    {
        cout << "Faktor Total Bilangan Ganjil = \n1";
        for(int i = 2; i <= l; i++)
        {
		if(l % i == 0)
        {
			cout << ", " << i;
		}
	    }	
    }
}

void prima(int l)
{
    cout << "Bilangan prima dari 0 - " << l << " = " << endl;
    for(int i = 2; i <= l; i++){
		
		int prima = 1;
		
		for(int p = 2; p * p <= i; p++){
			
			if(i % p == 0){
				prima = 0;
				break;
			}
		}
		
		if(prima){
			cout << i << " ";
			ttlprima += i;
		
		}
	}
	
}

void fkrprima(int l)
{

    cout << "\nTotal penjumlahan semua bilangan prima = "<< l;
	cout << "\nFaktor total bilangan prima =\n1";
	for (int i = 2; i <= l; i++)
	{
		if (l % i == 0)
		{
			cout << ", " << i;
		}
		
	}
	
	cout << endl;
	
}

int main()
{
    int limit;

    pembatas(60);
    cout << "\nPerogram untuk mencari angka genap, ganjil dan prima dari user\n";
    cout << "Dan juga mencari faktor dari total penjumlahan angka genap, ganjil dan primanya \n";
    cout << "Masukkan batas angka yang ingin dicari = ";
    cin >> limit;
    pembatas(limit);
    cout << endl;
    gnporgnj(0, limit);
    cout << endl;
    fkrgnporgnj(0, ttlgenap);
    cout << endl;
    pembatas(limit);
    cout << endl;
    gnporgnj(1, limit);
    cout << endl;
    fkrgnporgnj(1, ttlganjil);
    cout << endl;
    pembatas(limit);
    cout << endl;
    prima(limit);
    fkrprima(ttlprima);
    pembatas(60);

    return 0;
}