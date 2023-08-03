#include <iostream>
using namespace std;

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

bool ktmang(int a[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        if (a[start] != a[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void xuat(int a[], int n) {
    if (ktmang(a, n)) {
        cout << "mang vua nhap doi xung.";
    } else {
        cout << "mang vua nhap khong doi xung.";
    }
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

