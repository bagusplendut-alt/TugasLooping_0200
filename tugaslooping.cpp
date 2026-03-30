#include <iostream>
using namespace std;

// --- Variabel Global ---
int n;
int pilihan;

// --- Function Pengecekan Bilangan Prima ---
bool isPrima(int angka) {
    if (angka <= 1) return false;
    int i = 2;
    while (i * i <= angka) {
        if (angka % i == 0) return false;
        i++;
    }
    return true;
}

// --- Function Pengecekan Bilangan Fibonacci ---
bool isFibonacci(int angka) {
    if (angka < 0) return false;
    int a = 0, b = 1;
    while (a < angka) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == angka);
}

// --- Prosedur Input Angka ---
void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> n;
}

// --- Prosedur Tampil Hasil ---
void tampilHasil(string jenis, bool hasil) {
    if (hasil) {
        cout << "Hasil: " << n << " ADALAH bilangan " << jenis << "." << endl;
    }
    else {
        cout << "Hasil: " << n << " BUKAN bilangan " << jenis << "." << endl;
    }
}

// --- Function Menu ---
void tampilMenu() {
    cout << "\n==============================" << endl;
    cout << "    PROGRAM PENGECEK BILANGAN  " << endl;
    cout << "==============================" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu (0-2): ";
    cin >> pilihan;
}

// --- Function Main ---
int main() {
    bool berjalan = true;

    while (berjalan) {
        tampilMenu();

        switch (pilihan) {
            case 1:
                inputAngka();
                tampilHasil("Prima", isPrima(n));
                break;
            case 2:
                inputAngka();
                tampilHasil("Fibonacci", isFibonacci(n));
                break;
            case 0:
                cout << "Terima kasih! Program selesai." << endl;
                berjalan = false;
                break;