// Nama    : Yermeyahu Ariel Minwary
// NIM     : 13225003
// Tanggal : Jumat, 6 Maret 2026

// Program Harshad
/* 
Menerima masukan bilangan N dan memeriksa apakah N habis dibagi oleh jumlah seluruh digit yang terdapat pada bilangan N. Jika N habis dibagi maka keluaran 1, jika tidak 0.
*/

#include<stdio.h>

int main(){
  // Kamus
  int N; // bilangan N
  int sum = 0; // jumlah seluruh digit bilangan N
  int temp; // bilangan sementara untuk perulangan menjumlahkan seluruh digit N ke sum.

  // Algoritma
  scanf("%d", &N); // menerima masukan bilangan N
  temp = N; // inisialisasi bilangan temp dengan N

  while (temp>0){ // pengulangan hingga bilangan temp kurang dari atau sama dengan 0
    sum += temp%10; // jika ya, tambahkan sum dengan digit terakhir bilangan temp
    temp = temp/10; // bagi temp dengan 10 lalu ulangi kembali
  }

  // periksa apakah bilangan N habis dibagi dengan jumlah seluruh digit bilangan N
  if (N%sum == 0) { // habis dibagi
    printf("1\n");
  } else { // tidak habis dibagi
    printf("0\n");
  }

  return 0;
}