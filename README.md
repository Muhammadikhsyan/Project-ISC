// Fungsi untuk menghitung total pendapatan (mayang)
double hitungPendapatan(Produk data[], int n) {
    double totalPendapatan = 0;
    for (int i = 0; i < n; i++) {
        double pendapatan = data[i].hargaPerUnit * data[i].unitTerjual;
        cout << fixed << setprecision(0);
        cout << "Pendapatan " << data[i].namaProduk << ": " << pendapatan << endl;
        totalPendapatan += pendapatan;
    }
    return totalPendapatan;
}

// Fungsi untuk menentukan kesimpulan (melan)
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

    return 0;
}


