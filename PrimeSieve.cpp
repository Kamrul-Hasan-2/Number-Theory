#include<bits/stdc++.h>
using namespace std; 

const int n = 1e7+10;


void PrimeSieve(int k){
    int prime[k] = {0};

    for(int i = 2; i<=n; i++){
        if(prime[i]==0){
            for(int j=i*i; j<=n; j+=i){
                prime[j]=1;
            }
        }
    }

    for(int i=2; i<=k; i++){
        if(prime[i]==0){
            cout << i << " ";
        }
    }

}

int main(){
    int k;
    cin >> k;
    PrimeSieve(k);
}