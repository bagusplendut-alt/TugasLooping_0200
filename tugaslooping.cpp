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