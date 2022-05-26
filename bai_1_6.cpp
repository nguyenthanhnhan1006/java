#include <iostream>
#include <math.h>
using namespace std;


int main(){
    long long i, dem;
    dem = 0;
    for(int i=1; i<=10000000; i++){
        int x = sqrt(i);
        if(x*x==i){
            dem++;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << dem;
}