#include <iostream>
using namespace std;

void transpose(int arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void pembalik(int arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0, k = n - 1; j < k; j++, k--) {
            swap(arr[i][j], arr[i][k]);
        }
    }
}

void output(int arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Masukkan ukuran matrix n x n: ";
    cin >> n;
    int arr[100][100];

    cout << "Masukkan elemen matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            cout << "\b\b\e\e ";
        }
        cout << endl;
    }

    cout << "Matrix sebelum diputar 90 derajat searah jarum jam:\n";
    output(arr, n);

    transpose(arr, n);
    pembalik(arr, n);

    cout << "Matrix setelah diputar 90 derajat searah jarum jam:\n";
    output(arr, n);

}