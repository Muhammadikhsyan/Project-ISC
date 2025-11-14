#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Struktur data untuk menyimpan informasi produk
struct Produk {
    string namaProduk;
    double hargaPerUnit;
    int jumlahUnit;
    int unitTerjual;
};

// Fungsi untuk menginput data produk
void inputData(Produk data[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nama Produk ke-" << i + 1 << ": ";
        cin.ignore();
        getline(cin, data[i].namaProduk);
        cout << "Harga per-unit: ";
        cin >> data[i].hargaPerUnit;
        cout << "Jumlah Unit: ";
        cin >> data[i].jumlahUnit;
        cout << "Unit yang Terjual: ";
        cin >> data[i].unitTerjual;
        cout << endl; // Tambahkan spasi antar produk
    }
}

// Fungsi untuk menghitung total pendapatan
double hitungPendapatan(Produk data[], int n) {
    double totalPendapatan = 0;
    for (int i = 0; i < n; i++) {
        double pendapatan = data[i].hargaPerUnit * data[i].unitTerjual;
        cout << fixed << setprecision(0); // tanpa angka di belakang koma
        cout << "Pendapatan " << data[i].namaProduk << ": " << pendapatan << endl;
        totalPendapatan += pendapatan;
    }
    return totalPendapatan;
}

// Fungsi untuk menentukan kesimpulan
void tentukanKesimpulan(double modal, double totalPendapatan) {
    if (modal > totalPendapatan) {
        cout << "Bisnis mengalami kerugian dengan total: " << modal - totalPendapatan << endl;
    } else if (modal < totalPendapatan) {
        cout << "Bisnis mendapat keuntungan sebesar: " << totalPendapatan - modal << endl;
    } else {
        cout << "Tidak untung tidak rugi" << endl;
    }
}

int main() {
    int n;
    cout << "Jumlah produk yang dijual: ";
    cin >> n;

    Produk data[n];
    inputData(data, n);

    double modal;
    cout << "Modal: ";
    cin >> modal;

    double totalPendapatan = hitungPendapatan(data, n);
    cout << fixed << setprecision(0);
    cout << "Total Pendapatan: " << totalPendapatan << endl;
    tentukanKesimpulan(modal, totalPendapatan);

    return 0;
}

