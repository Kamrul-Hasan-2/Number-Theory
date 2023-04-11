#include<bits/stdc++.h>
using namespace std;
bool prime[900000001];
int n=90000000;
vector<int>v;

void sieve(){
    for(int i=2; i*i<=n; i++){
        if(prime[i]==false){
            for(int j=i*i; j<=n; j+=i){
                prime[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]==false){
            v.push_back(i);
        }
    }

}


int main(){
    sieve();
    int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}
}