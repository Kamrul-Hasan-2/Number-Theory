#include<bits/stdc++.h>
using namespace std; 

const int N = 1e7 + 10;
vector<bool> isPrime(N,1);

void sieve(int a){
    isPrime[0] = isPrime[1] = false;
    for(int i=0; i< N; i++){
        if(isPrime[i]==true){
            for(int j=2*i; j<N; j+=i){
                isPrime[j]=false;
            }
        }
    }
//     for(int i=2; i<50; i++){
//        cout << isPrime[i] << endl;
//    }
   for(int i=2; i<a; i++){
        if(isPrime[i]==true){
            cout << i << " ";
        }
   }
}

int main(){
    int a; 
    cin>> a;
    sieve(a);
}