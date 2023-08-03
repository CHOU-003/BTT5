#include <iostream>
using namespace std;

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

bool ktmang(int a[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    return count == 1;
}

void xuat(int a[], int n) {
    bool coSoXuatHienMotLan = false;
    cout << "Cac so chi xuat hien 1 lan: ";
    for (int i = 0; i < n; i++) {
        if (ktmang(a, n, a[i])) {
            cout << a[i] << " ";
            coSoXuatHienMotLan = true;
        }
    }
    if (!coSoXuatHienMotLan) {
        cout << "Khong co phan tu nao xuat hien 1 lan.";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "nhap so pt mang: ";
    cin >> n;
    int a[n];
    nhapmang(a, n);
    xuat(a, n);
    return 0;
}

