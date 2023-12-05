#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Mahasiswa {
public:
    string nama;
    string nomorInduk;
    vector<pair<string, double>> catatanAkademik; // Pasangan mata kuliah dan nilai

public:
    Mahasiswa(string nm, string nim) : nama(nm), nomorInduk(nim) {}

    // Getter untuk Nama dan Nomor Induk
    string getNama() const {
        return nama;
    }

    string getNomorInduk() const {
        return nomorInduk;
    }

    // Menambah mata kuliah beserta nilai ke dalam catatan akademik
    void tambahMataKuliah(string mataKuliah, double nilai) {
        catatanAkademik.push_back(make_pair(mataKuliah, nilai));
        cout << "Mata kuliah " << mataKuliah << " dengan nilai " << nilai << " berhasil ditambahkan." << endl;
    }

    // Menghapus mata kuliah dari catatan akademik
    void hapusMataKuliah(string mataKuliah) {
        auto it = find_if(catatanAkademik.begin(), catatanAkademik.end(),
                          [mataKuliah](const pair<string, double>& elem) {
                              return elem.first == mataKuliah;
                          });

        if (it != catatanAkademik.end()) {
            catatanAkademik.erase(it);
            cout << "Mata kuliah " << mataKuliah << " berhasil dihapus." << endl;
        } else {
            cout << "Mata kuliah tidak ditemukan." << endl;
        }
    }

    // Menampilkan catatan akademik
    void tampilkanCatatanAkademik() const {
        cout << "Catatan Akademik Mahasiswa:" << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nomor Induk: " << nomorInduk << endl;

        if (catatanAkademik.empty()) {
            cout << "Belum ada mata kuliah yang diambil." << endl;
        } else {
            cout << "Daftar Mata Kuliah dan Nilai:" << endl;
            for (const auto& entry : catatanAkademik) {
                cout << "- " << entry.first << ": " << entry.second << endl;
            }

            // Menampilkan rata-rata nilai
            double totalNilai = 0.0;
            for (const auto& entry : catatanAkademik) {
                totalNilai += entry.second;
            }

            double rataRata = totalNilai / catatanAkademik.size();
            cout << "Rata-rata Nilai: " << rataRata << endl;
        }
    }
};

int main() {
    Mahasiswa mahasiswa("John Doe", "123456789");

    mahasiswa.tambahMataKuliah("Matematika", 95);
    mahasiswa.tambahMataKuliah("Fisika", 70);
    mahasiswa.tambahMataKuliah("Kimia", 80);
    mahasiswa.hapusMataKuliah("Kimia");
    mahasiswa.tampilkanCatatanAkademik();

    return 0;
}