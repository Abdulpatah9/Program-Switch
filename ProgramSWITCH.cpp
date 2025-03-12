// Program matematika sederhana menggunakan pernyataan switch-case
// Abdul Patah NIM 230401010308

#include <iostream>
using namespace std;

int main() {
    // Deklarasi Variabel - Untuk menyimpan dua bilangan, Pilihan operasi,  dan Hasil
    int bil1, bil2, pilihan, hasil;

    // Meminta pengguna untuk memasukan dua bilangan
    cout <<"Masukan Bilangan 1: ";
    cin >> bil1;
    cout <<"Masukan Bilangan 2: ";
    cin >> bil2;

    // Menampilkan pilihan operasi yang tersedia
    cout << "\n(Pilihan: 1=Tambah, 2=Kurang, 3=Kali)\n";
    cout << "Masukan Pilihan: ";
    cin >> pilihan;

   // Menggunakan switch case untuk menentukan operasi yang dipilih
   switch (pilihan) {
        case 1:
            hasil = bil1 + bil2; // Penjumlahan
            cout << "Hasilnya adalah: " << hasil << endl;
            break;
        case 2:
            hasil = bil1 - bil2; // Pengurangan
            cout << "Hasilnya adalah: " << hasil << endl;
            break;
        case 3:
            hasil = bil1 * bil2; // perkalian
            cout << "Hasilnya adalah: " << hasil << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl; // untuk pilihan tidak valid
            break;    
   }
   return 0; // mengakhiri program dengan status sukses
}   