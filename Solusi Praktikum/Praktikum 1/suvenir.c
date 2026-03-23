// Nama    : Yermeyahu Ariel Minwary
// NIM     : 13225003
// Tanggal : Jumat, 6 Maret 2026

// Program Suvenir
/* 
Menerima masukan bilangan N, lalu memberikan luaran berupa segitiga yang berisi angka-angka berurutan dengan banyak angka setiap baris ke-n adalah n angka.
*/

#include<stdio.h>

int main(){
  // Kamus
  int N; // bilangan N
  int count; // pencacah banyak proses atau langkah perubahan tingkat energi

  // Algoritma
  count = 1; // inisialisasi

  scanf("%d", &N); // menerima masukan bilangan N

  for(int i=0; i<N; i++){ // pengulangan pertama untuk baris
    for(int j=0; j<=i; j++){ // pengulangan kedua untuk mencetak setiap bilangan
      printf("%d", count);
      count++; // pencacah bertambah setiap selesai ditampilkan
      if(j!=i) printf(" "); // menampilkan spasi jika masih ada bilangan yang dicetak pada baris yang sama
    }
    printf("\n"); // mencetak baris baru setelah baris saat ini selesai
  }

  return 0;
}