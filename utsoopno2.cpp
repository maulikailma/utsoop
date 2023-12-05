#include<iostream>
#include<cmath>

class Tabung {
public:
    double jariJari;
    double tinggi;

public:
    // Constructor untuk menginisialisasi properti
    Tabung(double r, double h) : jariJari(r), tinggi(h) {}

    // Metode untuk menghitung volume tabung
    double hitungVolume() {
        return M_PI * pow(jariJari, 2) * tinggi;
    }

    // Metode untuk menghitung luas permukaan tabung
    double hitungLuasPermukaan() {
        return 2 * M_PI * jariJari * (jariJari + tinggi);
    }

    // Metode untuk menetapkan nilai jari-jari
    void setJariJari(double r) {
        jariJari = r;
    }

    // Metode untuk menetapkan nilai tinggi
    void setTinggi(double h) {
        tinggi = h;
    }

    // Metode untuk mendapatkan nilai jari-jari
    double getJariJari() {
        return jariJari;
    }

    // Metode untuk mendapatkan nilai tinggi
    double getTinggi() {
        return tinggi;
    }
};

int main() {
    // Membuat objek tabung
    Tabung tabung(5.0, 10.0);

    // Menampilkan nilai jari-jari dan tinggi awal
    std::cout << "Jari-jari awal: " << tabung.getJariJari() << std::endl;
    std::cout << "Tinggi awal: " << tabung.getTinggi() << std::endl;

    // Menghitung dan menampilkan volume tabung
    std::cout << "Volume tabung: " << tabung.hitungVolume() << std::endl;

    // Menghitung dan menampilkan luas permukaan tabung
    std::cout << "Luas permukaan tabung: " << tabung.hitungLuasPermukaan() << std::endl;

    // Mengubah nilai jari-jari dan tinggi
    tabung.setJariJari(7.0);
    tabung.setTinggi(15.0);

    // Menampilkan nilai jari-jari dan tinggi setelah diubah
    std::cout << "\nJari-jari setelah diubah: " << tabung.getJariJari() << std::endl;
    std::cout << "Tinggi setelah diubah: " << tabung.getTinggi() << std::endl;

    // Menghitung dan menampilkan volume tabung setelah diubah
    std::cout << "Volume tabung setelah diubah: " << tabung.hitungVolume() << std::endl;

    // Menghitung dan menampilkan luas permukaan tabung setelah diubah
    std::cout << "Luas permukaan tabung setelah diubah: " << tabung.hitungLuasPermukaan() << std::endl;

    return 0;
}
