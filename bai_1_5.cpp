//Thực hiện phép cộng, trừ, nhân hai số nguyên lớn.

#include <bits/stdc++.h>
using namespace std;

void removeZero(vector<int> &v){
    while (v[v.size()-1]==0 && v.size()>1)
    {
        v.pop_back();
    }
    
}

void init (char str[], vector<int> &v){
    for(int i=strlen(str) - 1; i>=0; i--){
        v.push_back(str[i]-'0');
    }
    removeZero(v);
}

void print(vector<int> v){
    for(int i=v.size()-1; i>=0; i--){
        for(int i=v.size()-1; i>=0; i--)
            cout << v[i];
    }
}

void add(vector<int>v1, vector<int>v2, vector<int> &v3){
    v3.clear();
    int length = v1.size() > v2.size() ? v1.size() : v2.size();
    v1.reserve(length);
    v2.reserve(length);

    int extra = 0;
    int temp;
    for (int i=0; i<length; i++){
        temp = v1[i] + v2[i] + extra;
        v3.push_back(temp%10);
        extra = temp/10;
    }
    if(extra > 0)
        v3.push_back(temp);
}

void sub(vector<int>v1, vector<int>v2, vector<int> &v3){
    v3.clear();
    int length = v1.size();
    v2.reserve(length);
    int extra = 0;
    int temp;
    for(int i=0; i<length; i++){
        if(v1[i]<v2[i]+extra){
            v3.push_back(v1[i]-v2[i]-extra+10);
            extra = 1;
        }
        else{
            v3.push_back(v1[i]-v2[i]-extra);
            extra = 0;
        }
    }
    removeZero(v3);
}

void mul(vector<int>v1, vector<int>v2, vector<int> &v3){
    v3.clear();
    for(int i=0; i<v1.size(); i++){
        vector<int>v4;
        int extra = 0, tmp;
        for(int j=0; j<v2.size();i++){
            tmp = v1[i]*v2[j]+extra;
            v4.push_back(tmp%10);
            extra = tmp/10;
        }
        if(extra>0)
            v4.push_back(extra);
        for(int j=0; j<i; j++){
            v4.insert(v4.begin(),0);
        }
        add(v3,v4,v3);
    }
}

int main(){
    char a[] = "362829949";
    char b[] = "082233322";
    vector<int> v1,v2,v3;
    init(a,v1);
    init(b,v2);
    print(v1);
    cout<<endl;
    print(v2);
    cout<< endl;
}