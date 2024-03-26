#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi
float hitungLuasPersegi(float sisi) {
    return sisi * sisi;
}

// Fungsi untuk menghitung keliling persegi
float hitungKelilingPersegi(float sisi) {
    return 4 * sisi;
}

int main() {
    float sisi;
    
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;
    
    // Memanggil fungsi hitungLuasPersegi dan menampilkan hasilnya
    cout << "Luas persegi: " << hitungLuasPersegi(sisi) << endl;
    
    // Memanggil fungsi hitungKelilingPersegi dan menampilkan hasilnya
    cout << "Keliling persegi: " << hitungKelilingPersegi(sisi) << endl;
    
    return 0;
}

