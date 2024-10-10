// Soal
// Sekarang, kita akan coba menyelesaikan soal yang sama dengan bantuan larik. Lengkapilah program di sebelah kanan menggunakan konsep yang telah kita pelajari.

#include <iostream>
using namespace std;

int main() {
    int luas[5];

    luas[0] = 225 * 335;
    luas[1] = 215 * 394;
    luas[2] = 198 * 400;
    luas[3] = 314 * 298;
    luas[4] = 299 * 278;

    int hasil = 0;

    for (int i = 0; i < 5; i++) {
        if (luas[i] >= 80000) {
            hasil++;
        }
    }

// Pada soal ini, kita telah belajar bahwa salah satu keunggulan array adalah: kita dapat menjalankan suatu kode yang sama pada setiap elemen pada array, dengan cara melakukan perulangan terhadap indeks-nya. Ini merupakan pola yang umum dipakai.
