#include <iostream>
#include <string>

class Mobil {
public:
    std::string nama;
    std::string model;
    double kecepatan;

public:
    // Constructor untuk menginisialisasi properti
    Mobil(std::string nm, std::string mdl, double kec)
        : nama(nm), model(mdl), kecepatan(kec) {}

    // Metode untuk mempercepat mobil
    void percepat(double tambahanKecepatan) {
        kecepatan += tambahanKecepatan;
        std::cout << nama << " dipercepat menjadi " << kecepatan << " km/jam." << std::endl;
    }

    // Metode untuk memperlambat mobil
    void perlambat(double penguranganKecepatan) {
        if (kecepatan - penguranganKecepatan >= 0) {
            kecepatan -= penguranganKecepatan;
            std::cout << nama << " diperlambat menjadi " << kecepatan << " km/jam." << std::endl;
        } else {
            kecepatan = 0;
            std::cout << nama << " berhenti." << std::endl;
        }
    }

    // Metode untuk menampilkan informasi mobil
    void tampilkanInfo() {
        std::cout << "Informasi " << nama << " (" << model << "): Kecepatan " << kecepatan << " km/jam." << std::endl;
    }
};

int main() {
    // Membuat objek Mobil
    Mobil mobil1("Mobil A", "Sedan", 60.0);

    // Menampilkan informasi awal mobil
    mobil1.tampilkanInfo();

    // Mempercepat mobil
    mobil1.percepat(20.0);

    // Memperlambat mobil
    mobil1.perlambat(15.0);

    // Menampilkan informasi setelah operasi
    mobil1.tampilkanInfo();

    return 0;
}
