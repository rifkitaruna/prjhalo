#include <iostream>
#include <string>
using namespace std;

int main() {
    // Inisialisasi array string untuk 5 nama
    string nama[5];

    // Memasukkan 5 nama
    nama[0] = "rifki";
    nama[1] = "belfadilah";
    nama[2] = "raka";
    nama[3] = "dustyn";
    nama[4] = "fuad";

    // Menampilkan isi array
    cout << "Daftar nama:\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    return 0;
}