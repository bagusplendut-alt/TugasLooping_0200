#include <iostream>
using namespace std;

// --- Variabel Global ---
int n;
int pilihan;

// --- Function Pengecekan Bilangan Prima ---
bool isPrima(int angka) {
    if (angka <= 1) return false;