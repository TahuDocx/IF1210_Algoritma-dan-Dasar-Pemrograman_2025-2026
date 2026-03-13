// Nama    : Yermeyahu Ariel Minwary
// NIM     : 13225003
// Tanggal : Jumat, 6 Maret 2026

// Program Portal
/* 
Menerima masukan bilangan N, lalu memproses bilangan N (perubahan tingkat energi) dengan dibagi 2 jika genap atau jika ganjil dikali 3 dan ditambah 1. Proses diulang hingga bilangan N menjadi 1. 
*/

#include<stdio.h>

int main(){
  // Kamus
  int N; // bilangan N
  int count; // pencacah banyak proses atau langkah perubahan tingkat energi

  // Algoritma
  count = 0; // inisialisasi

  scanf("%d", &N); // menerima masukan bilangan N, first element

  while (N!=1){
    if (N%2) { // ganjil
      N = 3*N + 1; // next-element
    } else { // genap
      N = N/2; // next-element
    }
    count++; // langkah bertambah
  }

  printf("%d\n", count); // cetak luaran

  return 0;
}