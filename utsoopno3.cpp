#include <iostream>
#include <string>

class RekeningBank {
public:
    std::string namaPemilik;
    std::string nomorRekening;
    double saldoRekening;

public:
    // Constructor untuk menginisialisasi properti
    RekeningBank(std::string nama, std::string nomor, double saldo)
        : namaPemilik(nama), nomorRekening(nomor), saldoRekening(saldo) {}

    // Metode untuk menambah saldo rekening
    void tambahSaldo(double jumlah) {
        saldoRekening += jumlah;
        std::cout << "Saldo berhasil ditambahkan. Saldo sekarang: " << saldoRekening << std::endl;
    }

    // Metode untuk mengurangi saldo rekening
    void kurangiSaldo(double jumlah) {
        if (jumlah <= saldoRekening) {
            saldoRekening -= jumlah;
            std::cout << "Penarikan berhasil. Saldo sekarang: " << saldoRekening << std::endl;
        } else {
            std::cout << "Saldo tidak mencukupi untuk melakukan penarikan." << std::endl;
        }
    }

    // Metode untuk menampilkan saldo rekening
    void tampilkanSaldo() {
        std::cout << "Saldo rekening untuk " << namaPemilik << " (" << nomorRekening << "): " << saldoRekening << std::endl;
    }
};

int main() {
    // Membuat objek RekeningBank
    RekeningBank rekening("Ilma ", "1234567890", 1000.0);

    // Menampilkan saldo awal
    rekening.tampilkanSaldo();

    // Menambah saldo
    rekening.tambahSaldo(500.0);

    // Mengurangi saldo
    rekening.kurangiSaldo(200.0);

    // Menampilkan saldo setelah operasi
    rekening.tampilkanSaldo();

    return 0;
}
