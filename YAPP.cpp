#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll pow_mod(ll n,ll p, ll mod){
    if(p==0){
        return 1;
    }
    else{
        if(p%2==0){
            return ((pow_mod(n,p/2,mod)%mod)*(pow_mod(n,p/2,mod)%mod))%mod;
        }
        else{
            return ((n%mod)*(pow_mod(n,p-1,mod)%mod))%mod;
        }
    }

}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<pow_mod(2,n-1,1000000007)<<"\n";

    }

return 0;}
