#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define N 1000001

int main(){
    while(1){
    string s;
    cin>>s;
    if(s=="0"){
        break;
    }
    int n=s.size();
    vector<int> dp(n,0);
    dp[0]=1;
    dp[1]=1;
    if((s[1]-'0')+(10*(s[0]-'0'))<=26){
        dp[1]=2;
    }

      if(s[1]=='0'){
            dp[1]-=dp[0];
            dp[0]=0;
            if(s[1-1]-'0'>2){
                dp[1]=0;
            }

        }






    for(int i=2;i<n;i++){
        if(s[i]-'0'+(10*(s[i-1]-'0'))<=26){
            dp[i]=dp[i-1]+dp[i-2];
        }
        else{
            dp[i]=dp[i-1];
        }
        if(s[i]=='0'){
            dp[i]-=dp[i-1];
            dp[i-1]=0;
            if(s[i-1]-'0'>2){
                dp[i]=0;
            }

        }
    }
    if(s[0]=='0'){dp[n-1]=0;}
    cout<<dp[n-1]<<"\n";

    }

return 0;}
