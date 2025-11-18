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
