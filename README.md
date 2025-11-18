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
