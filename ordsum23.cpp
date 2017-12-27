#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n=1000000;
    vector<unsigned long long int> dp(n+1);
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(long long int i=4;i<=n;i++){
        dp[i]=(dp[i-2]%1000000007+dp[i-3]%1000000007)%1000000007;
    }
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        cout<<dp[n]<<"\n";

    }







return 0;}
