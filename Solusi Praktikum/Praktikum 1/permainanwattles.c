// Nama    : Yermeyahu Ariel Minwary
// NIM     : 13225003
// Tanggal : Jumat, 6 Maret 2026

// Program PermainanWattles
/* 
Menerima masukan bilangan D dan M. D adalah bilangan milik Deeper dan M adalah bilangan milik Mebel. Kedua bilangan akan dikurangi oleh jumlah dari digit pertama dan digit terakhir bilangan lawannya. Proses terus berulang hingga salah satu bilangan negatif, kedua bilangan menjadi sama, atau kedua bilangan negatif bersamaan.
*/

#include<stdio.h>

int main(){
  // Kamus
  int D, M; // bilangan N
  int pemenang; // bilangan penanda siapa pemenang
  int D_pertama, D_terakhir; // digit pertama dan terakhir milik Deeper
  int M_pertama, M_terakhir; // digit pertama dan terakhir milik Mebel

  // Algoritma
  pemenang = 0; // inisialisasi

  scanf("%d %d", &D, &M); // menerima masukan bilangan D dan M


  while (D>=0 && M>=0 && D != M){
    // mencari digit terakhir untuk kedua bilangan
    D_terakhir = D % 10;
    M_terakhir = M % 10;
    
    // inisialisasi proses pencarian digit pertama
    D_pertama = D;
    M_pertama = M;

    while(D_pertama/10 > 0){ // mencari digit pertama bilangan milik Deeper
      D_pertama /= 10;
    }
    
    while(M_pertama/10 > 0){ // mencari digit pertama bilangan milik Mebel
      M_pertama /= 10;
    }

    // bilangan milik Deeper dan Mebel dikurangi oleh jumlah digit pertama dan terakhir bilangan lawannya
    D -= (M_pertama + M_terakhir);
    M -= (D_pertama + D_terakhir);
  }

  // Terminasi
  if ( D == M || (D<0 && M<0) ) { // periksa apakah Wattles yang menang
    pemenang = 2;
  } else if (D<0 && M>=0) { // periksa apakah Mebel yang menang
    pemenang = 1;
  } else if (D>=0 && M<0)  pemenang = 3; // periksa apakah Deeper yang menang
  
  // cetak pemenang
  if(pemenang == 1){
    printf("Mebel\n");
  } else if (pemenang == 3) {
    printf("Deeper\n");
  } else {
    printf("Wattles\n");
  }
  return 0;
}