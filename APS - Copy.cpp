#include<bits/stdc++.h>
#define ll long long int
using namespace std;
long int const N=10000001;


int main(){
    vector<int>prime(N);
    vector<pair<ll,ll> > fact(N);
    for(int i=0;i<N;i++){
        fact[i].first=i;
        fact[i].second=0;
        prime[i]=1;
       // cout<<"a\n";
    }
    for(int i=2;i*i<=N;i++){
        if(prime[i]==1){
        for(int j=i*2;j<N;j+=i){
            if(fact[j].second==0){
                fact[j].first=i;
                prime[j]==0;
            }
//            cout<<"b\n";
        }}
  //      cout<<"c\n";
    }
    vector<ll>ans(N);
    ans[0]=0;
    ans[1]=0;
    for(int i=2;i<N;i++){
        ans[i]=ans[i-1]+fact[i].first;
    //    cout<<"d\n";
    }
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<ans[n]<<"\n";


    }




return 0;}
