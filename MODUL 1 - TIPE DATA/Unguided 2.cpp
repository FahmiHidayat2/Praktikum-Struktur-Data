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

