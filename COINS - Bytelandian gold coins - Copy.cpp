#include<bits/stdc++.h>
using namespace std;
#define N 100005
#define ll long long int
vector< ll> dp(N+1);
ll func(ll n){
    if(n==0){
        return 0;
    }
    else{
            if(n<N){
                return dp[n];
            }
            else{
                return max(n,(func(n/2)+func(n/3)+func(n/4)));
            }
    }

}
void preprocess(){
    dp[0]=0;
    for(ll i=1;i<=N;i++){
        dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);
    }

}

int main(){
    preprocess();
    ll n;

    while(cin>>n){
        cout<<func(n)<<"\n";
    }

return 0;}
