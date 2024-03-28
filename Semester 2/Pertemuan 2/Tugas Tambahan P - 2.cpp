#include <iostream>
using namespace std;

int main()
{
    int arrA [] = {1, 2, 3, 4, 5};
    int arrB [] = {10, 20, 30, 40, 50};
    int hasil[5];

    for(int i = 0; i < 5; i++)
    {
        hasil[i] = arrA[i] * arrB[i];
    }65

    for(int i = 0; i < 5; i++)
    {
        cout << arrA[i] << " * " << arrB[i] << " = " << hasil[i] << endl; 
    }

}