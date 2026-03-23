// Nama    : Yermeyahu Ariel Minwary
// NIM     : 13225003
// Tanggal : Jumat, 6 Maret 2026

// Program Pinus
/* 
Menerima masukan bilangan n, lalu memnampilkan pinus dengan ukuran n.
*/

#include<stdio.h>

int main(){
  // Kamus
  int n; // bilangan n

  // Algoritma
  scanf("%d", &n); // menerima masukan bilangan n

  for(int i = 1; i<n; i++){ // pengulangan untuk bagian atas pohon pinus
    for(int j = i; j<=n; j++){ // pengulangan untuk setiap baris yang ada di bagian atas pohon pinus
      for(int k = 1; k<=n-j; k++){ // pengulangan untuk mencetak spasi
        printf(" ");
      }
      for(int k = 1; k<=j; k++){ // pengulangan untuk mencetak bintang di sebelah kiri (puncak ke bawah termasuk ke sebelah kiri)
        printf("*");
      }
      for(int k = 1; k<j; k++){ // pengulangan untuk menecetak bintang di sebelah kanan
        printf("*");
      }
      printf("\n"); // cetak baris baru setelah baris saat ini selesai
    }
  }

  for(int i = 0; i<n; i++){ // pengulangan untuk mencetak batang
    for(int j = 0; j<n-2; j++){ // pengulangan untuk mencetak spasi
      printf(" ");
    }
    printf("***\n"); // cetak batang
  }

  return 0;
}