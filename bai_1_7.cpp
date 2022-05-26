#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

void xuat(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}

void xoa(int a[], int &n, int vitrixoa){
    for(int i=vitrixoa; i<n; i++){
        a[i] = a[i+1];
    }
    n--;
}

void xoapttrung(int a[], int &n){
    for(int i=0; i<n; i++){
        for(int j=1+1; j<n; j++){
            if(a[i]==a[j]){
                xoa(a,n,j);
                i--;
            }
        }
    }
}

int main(){
    int a[1000];
    int n;
    cin >> n;
    nhap(a,n);
    xuat(a,n);
    xoapttrung(a,n);
    cout<< "Mang sau khi rut gon: ";
    xuat(a,n);
}