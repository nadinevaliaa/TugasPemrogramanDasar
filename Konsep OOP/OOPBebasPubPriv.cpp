#include <iostream>
#include <string>
using namespace std;

class Sensus {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string kabupaten;
    int juml_kecamatan;
    int juml_kelurahan;
    int juml_penduduk;
    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    Sensus (std::string kab, int kec, int kel, int pend) {
        kabupaten = kab;
        juml_kecamatan = kec;
        juml_kelurahan = kel;
        juml_penduduk = pend;
    }

    // Setter untuk mengatur kabupaten
    void setKabupaten(std::string kab) {
        kabupaten = kab;
    }

    // Getter untuk mendapatkan nama
    std::string getKabupaten() {
        return kabupaten;
    }

    // Setter untuk mengatur jumlah kecamatan
    void setKecamatan(int kec) {
        juml_kecamatan = kec;
    }

    // Getter untuk mendapatkan jumlah kecamatan
    int getKecamatan() {
        return juml_kecamatan;
    }

    // Setter untuk mendapatkan jumlah kelurahan
    void setKelurahan (int kel) {
        juml_kelurahan = kel;
    }

    // Getter untuk mendapatkan jumlah kelurahan
     int getKelurahan() {
        return juml_kelurahan;
    }

    // Setter untuk mendapatkan jumlah penduduk
    void setPenduduk (int pend) {
        juml_penduduk = pend;
    }

    // Getter untuk mendapatkan jumlah penduduk
     int getPenduduk() {
        return juml_penduduk;
    }

    // Metode untuk menampilkan perkenalan diri
    void sensus_wilayah() {
        cout << "---------- Sensus Wilayah Jawa Barat ----------" << endl;
        cout << "Nama Kabupaten: " << kabupaten << endl;
        cout << "Jumlah Kecamatan: " << juml_kecamatan << endl;
        cout << "Jumlah Kelurahan: " << juml_kelurahan << endl;
        cout << "Jumlah Penduduk: " << juml_penduduk << endl;
    }
};

int main() {

    // Membuat objek sensus wilayah 1
    Sensus w1("Bekasi", 12 , 56, 2409083);
    w1.sensus_wilayah();

    // Membuat objek sensus wilayah 2
    Sensus w2("Bandung", 30 , 151, 2693500);
    w2.sensus_wilayah();
   
    return 0;
}