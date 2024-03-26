
# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Fahmi Hidayat</p>

## Dasar Teori
Data merupakan sesuatu yang dibutuhkan oleh program agar dapat menjalankan suatu 
perintah. Tipe data menetapkan apa jenis data yang dapat disimpan dan dimanipulasi dalam
program. Ada beberapa jenis tipe data yaitu sebagai berikut :
## 1.Tipe Data Primitif:

 Tipe data primitif merujuk pada jenis data dasar yang disediakan oleh bahasa pemrograman untuk merepresentasikan nilai sederhana seperti angka, karakter, dan boolean. Tipe data primitif biasanya memiliki ukuran tetap dan memori yang dialokasikan secara langsung. Contoh tipe data primitif umum meliputi:

#### a.Integer: Untuk merepresentasikan bilangan bulat seperti 1, 2, -3, dst.
#### b.Floating Point: Untuk merepresentasikan bilangan pecahan seperti 3.14, 2.718, dst.
#### c.Char: Untuk merepresentasikan satu karakter seperti 'a', 'b', dst.
#### d.Boolean: Untuk merepresentasikan nilai kebenaran, yaitu true atau false.
Tipe data primitif umumnya memiliki operasi khusus yang dapat dilakukan langsung pada nilai tersebut, seperti operasi aritmatika untuk integer atau floating point, dan operasi logika untuk boolean.

## 2.Tipe Data Abstrak:
Tipe data abstrak merujuk pada jenis data yang didefinisikan oleh pengguna atau bahasa pemrograman yang tidak hanya menyimpan nilai tunggal, tetapi juga menyediakan operasi dan perilaku tertentu untuk mengakses dan memanipulasi data tersebut. Tipe data abstrak menyembunyikan detail implementasi dari pengguna, dan hanya menyediakan antarmuka untuk berinteraksi dengan data tersebut. Contoh tipe data abstrak meliputi:

#### a.   Stack: Sebuah struktur data yang mengikuti prinsip LIFO (Last In, First Out).
#### b.   Queue: Sebuah struktur data yang mengikuti prinsip FIFO (First In, First Out).
#### c.   Linked List: Sebuah struktur data yang terdiri dari serangkaian simpul di mana setiap simpul memiliki dua bagian, yaitu data dan referensi ke simpul berikutnya dalam urutan.
#### d.   tree: Sebuah struktur data hierarkis yang terdiri dari simpul-simpul terhubung di mana setiap simpul memiliki satu simpul induk dan nol atau lebih simpul anak.
Implementasi tipe data abstrak dapat berbeda-beda tergantung pada bahasa pemrograman yang digunakan, tetapi antarmuka umumnya tetap sama.
## 3.Tipe Data Koleksi:
Tipe data koleksi adalah tipe data yang digunakan untuk menyimpan kumpulan nilai dalam satu variabel. Tipe data ini memungkinkan Anda untuk menyimpan banyak nilai dalam satu struktur data dan mengaksesnya secara bersamaan. Tipe data koleksi sering digunakan saat Anda perlu mengelola banyak data dengan cara yang terstruktur. Contoh tipe data koleksi meliputi:

#### a.Array: Sebuah struktur data yang menyimpan kumpulan nilai dengan jenis data yang sama dan diakses menggunakan indeks.
#### b.List: Sebuah struktur data yang menyimpan urutan nilai yang dapat berubah dan diakses menggunakan indeks.
#### c.Set: Sebuah struktur data yang menyimpan kumpulan nilai unik tanpa adanya urutan.
#### d.Map (atau Dictionary): Sebuah struktur data yang memetakan kunci ke nilai, memungkinkan Anda untuk menyimpan dan mengambil nilai berdasarkan kunci yang terkait.
Tipe data koleksi memungkinkan penggunaan operasi seperti penambahan, penghapusan, pencarian, dan iterasi terhadap kumpulan nilai yang disimpan.







## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream> // mengizinkan program menggunakan Input dan Output
using namespace std; // memungkinkan penggunaan fungsi dan objek dalam namespace std, cin, dan cout.

