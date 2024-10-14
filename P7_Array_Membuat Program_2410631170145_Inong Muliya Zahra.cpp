#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Masukkan elemen array ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    //Mencari nilai tertinggi dalam array
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    //Menampilkan nilai tertinggi
    cout << "Nilai tertinggi dalam array adalah: " << max << endl;

    //Meminta user memasukkan angka untuk dicari
    int angkaCari;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> angkaCari;

    //Mencari angka dalam array dan menampilkan indeksnya
    bool ditemukan = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == angkaCari) {
            cout << "Angka " << angkaCari << " ditemukan pada indeks ke-" << i << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Angka " << angkaCari << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
