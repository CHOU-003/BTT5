#include <iostream>
using namespace std;

void NhapMang(int a[], int n){
    for(int i=0; i<n; i++){
        NhapLai:
        cout << "Nhap a[" << i << "] = ";
        cin >>a[i];
     if(i > 0 && a[i] < a[i-1]){
        cout << "Nhap lai !!!" << endl;
        goto NhapLai;
     }
    }
}

bool KT(int n){
    if(n < 2){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void XuatSNT(int a[], int n){
    cout << "Cac so nguyen to co trong mang la: ";
    for(int i=0; i<n; i++){
        if(KT(a[i])){
            cout << a[i] << " ";
        }
    }
}

int main(){
    int n;
    cout << "Nhap so pt mang: ";
    cin >> n;
    int a[n];
    NhapMang(a,n);
    XuatSNT(a,n);
    return 0;
}