// membuat code inti atau main code
int main()
{
    char op; //op digunakan untuk menyimpan operator mtk yang diinputkan
    cout<<"Selamat datang di kalkulator digital by Fahmi"<<endl<<endl;
    cout<<"Gunakanlah dengan baik"<<endl;
    float num1, num2; //menginisiasi num1 dan num2 yang akan digunakan

    cout << "Masukkan operator: "; // meminta inputan operator
    cin >> op;

    cout << "Masukkan nomor pertama: "; 
    cin >> num1;

    cout << "Masukkan nomor kedua: "; 
    cin >> num2;

    switch(op) //statement yang mengevaluasi nilai dari variabel pada op
    {
        //kasus yang akan dieksekusi sesuai dengan inputan pengguna.
        //case 1
    case '+': // jika inputan berupa +
        cout << "Hasil: " << num1 + num2;
        break;
        // case 2
    case '-': // jika inputan berupa -
        cout << "Hasil: " << num1 - num2;
        break;
        // case 3
    case '*': // jika inputan berupa *
        cout << "Hasil: " << num1 * num2;
        break;
        // case 4
    case '/': // jika inputan berupa /
        if (num2 != 0) //jika kondisi num2 tidak sama dengan 0
            cout << num1 / num2;
        else //ketika inputan num2 adalah 0 maka error.
            cout << "Error! Dibagi dengan 0!";
        break;
        //case 5
    default: //jika operator yang diinputkan tidak ada maka masuk kesini
        cout << "Operator tidak ditemukan. Silakan coba lagi!";
    }

    return 0; //inisiasi bahwa program telah selesai berjalan normal
}

```
Program di atas adalah sebuah kalkulator sederhana yang dibuat menggunakan bahasa pemrograman C++. Program ini meminta pengguna untuk memasukkan operator matematika (+, -, *, /) dan dua bilangan. Setelah menerima input, program akan mengevaluasi operator yang dimasukkan oleh pengguna dan melakukan operasi matematika yang sesuai. Operasi yang didukung adalah penjumlahan, pengurangan, perkalian, dan pembagian. Jika pembagian dilakukan dengan nol sebagai pembagi, program akan menampilkan pesan kesalahan.

Setelah mengevaluasi operator dan melakukan operasi yang sesuai, program akan menampilkan hasilnya. Jika operator yang dimasukkan tidak valid, program akan memberikan pesan kesalahan. Setelah menampilkan hasil, program selesai dan mengembalikan nilai 0, menandakan bahwa program telah berjalan dengan sukses.

### Output
(![Screenshot 2024-03-26 231908](https://github.com/FahmiHidayat2/Praktikum-Struktur-Data-Modul-1/assets/161399477/07914962-ffde-405f-8557-64286aa005ca)

### 2.Tipe Data Abstrak

```C++
#include <iostream>
using namespace std;

struct mahasiswa
{
	const char *nama;
	const char *alamat;
	int usia;
	
};

int main(){
	
	struct mahasiswa mhs1, mhs2;
	
	mhs1.nama = "Fahmi";
	mhs1.alamat = "Purbalingga";
	mhs1.usia = 19;
	mhs2.nama = "Hidayat";
	mhs2.alamat = "Karanganyar";
	mhs2.usia = 20;
	
	cout<<"Mahasiswa 1\n";
	cout<<"Nama: " << mhs1.nama <<endl; 
	cout<<"Alamat: " << mhs1.alamat <<endl; 
	cout<<"Usia: " << mhs1.usia <<endl; 
	
	cout<<"Mahasiswa 2\n";
	cout<<"Nama: " << mhs2.nama <<endl; 
	cout<<"Alamat: " << mhs2.alamat <<endl; 
	cout<<"Usia: " << mhs2.usia <<endl; 
	
	return 0;
	
	
	
}
```
Program di atas adalah contoh penggunaan struktur (struct) dalam bahasa pemrograman C++. Struktur yang didefinisikan adalah (mahasiswa), yang memiliki tiga anggota: (nama), (alamat), dan (usia). Setelah mendefinisikan struktur, program kemudian membuat dua variabel (mhs1) dan (mhs2) dengan tipe (mahasiswa).

Kemudian, program menginisialisasi nilai untuk masing-masing anggota dari kedua variabel menggunakan operator `.` (titik). Setelah menginisialisasi nilai, program mencetak informasi tentang setiap mahasiswa ke layar dengan menggunakan `cout`.

Setelah mencetak informasi, program selesai dan mengembalikan nilai 0, menandakan bahwa program telah berjalan dengan sukses. Dalam outputnya, program akan menampilkan nama, alamat, dan usia dari dua mahasiswa yang telah didefinisikan sebelumnya.

### Output
<img width="367" alt="image" src="https://github.com/FahmiHidayat2/Praktikum-Struktur-Data-Modul-1/assets/161399477/2e17bcd2-d701-4688-9bab-fda2c1205d11">

### 3. Tipe Data Koleksi

```C++
#include <iostream>

