#include <stdio.h>
#include "hitung_umur.h"

void main() {
    int tahun_sekarang = 2022;
    int tahun_lahir = 1999;

    // menggunakan fungsi dari hitung_umur.h
    int umur = hitung_umur(tahun_lahir, tahun_sekarang);

    printf("Umur kamu %d tahun", umur);
}
