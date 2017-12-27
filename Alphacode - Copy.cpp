#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
int main(){

    while(1){
        string s;
        cin>>s;
        if(s=="0"){
            break;
        }
        else{
        ull n=s.size();
        vector<ull> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        if(10*(s[0]-'0')+(s[1]-'0') <=26){
            dp[2]++;
        }
        for(int i=3;i<=n;i++){
            int c=10*(s[i-1]-'0')+(s[i]-'0');
            cout<<c<<"\n";
            if(c<=26){
                dp[i]=dp[i-1]+dp[i-2];
            }
            else{
                dp[i]=dp[i-1];
            }

        }


        cout<<dp[n-1]<<"\n";

        }






    }

    return 0;
}