using namespace std;
int main(){
	
	int nilai[5];
	nilai[0] = 23;
	nilai[1] = 50;
	nilai[2] = 34;
	nilai[3] = 78;
	nilai[4] = 90;
	
	cout << "isi array pertama adalah :" << nilai[0] << endl;
	cout << "isi array kedua adalah :" << nilai[1] << endl;
	cout << "isi array ketiga adalah :" << nilai[2] << endl;
	cout << "isi array keempat adalah :" << nilai[3] << endl;
	cout << "isi array kelima adalah :" << nilai[4] << endl;
	return 0;
	
	
}
```
Program di atas merupakan contoh penggunaan array dalam bahasa pemrograman C++. Array (nilai) yang dideklarasikan memiliki panjang 5, yang berarti array tersebut dapat menyimpan 5 nilai berturut-turut.

Kemudian, program menginisialisasi nilai-nilai pada setiap elemen array menggunakan indeks array. Setelah nilai-nilai diinisialisasi, program mencetak nilai-nilai tersebut ke layar menggunakan (cout).

Setelah mencetak nilai-nilai, program selesai dan mengembalikan nilai 0, menandakan bahwa program telah berjalan dengan sukses. Dalam outputnya, program akan menampilkan isi dari setiap elemen array (nilai), mulai dari indeks 0 hingga indeks 4.
## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. 
Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari 
materi tipe data primitif!

```C++
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

```
Program di atas merupakan contoh penggunaan tipe data primitif float dalam bahasa pemrograman C++ untuk menghitung luas dan keliling persegi. Program ini memanfaatkan dua fungsi, yaitu hitungLuasPersegi dan hitungKelilingPersegi, yang menerima panjang sisi sebagai argumen dan mengembalikan hasil perhitungan. Dengan menggunakan tipe data primitif, program dapat menyimpan nilai sederhana seperti panjang sisi dan hasil perhitungan luas serta keliling. Kesimpulannya, tipe data primitif memungkinkan program untuk melakukan operasi matematika sederhana dan menyimpan nilai dengan ukuran tetap.
### Output:
<img width="399" alt="image" src="https://github.com/FahmiHidayat2/Praktikum-Struktur-Data-Modul-1/assets/161399477/6b0cba63-e6c2-4d7d-b1ba-ca764214870e">

### 2.Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

#### Class:

Class adalah sebuah blueprint atau cetakan untuk membuat objek yang mendefinisikan data dan fungsi terkait dalam satu unit. Dalam class, Anda dapat mendefinisikan atribut dan metode. Class memberikan kontrol akses terhadap data dan metode dengan kata kunci private, protected, dan public.

#### Struct:

Struct adalah kumpulan variabel yang dikemas bersama dalam satu unit. Anggota dari struct secara default memiliki hak akses public. Struct biasanya digunakan untuk menyimpan data terkait dalam satu unit.
```C++
#include <iostream>
using namespace std;

// Deklarasi class
class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Metode untuk menghitung luas
    int area() {
        return length * width;
    }

    // Metode untuk menghitung keliling
    int perimeter() {
        return 2 * (length + width);
    }
};

// Deklarasi struct
struct Triangle {
    int base;
    int height;
};

// Fungsi untuk menghitung luas segitiga
int area(Triangle tri) {
    return 0.5 * tri.base * tri.height;
}

