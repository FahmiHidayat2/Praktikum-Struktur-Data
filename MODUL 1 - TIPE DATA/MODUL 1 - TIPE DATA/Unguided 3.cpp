#include <iostream>
#include <map>
using namespace std;

int main() {
    // Membuat objek map yang memiliki tipe key string (nama mahasiswa) dan value float (nilai mahasiswa)
    map<string, float> nilaiMahasiswa;

    // Menambahkan data ke dalam map
    nilaiMahasiswa["Fahmi"] = 85.5;
    nilaiMahasiswa["Hidayat"] = 90.0;
    nilaiMahasiswa["Budi"] = 75.3;

    // Mengakses dan menampilkan data dari map
    cout << "Nilai Fahmi: " << nilaiMahasiswa["Fahmi"] << endl;
    cout << "Nilai Hidayat: " << nilaiMahasiswa["Hidayat"] << endl;
    cout << "Nilai Budi: " << nilaiMahasiswa["Budi"] << endl;

    return 0;
}

