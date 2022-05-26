//Cho dãy n số nguyên a[I], I=1..n. Hãy tìm cách dưa k số đầu cuối về cuối dãy. Hãy chạy chương trình khi n=60.000

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n/2; i++){
        swap(a[i],a[n-1-i]);
    }
    for(int i=0; i<n; i++){
        cout << a[i]<< " ";
    }
}