int main() {
    // Membuat objek dari class Rectangle
    Rectangle rect(5, 4);

    // Menggunakan metode untuk menghitung luas dan keliling persegi
    cout << "Luas Persegi: " << rect.area() << endl;
    cout << "Keliling Persegi: " << rect.perimeter() << endl;

    // Membuat objek dari struct Triangle
    Triangle tri = {6, 8};

    // Menggunakan fungsi untuk menghitung luas segitiga
    cout << "Luas Segitiga: " << area(tri) << endl;

    return 0;
}
```
Dalam program di atas, kita memiliki sebuah class Rectangle yang digunakan untuk merepresentasikan persegi panjang. Class ini memiliki atribut length dan width, serta metode area() dan perimeter() untuk menghitung luas dan keliling persegi panjang.

Selain itu, kita juga memiliki sebuah struct Triangle yang digunakan untuk merepresentasikan segitiga. Struct ini memiliki atribut base dan height, serta sebuah fungsi area() untuk menghitung luas segitiga.

Dalam fungsi main(), kita membuat objek dari class Rectangle dan objek dari struct Triangle, lalu menggunakan metode dan fungsi yang telah didefinisikan sebelumnya untuk menghitung luas dan keliling persegi panjang, serta luas segitiga. Dengan cara ini, kita menggabungkan penggunaan class dan struct dalam satu program.
### Output
<img width="407" alt="image" src="https://github.com/FahmiHidayat2/Praktikum-Struktur-Data-Modul-1/assets/161399477/67774506-e355-4dda-9280-dd5779cebf7b">

### 3.Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari 
array dengan map.

```C++
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
```
Program di atas menggunakan fungsi map dari C++ STL (Standard Template Library) untuk membuat kumpulan data yang terdiri dari pasangan kunci-nilai. Kunci dalam contoh ini adalah nama mahasiswa (string), sedangkan nilainya adalah nilai mahasiswa (float).

Perbedaan utama antara array dan map adalah sebagai berikut:

Array: Merupakan struktur data linear yang menyimpan elemen-elemen dengan indeks berurutan, dan memiliki ukuran tetap saat dideklarasikan. Array tidak dapat memiliki kunci yang bersifat asosiatif. Akses ke elemen array dilakukan menggunakan indeks.

Map: Merupakan struktur data yang menyimpan elemen-elemen dalam bentuk pasangan kunci-nilai, di mana setiap kunci unik terkait dengan satu nilai tertentu. Map tidak memiliki batasan ukuran saat dideklarasikan dan bisa secara dinamis menyesuaikan diri dengan penambahan elemen baru. Akses ke nilai dalam map dilakukan dengan menggunakan kunci.

Jadi, perbedaan utama antara array dan map adalah pada cara penyimpanan dan akses elemennya. Array menggunakan indeks untuk akses, sedangkan map menggunakan kunci untuk akses. Map lebih fleksibel karena memungkinkan penggunaan kunci yang bersifat asosiatif, sementara array memiliki ukuran tetap dan hanya bisa diakses dengan indeks berurutan.

### Output
<img width="406" alt="image" src="https://github.com/FahmiHidayat2/Praktikum-Struktur-Data-Modul-1/assets/161399477/9e238af7-b1b9-4066-8dc7-a761522f4246">

## Kesimpulan
Program-program yang disajikan mencakup konsep dasar tentang tipe data dalam pemrograman, khususnya dalam bahasa C++. Pertama, program menggunakan tipe data primitif untuk membuat kalkulator sederhana yang meminta pengguna untuk memasukkan operator matematika dan dua bilangan, kemudian melakukan operasi matematika yang sesuai. Kedua, struktur data, baik dalam bentuk class maupun struct, digunakan untuk merepresentasikan entitas yang lebih kompleks, seperti mahasiswa dengan atribut nama, alamat, dan usia. Terakhir, program menggunakan tipe data koleksi, yaitu map, untuk menyimpan nilai mahasiswa dengan menggunakan nama sebagai kunci. Perbedaan utama antara array dan map adalah bahwa array menyimpan data dengan indeks berurutan, sementara map menggunakan kunci untuk mengakses nilai. Dengan demikian, program-program tersebut memberikan gambaran tentang bagaimana tipe data digunakan dan dipahami dalam konteks pemrograman.

## Daftar Pustaka
[1]	R. A. Putawa, “Makna Filosofis Ketiadaan dan Relevansinya dengan Tipe Data Undefined pada Javascript,” J. Filsafat Indones., vol. 5, no. 1, pp. 80–86, 2022, doi: 10.23887/jfi.v5i1.41775.
