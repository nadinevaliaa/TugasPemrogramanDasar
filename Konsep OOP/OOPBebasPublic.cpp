#include <iostream>
using namespace std;

// Deklarasi kelas
class Sensus {
public:
    string kabupaten;
    int juml_kecamatan;
    int juml_kelurahan;
    int juml_penduduk;

    // Metode untuk menampilkan informasi
    void sensus_wilayah() {
        cout << "---------- Sensus Wilayah Jawa Barat ----------" << endl;
        cout << "Nama Kabupaten: " << kabupaten << endl;
        cout << "Jumlah Kecamatan: " << juml_kecamatan << endl;
        cout << "Jumlah Kelurahan: " << juml_kelurahan << endl;
        cout << "Jumlah Penduduk: " << juml_penduduk << endl;
    }
};

int main() {
    // Membuat objek dari kelas Sensus
    Sensus wilayah;

    // Memberi nilai atribut objek
    wilayah.kabupaten = "Bekasi";
    wilayah.juml_kecamatan = 12;
    wilayah.juml_kelurahan = 56;
    wilayah.juml_penduduk = 2409083;

    // Memanggil metode untuk menampilkan informasi
    wilayah.sensus_wilayah();

    return 0;
};