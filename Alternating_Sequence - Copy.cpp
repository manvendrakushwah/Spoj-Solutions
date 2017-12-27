#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> LIS(n,1);

    for(ll i=1;i<n;i++){
        for(ll j=0;j<i;j++){
            if(v[i]*v[j]<0){
                if(abs(v[j])<abs(v[i])){
                    LIS[i]=max(LIS[i],1+LIS[j]);
                }
            }
        }
    }
    ll maxm=-1;
    for(ll i=0;i<n;i++){
        maxm=max(maxm,LIS[i]);
    }
    cout<<maxm<<"\n";

return 0;}
