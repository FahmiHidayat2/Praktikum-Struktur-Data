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

