#include <bits/stdc++.h>
using namespace std;
 
long long power(int b, long p, long long m){
    long long res = 1;
    while(p){
        if(p%2==1){
            res=(res*b)%m;
            p--;
        }
        else{
            b=(b*b)%m;
            p/=2;
        }
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    long long b, p, result;
    cin>>b>>p;
    result= power(b,p,10e9);
    cout<< result<<endl;
    }
}
